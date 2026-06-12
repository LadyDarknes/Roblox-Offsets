import re
import os
import idc
import idaapi
import ida_bytes
import ida_funcs
import ida_ua

# List of offsets to resolve and rename
OFFSETS = {
    "Atmosphere": {
        "Color": 0xD0,
        "Decay": 0xDC,
        "Density": 0xE8,
        "Glare": 0xEC,
        "Haze": 0xF0,
        "Offset": 0xF4,
    },
    "BasePart": {
        "CastShadow": 0xF5,
        "Color3": 0x194,
        "Locked": 0xF6,
        "Massless": 0xF7,
        "Primitive": 0x148,
        "Reflectance": 0xEC,
        "Shape": 0x1B1,
        "Transparency": 0xF0,
    },
    "BloomEffect": {
        "Intensity": 0xD0,
        "Size": 0xD4,
        "Threshold": 0xD8,
    },
    "ByteCode": {
        "Pointer": 0x10,
        "Size": 0x20,
    },
    "Camera": {
        "CFrame": 0xF8,
        "FieldOfView": 0x160,
        "Position": 0x11C,
        "Rotation": 0xF8,
        "ViewportInt16": 0x2AC,
        "ViewportSize": 0x2E8,
    },
    "CharacterMesh": {
        "BaseTextureId": 0xE0,
        "BodyPart": 0x160,
        "MeshId": 0x110,
        "OverlayTextureId": 0x140,
    },
    "DataModel": {
        "CreatorId": 0x190,
        "GameId": 0x198,
        "GameLoaded": 0x670,
        "JobId": 0x138,
        "PlaceId": 0x1A0,
        "ServerIP": 0x658,
        "Workspace": 0x178,
    },
    "FakeDataModel": {
        "Pointer": 0x7A39AD8, # Dynamic pointer (RVA)
        "RealDataModel": 0x1D8,
    },
    "GuiBase2D": {
        "AbsolutePosition": 0x10C,
        "AbsoluteRotation": 0x188,
        "AbsoluteSize": 0x118,
    },
    "GuiObject": {
        "Active": 0x5A8,
        "AnchorPoint": 0x558,
        "AutomaticSize": 0x560,
        "BackgroundColor3": 0x540,
        "BackgroundTransparency": 0x564,
        "BorderColor3": 0x54C,
        "BorderMode": 0x568,
        "BorderSizePixel": 0x56C,
        "ClipsDescendants": 0x5A9,
        "GuiState": 0x578,
        "Interactable": 0x5AB,
        "LayoutOrder": 0x580,
        "Position": 0x510,
        "Rotation": 0x188,
        "Selectable": 0x5AC,
        "SelectionOrder": 0x59C,
        "Size": 0x530,
        "SizeConstraint": 0x5A0,
        "Visible": 0x5AD,
        "ZIndex": 0x5A4,
    },
    "Humanoid": {
        "AutoJumpEnabled": 0x1E0,
        "AutoRotate": 0x1E1,
        "AutomaticScalingEnabled": 0x1E2,
        "BreakJointsOnDeath": 0x1E3,
        "CameraOffset": 0x140,
        "DisplayDistanceType": 0x18C,
        "EvaluateStateMachine": 0x1E4,
        "Health": 0x194,
        "HealthDisplayDistance": 0x198,
        "HealthDisplayType": 0x19C,
        "HipHeight": 0x1A0,
        "JumpHeight": 0x1AC,
        "JumpPower": 0x1B0,
        "MaxHealth": 0x1B4,
        "MaxSlopeAngle": 0x1B8,
        "NameDisplayDistance": 0x1BC,
        "NameOcclusion": 0x1C0,
        "RequiresNeck": 0x1E9,
        "RigType": 0x1CC,
        "SeatPart": 0x120,
        "Sit": 0x1EA,
        "TargetPoint": 0x164,
        "UseJumpPower": 0x1EC,
        "WalkSpeed": 0x1DC,
        "WalkSpeedCheck": 0x3C4,
        "WalkToPoint": 0x17C,
    },
    "InputObject": {
        "MousePosition": 0xEC,
    },
    "Instance": {
        "AttributeContainer": 0x48,
        "AttributeList": 0x18,
        "AttributeToNext": 0x58,
        "AttributeToValue": 0x18,
        "ChildrenEnd": 0x8,
        "ChildrenStart": 0x78,
        "ClassDescriptor": 0x18,
        "ClassName": 0x8,
        "Name": 0xB0,
        "Parent": 0x70,
    },
    "Lighting": {
        "Ambient": 0xE0,
        "Atmosphere": 0x1F0,
        "Brightness": 0x128,
        "ClockTime": 0x1C0,
        "ColorShift_Bottom": 0xEC,
        "ColorShift_Top": 0xF8,
        "EnvironmentDiffuseScale": 0x12C,
        "EnvironmentSpecularScale": 0x130,
        "ExposureCompensation": 0x134,
        "FogColor": 0x104,
        "FogEnd": 0x13C,
        "FogStart": 0x140,
        "OutdoorAmbient": 0x110,
        "ShadowSoftness": 0x148,
        "Sky": 0x1E0,
    },
    "LightingParameters": {
        "GeographicLatitude": 0x198,
        "LightColor": 0x164,
        "LightDirection": 0x170,
        "SkyAmbient": 0x158,
        "SkyAmbient2": 0x19C,
        "Source": 0x17C,
        "TrueMoonPosition": 0x18C,
        "TrueSunPosition": 0x180,
    },
    "LocalScript": {
        "Bytecode": 0x1A8,
        "Hash": 0xE8,
    },
    "MaterialColors": {
        "Asphalt": 0x30,
        "Basalt": 0x27,
        "Brick": 0xF,
        "Cobblestone": 0x33,
        "Concrete": 0xC,
        "CrackedLava": 0x2D,
        "Glacier": 0x1B,
        "Grass": 0x6,
        "Ground": 0x2A,
        "Ice": 0x36,
        "LeafyGrass": 0x39,
        "Limestone": 0x3F,
        "Mud": 0x24,
        "Pavement": 0x42,
        "Rock": 0x18,
        "Salt": 0x3C,
        "Sand": 0x12,
        "Sandstone": 0x21,
        "Slate": 0x9,
        "Snow": 0x1E,
        "WoodPlanks": 0x15,
    },
    "MeshPart": {
        "MeshId": 0x2F8,
        "TextureId": 0x328,
    },
    "ModuleScript": {
        "Bytecode": 0x150,
        "Hash": 0xE8,
    },
    "MouseService": {
        "InputObject": 0x118,
    },
    "Player": {
        "AccountAge": 0x34C,
        "Character": 0x3C8,
        "DisplayName": 0x150,
        "HealthDisplayDistance": 0x378,
        "LocaleId": 0x720,
        "NameDisplayDistance": 0x388,
        "Team": 0x2D0,
        "TeamColor": 0x394,
        "UserId": 0x2F8,
    },
    "Players": {
        "LocalPlayer": 0x138,
    },
    "Primitive": {
        "AssemblyAngularVelocity": 0x104,
        "AssemblyLinearVelocity": 0xF8,
        "CFrame": 0xC8,
        "Material": 0x236,
        "Orientation": 0xC8,
        "Position": 0xEC,
        "PrimitiveFlags": 0x1B6,
        "Rotation": 0xC8,
        "Size": 0x1B8,
    },
    "PrimitiveFlags": {
        "Anchored": 0x2,
        "CanCollide": 0x8,
        "CanQuery": 0x20,
        "CanTouch": 0x10,
    },
    "ProximityPrompt": {
        "ActionText": 0xC8,
        "Enabled": 0x14E,
        "HoldDuration": 0x138,
        "KeyboardKeyCode": 0x13C,
        "MaxActivationDistance": 0x140,
        "ObjectText": 0xE8,
        "RequiresLineOfSight": 0x14F,
    },
    "RenderView": {
        "LightingValid": 0x170,
        "SkyboxValid": 0x28D,
    },
    "Seat": {
        "Occupant": 0x218,
    },
    "Sky": {
        "MoonAngularSize": 0x25C,
        "MoonTextureId": 0xE0,
        "SkyboxBk": 0x110,
        "SkyboxDn": 0x140,
        "SkyboxFt": 0x170,
        "SkyboxLf": 0x1A0,
        "SkyboxOrientation": 0x250,
        "SkyboxRt": 0x1D0,
        "SkyboxUp": 0x200,
        "StarCount": 0x260,
        "SunAngularSize": 0x264,
        "SunTextureId": 0x230,
    },
    "SpecialMesh": {
        "MeshId": 0x110,
        "Offset": 0xD0,
        "Scale": 0xDC,
        "TextureId": 0x140,
    },
    "Team": {
        "TeamColor": 0xD0,
    },
    "Terrain": {
        "GrassLength": 0x1F0,
        "MaterialColors": 0x4A0,
        "WaterColor": 0x1E0,
        "WaterReflectance": 0x1F8,
        "WaterTransparency": 0x1FC,
        "WaterWaveSize": 0x200,
        "WaterWaveSpeed": 0x204,
    },
    "TextButton": {
        "AutoButtonColor": 0x9C4,
        "ContentText": 0xDD0,
        "Font": 0x10E8,
        "LineHeight": 0xEC8,
        "LocalizedText": 0xDD0,
        "MaxVisibleGraphemes": 0x10F4,
        "Modal": 0x9C5,
        "RichText": 0xFC6,
        "Selected": 0x9C6,
        "Text": 0xDD0,
        "TextColor3": 0x10D0,
        "TextDirection": 0xF68,
        "TextScaled": 0xDB9,
        "TextSize": 0x10FC,
        "TextStrokeColor3": 0x10DC,
        "TextStrokeTransparency": 0x1100,
        "TextTransparency": 0x1104,
        "TextTruncate": 0x1108,
        "TextWrapped": 0xFC0,
        "TextXAlignment": 0x110C,
        "TextYAlignment": 0xF10,
    },
    "TextLabel": {
        "ContentText": 0xB50,
        "Font": 0xE68,
        "LineHeight": 0xC48,
        "LocalizedText": 0xB50,
        "MaxVisibleGraphemes": 0xE74,
        "RichText": 0xD46,
        "Text": 0xB50,
        "TextColor3": 0xE50,
        "TextDirection": 0xCE8,
        "TextScaled": 0xB39,
        "TextSize": 0xE7C,
        "TextStrokeColor3": 0xE5C,
        "TextStrokeTransparency": 0xE80,
        "TextTransparency": 0xE84,
        "TextTruncate": 0xE88,
        "TextWrapped": 0xD40,
        "TextXAlignment": 0xE8C,
        "TextYAlignment": 0xC90,
    },
    "Tool": {
        "CanBeDropped": 0x4C8,
        "Enabled": 0x4C9,
        "Grip": 0x498,
        "GripForward": 0x4B0,
        "GripPos": 0x4BC,
        "GripRight": 0x498,
        "GripUp": 0x4A4,
        "ManualActivationOnly": 0x4CA,
        "RequiresHandle": 0x4CB,
        "Tooltip": 0x478,
    },
    "Value": {
        "Value": 0xD0,
    },
    "VehicleSeat": {
        "MaxSpeed": 0x230,
        "Occupant": 0x210,
        "SteerFloat": 0x238,
        "ThrottleFloat": 0x240,
        "Torque": 0x244,
        "TurnSpeed": 0x248,
    },
    "VisualEngine": {
        "Dimensions": 0xAB0,
        "FakeDataModel": 0xA90,
        "Pointer": 0x8158B80, # Dynamic pointer (RVA)
        "RenderView": 0xBB0,
        "ViewMatrix": 0x150,
    },
    "Workspace": {
        "CurrentCamera": 0x4B0,
        "ReadOnlyGravity": 0x9F0,
        "World": 0x408,
    },
    "World": {
        "Gravity": 0x210,
        "Primitives": 0x280,
        "WorldSteps": 0x678,
    }
}

def make_python_signature(ea, length=24):
    """
    Generates a basic IDA signature starting at address 'ea' for a given length.
    Wildcards standard displacement/relocation bytes.
    """
    pattern = []
    curr = ea
    while curr < ea + length:
        insn = ida_ua.insn_t()
        insn_len = ida_ua.decode_insn(insn, curr)
        if insn_len <= 0:
            pattern.append(f"{idc.get_wide_byte(curr):02X}")
            curr += 1
            continue
        
        insn_bytes = idc.get_bytes(curr, insn_len)
        if not insn_bytes:
            break
            
        first_byte = insn_bytes[0]
        # Wildcard jmp/call displacement
        if first_byte in [0xE8, 0xE9]:
            pattern.append(f"{first_byte:02X}")
            pattern.extend(["?"] * (insn_len - 1))
        # Wildcard RIP relative instructions
        elif insn_len >= 5 and (first_byte in [0x48, 0x4C, 0x4F]) and insn_bytes[1] in [0x8B, 0x8D, 0x39, 0x3B, 0x89]:
            for i in range(insn_len - 4):
                pattern.append(f"{insn_bytes[i]:02X}")
            pattern.extend(["?"] * 4)
        else:
            for b in insn_bytes:
                pattern.append(f"{b:02X}")
        curr += insn_len
    return " ".join(pattern[:length])

def get_text_segment():
    return idaapi.get_segm_by_name(".text")

def force_define_function(ea):
    """
    Undefines existing item, creates instruction, and adds function.
    """
    ida_bytes.del_items(ea, 0, 16)
    idc.create_insn(ea)
    return ida_funcs.add_func(ea)

def scan_for_getters(text_data, text_start, class_name, prop_name, offset):
    """
    Scans the text section bytes for standard getter pattern signatures.
    Returns the virtual address if found, otherwise None.
    """
    # Build regexes for offset
    offset_le = offset.to_bytes(4, byteorder='little')
    offset_b = bytes([offset]) if offset < 0x80 else None
    
    patterns = []
    
    # Pattern 1: mov rax, [rcx + offset]; ret
    if offset < 0x80:
        patterns.append(re.compile(re.escape(b'\x48\x8B\x41' + offset_b + b'\xC3')))
    else:
        patterns.append(re.compile(re.escape(b'\x48\x8B\x81' + offset_le + b'\xC3')))
        
    # Pattern 2: movss xmm0, [rcx + offset]; ret
    if offset < 0x80:
        patterns.append(re.compile(re.escape(b'\xF3\x0F\x10\x41' + offset_b + b'\xC3')))
    else:
        patterns.append(re.compile(re.escape(b'\xF3\x0F\x10\x81' + offset_le + b'\xC3')))
        
    # Pattern 3: movzx eax, byte/word; ret
    if offset < 0x80:
        patterns.append(re.compile(re.escape(b'\x0F\xB6\x41' + offset_b + b'\xC3')))
        patterns.append(re.compile(re.escape(b'\x0F\xB7\x41' + offset_b + b'\xC3')))
    else:
        patterns.append(re.compile(re.escape(b'\x0F\xB6\x81' + offset_le + b'\xC3')))
        patterns.append(re.compile(re.escape(b'\x0F\xB7\x81' + offset_le + b'\xC3')))
        
    # Pattern 4: copy structure (UserId, PlaceId style)
    # mov rax, [rcx + offset]; mov [rdx], rax; mov rax, rdx; mov [rdx+8], r8; ret
    if offset >= 0x80:
        patterns.append(re.compile(re.escape(b'\x48\x8B\x81' + offset_le + b'\x48\x89\x02\x48\x8B\xC2\x4C\x89\x42') + b'.' + re.escape(b'\xC3')))
        # Short copy structure (Character style)
        patterns.append(re.compile(re.escape(b'\x48\x8B\x81' + offset_le + b'\x48\x89\x02')))

    # Scan the text segment
    for pattern in patterns:
        for match in pattern.finditer(text_data):
            ea = text_start + match.start()
            prev_byte = idc.get_wide_byte(ea - 1)
            if prev_byte in [0xCC, 0x90, 0xC3]:
                return ea
            return ea
            
    # Fallback pattern matching for properties embedded in larger functions
    # (e.g. searching for the instruction accessing the offset directly)
    if offset >= 0x80:
        # Search for any instruction containing the 4-byte offset
        idx = 0
        while True:
            idx = text_data.find(offset_le, idx)
            if idx == -1:
                break
            ea = text_start + idx
            head = idc.get_item_head(ea)
            dis = idc.GetDisasm(head)
            if f"{offset:X}" in dis or f"{offset:x}" in dis:
                # Found an instruction accessing this offset
                return head
            idx += 1
            
    return None

def main():
    image_base = idaapi.get_imagebase()
    print(f"[*] Image Base: 0x{image_base:X}")
    print("[*] Reading .text segment memory...")
    
    text_seg = get_text_segment()
    if not text_seg:
        print("[-] Error: .text segment not found!")
        return
        
    text_start = text_seg.start_ea
    text_end = text_seg.end_ea
    text_data = idc.get_bytes(text_start, text_end - text_start)
    if not text_data:
        print("[-] Error: Failed to read .text bytes!")
        return
        
    print("[*] Scanning for getters and renaming...")
    
    results = []
    
    for class_name, props in OFFSETS.items():
        for prop_name, offset in props.items():
            # If it's a global pointer address (RVA), treat differently
            if class_name in ["FakeDataModel", "VisualEngine"] and prop_name == "Pointer":
                # It's a static pointer address
                addr = image_base + offset
                name = f"{class_name}_ptr"
                old_name = idc.get_name(addr)
                idc.set_name(addr, name, idc.SN_CHECK)
                print(f"[+] Renamed Global 0x{addr:X} ({old_name or 'no name'}) -> {name}")
                results.append({
                    "class": class_name,
                    "prop": prop_name,
                    "offset": f"0x{offset:X}",
                    "address": f"0x{addr:X}",
                    "signature": "N/A (Global Data)"
                })
                continue
                
            # Otherwise, scan for the getter
            ea = scan_for_getters(text_data, text_start, class_name, prop_name, offset)
            if ea:
                # Force define function
                force_define_function(ea)
                
                # Generate name
                func_name = f"{class_name}_get{prop_name}"
                old_name = idc.get_name(ea)
                idc.set_name(ea, func_name, idc.SN_CHECK)
                
                # Make signature
                sig = make_python_signature(ea, 24)
                
                print(f"[+] Resolved {class_name}.{prop_name} (Offset 0x{offset:X}) -> Function: {func_name} @ {hex(ea)}")
                results.append({
                    "class": class_name,
                    "prop": prop_name,
                    "offset": f"0x{offset:X}",
                    "address": f"0x{ea:X}",
                    "signature": sig
                })
            else:
                # If getter not found, log it as unresolved
                print(f"[-] Could not resolve getter for {class_name}.{prop_name} (Offset 0x{offset:X})")
                results.append({
                    "class": class_name,
                    "prop": prop_name,
                    "offset": f"0x{offset:X}",
                    "address": "Not Found",
                    "signature": "N/A"
                })
                
    # Save the output C++ header file
    header_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), "offsets.h")
    try:
        with open(header_path, "w") as f:
            f.write("#pragma once\n")
            f.write("#include <cstdint>\n\n")
            f.write("// Auto-generated Roblox Offsets & Patterns\n")
            f.write("// Target Version: version-76173e47a79145c7\n\n")
            f.write("namespace Roblox {\n")
            
            current_class = ""
            for res in results:
                if res["class"] != current_class:
                    if current_class != "":
                        f.write("    }\n\n")
                    current_class = res["class"]
                    f.write(f"    namespace {current_class} {{\n")
                
                # Check if resolved
                addr_info = ""
                if res["address"] != "Not Found":
                    addr_info = f" // Resolved @ {res['address']} | Sig: {res['signature']}"
                else:
                    addr_info = " // Unresolved in this version"
                
                f.write(f"        constexpr std::uintptr_t {res['prop']} = {res['offset']};{addr_info}\n")
            
            if current_class != "":
                f.write("    }\n")
            f.write("}\n")
        print(f"[+] offsets.h saved to {header_path}")
    except Exception as e:
        print(f"[-] Failed to save offsets.h: {e}")

if __name__ == "__main__":
    main()
