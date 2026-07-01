#pragma once
#include <cstdint>

// Target Version: version-5cf2272675e145f5

namespace Roblox {
    namespace Atmosphere {
        constexpr std::uintptr_t Color = 0xD0; // Resolved @ 0x7FF68FDA1F70
        constexpr std::uintptr_t Decay = 0xDC; // Resolved @ 0x7FF6903E4F90
        constexpr std::uintptr_t Density = 0xE8; // Resolved @ 0x7FF6905C6B80
        constexpr std::uintptr_t Glare = 0xEC; // Resolved @ 0x7FF6903E4FD0
        constexpr std::uintptr_t Haze = 0xF0; // Resolved @ 0x7FF68FDA20C0
        constexpr std::uintptr_t Offset = 0xF4; // Resolved @ 0x7FF6903E4FF0
    }
    namespace BasePart {
        constexpr std::uintptr_t CastShadow = 0xF5; // Resolved @ 0x7FF68FDF9FE9
        constexpr std::uintptr_t Color3 = 0x194; // Resolved @ 0x7FF6900BD9B0
        constexpr std::uintptr_t Locked = 0xF6; // Resolved @ 0x7FF68F3D6413
        constexpr std::uintptr_t Massless = 0xF7; // Resolved @ 0x7FF68FC2647D
        constexpr std::uintptr_t Primitive = 0x148; // Resolved @ 0x7FF68F4180D9
        constexpr std::uintptr_t Reflectance = 0xEC; // Resolved @ 0x7FF6903E4FD0
        constexpr std::uintptr_t Shape = 0x1B1; // Unresolved in this version
        constexpr std::uintptr_t Transparency = 0xF0; // Resolved @ 0x7FF68FDA20C0
    }
    namespace BloomEffect {
        constexpr std::uintptr_t Intensity = 0xD0; // Resolved @ 0x7FF68FDA1F70
        constexpr std::uintptr_t Size = 0xD4; // Resolved @ 0x7FF6903E4F50
        constexpr std::uintptr_t Threshold = 0xD8; // Resolved @ 0x7FF6903E4F60
    }
    namespace ByteCode {
        constexpr std::uintptr_t Pointer = 0x10; // Resolved @ 0x7FF68FA45A70
        constexpr std::uintptr_t Size = 0x20; // Resolved @ 0x7FF68FB9FE40
    }
    namespace Camera {
        constexpr std::uintptr_t CFrame = 0xF8; // Resolved @ 0x7FF68FDA1F30
        constexpr std::uintptr_t FieldOfView = 0x160; // Resolved @ 0x7FF690A22AE3
        constexpr std::uintptr_t Position = 0x11C; // Resolved @ 0x7FF6902A52A0
        constexpr std::uintptr_t Rotation = 0xF8; // Resolved @ 0x7FF68FDA1F30
        constexpr std::uintptr_t ViewportInt16 = 0x2AC; // Resolved @ 0x7FF691FA9BA0
        constexpr std::uintptr_t ViewportSize = 0x2E8; // Resolved @ 0x7FF68FA20646
    }
    namespace CharacterMesh {
        constexpr std::uintptr_t BaseTextureId = 0xE0; // Resolved @ 0x7FF69047ED70
        constexpr std::uintptr_t BodyPart = 0x160; // Resolved @ 0x7FF690A22AE3
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF68FDA1F40
        constexpr std::uintptr_t OverlayTextureId = 0x140; // Resolved @ 0x7FF690A22AC7
    }
    namespace DataModel {
        constexpr std::uintptr_t CreatorId = 0x190; // Resolved @ 0x7FF690A22A65
        constexpr std::uintptr_t GameId = 0x198; // Resolved @ 0x7FF6903EC720
        constexpr std::uintptr_t GameLoaded = 0x670; // Resolved @ 0x7FF69206D8E0
        constexpr std::uintptr_t JobId = 0x138; // Resolved @ 0x7FF691578E40
        constexpr std::uintptr_t PlaceId = 0x1A0; // Resolved @ 0x7FF691E47340
        constexpr std::uintptr_t ServerIP = 0x658; // Resolved @ 0x7FF692175ECD
        constexpr std::uintptr_t Workspace = 0x178; // Resolved @ 0x7FF692173EE0
    }
    namespace FakeDataModel {
        constexpr std::uintptr_t Pointer = 0x7A39AD8; // Resolved @ 0x7FF696E09AD8 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RealDataModel = 0x1D8; // Resolved @ 0x7FF69061D3F0
    }
    namespace GuiBase2D {
        constexpr std::uintptr_t AbsolutePosition = 0x10C; // Resolved @ 0x7FF6905C6C70
        constexpr std::uintptr_t AbsoluteRotation = 0x188; // Resolved @ 0x7FF6903EC6D0
        constexpr std::uintptr_t AbsoluteSize = 0x118; // Resolved @ 0x7FF6902A5290
    }
    namespace GuiObject {
        constexpr std::uintptr_t Active = 0x5A8; // Resolved @ 0x7FF68FE9EAC4
        constexpr std::uintptr_t AnchorPoint = 0x558; // Resolved @ 0x7FF691B67E5B
        constexpr std::uintptr_t AutomaticSize = 0x560; // Resolved @ 0x7FF69051E397
        constexpr std::uintptr_t BackgroundColor3 = 0x540; // Resolved @ 0x7FF692E54730
        constexpr std::uintptr_t BackgroundTransparency = 0x564; // Resolved @ 0x7FF6929357AD
        constexpr std::uintptr_t BorderColor3 = 0x54C; // Resolved @ 0x7FF692935705
        constexpr std::uintptr_t BorderMode = 0x568; // Resolved @ 0x7FF690B4E7F9
        constexpr std::uintptr_t BorderSizePixel = 0x56C; // Resolved @ 0x7FF691B6AEC0
        constexpr std::uintptr_t ClipsDescendants = 0x5A9; // Unresolved in this version
        constexpr std::uintptr_t GuiState = 0x578; // Resolved @ 0x7FF68FBB0809
        constexpr std::uintptr_t Interactable = 0x5AB; // Unresolved in this version
        constexpr std::uintptr_t LayoutOrder = 0x580; // Resolved @ 0x7FF68F3D6AFC
        constexpr std::uintptr_t Position = 0x510; // Resolved @ 0x7FF69051E01B
        constexpr std::uintptr_t Rotation = 0x188; // Resolved @ 0x7FF6903EC6D0
        constexpr std::uintptr_t Selectable = 0x5AC; // Resolved @ 0x7FF692935847
        constexpr std::uintptr_t SelectionOrder = 0x59C; // Resolved @ 0x7FF6920CA830
        constexpr std::uintptr_t Size = 0x530; // Resolved @ 0x7FF68FA58CB3
        constexpr std::uintptr_t SizeConstraint = 0x5A0; // Resolved @ 0x7FF68FA43660
        constexpr std::uintptr_t Visible = 0x5AD; // Unresolved in this version
        constexpr std::uintptr_t ZIndex = 0x5A4; // Resolved @ 0x7FF69293580F
    }
    namespace Humanoid {
        constexpr std::uintptr_t AutoJumpEnabled = 0x1E0; // Resolved @ 0x7FF6920EBD00
        constexpr std::uintptr_t AutoRotate = 0x1E1; // Unresolved in this version
        constexpr std::uintptr_t AutomaticScalingEnabled = 0x1E2; // Unresolved in this version
        constexpr std::uintptr_t BreakJointsOnDeath = 0x1E3; // Unresolved in this version
        constexpr std::uintptr_t CameraOffset = 0x140; // Resolved @ 0x7FF690A22AC7
        constexpr std::uintptr_t DisplayDistanceType = 0x18C; // Resolved @ 0x7FF6903EC6E0
        constexpr std::uintptr_t EvaluateStateMachine = 0x1E4; // Unresolved in this version
        constexpr std::uintptr_t Health = 0x194; // Resolved @ 0x7FF6900BD9B0
        constexpr std::uintptr_t HealthDisplayDistance = 0x198; // Resolved @ 0x7FF6903EC720
        constexpr std::uintptr_t HealthDisplayType = 0x19C; // Resolved @ 0x7FF6900BE970
        constexpr std::uintptr_t HipHeight = 0x1A0; // Resolved @ 0x7FF691E47340
        constexpr std::uintptr_t JumpHeight = 0x1AC; // Resolved @ 0x7FF6903EC770
        constexpr std::uintptr_t JumpPower = 0x1B0; // Resolved @ 0x7FF6903EC780
        constexpr std::uintptr_t MaxHealth = 0x1B4; // Resolved @ 0x7FF6903EC7A0
        constexpr std::uintptr_t MaxSlopeAngle = 0x1B8; // Resolved @ 0x7FF691E5611E
        constexpr std::uintptr_t NameDisplayDistance = 0x1BC; // Resolved @ 0x7FF6921CBC20
        constexpr std::uintptr_t NameOcclusion = 0x1C0; // Resolved @ 0x7FF6921CBDC0
        constexpr std::uintptr_t RequiresNeck = 0x1E9; // Resolved @ 0x7FF69284075C
        constexpr std::uintptr_t RigType = 0x1CC; // Resolved @ 0x7FF68FE3C5A0
        constexpr std::uintptr_t SeatPart = 0x120; // Resolved @ 0x7FF6909B5D50
        constexpr std::uintptr_t Sit = 0x1EA; // Unresolved in this version
        constexpr std::uintptr_t TargetPoint = 0x164; // Resolved @ 0x7FF691E9CC7E
        constexpr std::uintptr_t UseJumpPower = 0x1EC; // Resolved @ 0x7FF691CD2000
        constexpr std::uintptr_t WalkSpeed = 0x1DC; // Resolved @ 0x7FF690144100
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4; // Unresolved in this version
        constexpr std::uintptr_t WalkToPoint = 0x17C; // Resolved @ 0x7FF69141F41D
        constexpr std::uintptr_t HumanoidState = 0x830; // Unresolved in this version
        constexpr std::uintptr_t HumanoidStateId = 0x0; // Unresolved in this version
    }
    namespace InputObject {
        constexpr std::uintptr_t MousePosition = 0xEC; // Resolved @ 0x7FF6903E4FD0
    }
    namespace Instance {
        constexpr std::uintptr_t AttributeContainer = 0x48; // Resolved @ 0x7FF68FDF9B70
        constexpr std::uintptr_t AttributeList = 0x18; // Resolved @ 0x7FF68FB47350
        constexpr std::uintptr_t AttributeToNext = 0x58; // Resolved @ 0x7FF690773E90
        constexpr std::uintptr_t AttributeToValue = 0x18; // Resolved @ 0x7FF68FB47350
        constexpr std::uintptr_t ChildrenEnd = 0x8; // Resolved @ 0x7FF68FA6CA70
        constexpr std::uintptr_t ChildrenStart = 0x78; // Resolved @ 0x7FF6903B57D0
        constexpr std::uintptr_t ClassDescriptor = 0x18; // Resolved @ 0x7FF68FB47350
        constexpr std::uintptr_t ClassName = 0x8; // Resolved @ 0x7FF68FA6CA70
        constexpr std::uintptr_t Name = 0xB0; // Resolved @ 0x7FF690A22A73
        constexpr std::uintptr_t Parent = 0x70; // Resolved @ 0x7FF68FBBB3D0
    }
    namespace Lighting {
        constexpr std::uintptr_t Ambient = 0xE0; // Resolved @ 0x7FF69047ED70
        constexpr std::uintptr_t Atmosphere = 0x1F0; // Resolved @ 0x7FF6903C97D0
        constexpr std::uintptr_t Brightness = 0x128; // Resolved @ 0x7FF6902A52D0
        constexpr std::uintptr_t ClockTime = 0x1C0; // Resolved @ 0x7FF6921CBDC0
        constexpr std::uintptr_t ColorShift_Bottom = 0xEC; // Resolved @ 0x7FF6903E4FD0
        constexpr std::uintptr_t ColorShift_Top = 0xF8; // Resolved @ 0x7FF68FDA1F30
        constexpr std::uintptr_t EnvironmentDiffuseScale = 0x12C; // Resolved @ 0x7FF6902A52E0
        constexpr std::uintptr_t EnvironmentSpecularScale = 0x130; // Resolved @ 0x7FF690A22B0D
        constexpr std::uintptr_t ExposureCompensation = 0x134; // Resolved @ 0x7FF691578E30
        constexpr std::uintptr_t FogColor = 0x104; // Resolved @ 0x7FF6907654C0
        constexpr std::uintptr_t FogEnd = 0x13C; // Resolved @ 0x7FF691578E70
        constexpr std::uintptr_t FogStart = 0x140; // Resolved @ 0x7FF690A22AC7
        constexpr std::uintptr_t OutdoorAmbient = 0x110; // Resolved @ 0x7FF68FDA1F40
        constexpr std::uintptr_t ShadowSoftness = 0x148; // Resolved @ 0x7FF68F4180D9
        constexpr std::uintptr_t Sky = 0x1E0; // Resolved @ 0x7FF6920EBD00
    }
    namespace LightingParameters {
        constexpr std::uintptr_t GeographicLatitude = 0x198; // Resolved @ 0x7FF6903EC720
        constexpr std::uintptr_t LightColor = 0x164; // Resolved @ 0x7FF691E9CC7E
        constexpr std::uintptr_t LightDirection = 0x170; // Resolved @ 0x7FF690A22A49
        constexpr std::uintptr_t SkyAmbient = 0x158; // Resolved @ 0x7FF69082DF70
        constexpr std::uintptr_t SkyAmbient2 = 0x19C; // Resolved @ 0x7FF6900BE970
        constexpr std::uintptr_t Source = 0x17C; // Resolved @ 0x7FF69141F41D
        constexpr std::uintptr_t TrueMoonPosition = 0x18C; // Resolved @ 0x7FF6903EC6E0
        constexpr std::uintptr_t TrueSunPosition = 0x180; // Resolved @ 0x7FF690A22A57
    }
    namespace LocalScript {
        constexpr std::uintptr_t Bytecode = 0x1A8; // Resolved @ 0x7FF6920EAC50
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF6905C6B80
    }
    namespace MaterialColors {
        constexpr std::uintptr_t Asphalt = 0x30; // Resolved @ 0x7FF69006B560
        constexpr std::uintptr_t Basalt = 0x27; // Resolved @ 0x7FF690310280
        constexpr std::uintptr_t Brick = 0xF; // Unresolved in this version
        constexpr std::uintptr_t Cobblestone = 0x33; // Resolved @ 0x7FF6913CA8A0
        constexpr std::uintptr_t Concrete = 0xC; // Resolved @ 0x7FF6900BCC40
        constexpr std::uintptr_t CrackedLava = 0x2D; // Resolved @ 0x7FF6903101C0
        constexpr std::uintptr_t Glacier = 0x1B; // Resolved @ 0x7FF6919D8280
        constexpr std::uintptr_t Grass = 0x6; // Resolved @ 0x7FF690500220
        constexpr std::uintptr_t Ground = 0x2A; // Unresolved in this version
        constexpr std::uintptr_t Ice = 0x36; // Unresolved in this version
        constexpr std::uintptr_t LeafyGrass = 0x39; // Resolved @ 0x7FF691FAB900
        constexpr std::uintptr_t Limestone = 0x3F; // Unresolved in this version
        constexpr std::uintptr_t Mud = 0x24; // Resolved @ 0x7FF68FF7C890
        constexpr std::uintptr_t Pavement = 0x42; // Unresolved in this version
        constexpr std::uintptr_t Rock = 0x18; // Resolved @ 0x7FF68FB47350
        constexpr std::uintptr_t Salt = 0x3C; // Resolved @ 0x7FF6903107F0
        constexpr std::uintptr_t Sand = 0x12; // Resolved @ 0x7FF690512C40
        constexpr std::uintptr_t Sandstone = 0x21; // Resolved @ 0x7FF690A83A90
        constexpr std::uintptr_t Slate = 0x9; // Unresolved in this version
        constexpr std::uintptr_t Snow = 0x1E; // Unresolved in this version
        constexpr std::uintptr_t WoodPlanks = 0x15; // Resolved @ 0x7FF6902431A0
    }
    namespace MeshPart {
        constexpr std::uintptr_t MeshId = 0x2F8; // Resolved @ 0x7FF692016370
        constexpr std::uintptr_t TextureId = 0x328; // Resolved @ 0x7FF69051F269
    }
    namespace ModuleScript {
        constexpr std::uintptr_t Bytecode = 0x150; // Resolved @ 0x7FF690A22AD5
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF6905C6B80
    }
    namespace MouseService {
        constexpr std::uintptr_t InputObject = 0x118; // Resolved @ 0x7FF6902A5290
    }
    namespace Player {
        constexpr std::uintptr_t AccountAge = 0x34C; // Resolved @ 0x7FF691D94038
        constexpr std::uintptr_t Character = 0x3C8; // Resolved @ 0x7FF68FABCF2A
        constexpr std::uintptr_t DisplayName = 0x150; // Resolved @ 0x7FF690A22AD5
        constexpr std::uintptr_t HealthDisplayDistance = 0x378; // Resolved @ 0x7FF69051E9D0
        constexpr std::uintptr_t LocaleId = 0x720; // Resolved @ 0x7FF69051E451
        constexpr std::uintptr_t NameDisplayDistance = 0x388; // Resolved @ 0x7FF691FAA7CD
        constexpr std::uintptr_t Team = 0x2D0; // Resolved @ 0x7FF69101B060
        constexpr std::uintptr_t TeamColor = 0x394; // Unresolved in this version
        constexpr std::uintptr_t UserId = 0x2F8; // Resolved @ 0x7FF692016370
    }
    namespace Players {
        constexpr std::uintptr_t LocalPlayer = 0x138; // Resolved @ 0x7FF691578E40
    }
    namespace Primitive {
        constexpr std::uintptr_t AssemblyAngularVelocity = 0x104; // Resolved @ 0x7FF6907654C0
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8; // Resolved @ 0x7FF68FDA1F30
        constexpr std::uintptr_t CFrame = 0xC8; // Resolved @ 0x7FF68FD8B500
        constexpr std::uintptr_t Material = 0x236; // Unresolved in this version
        constexpr std::uintptr_t Orientation = 0xC8; // Resolved @ 0x7FF68FD8B500
        constexpr std::uintptr_t Position = 0xEC; // Resolved @ 0x7FF6903E4FD0
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6; // Resolved @ 0x7FF690DDD011
        constexpr std::uintptr_t Rotation = 0xC8; // Resolved @ 0x7FF68FD8B500
        constexpr std::uintptr_t Size = 0x1B8; // Resolved @ 0x7FF691E5611E
    }
    namespace PrimitiveFlags {
        constexpr std::uintptr_t Anchored = 0x2; // Resolved @ 0x7FF692550890
        constexpr std::uintptr_t CanCollide = 0x8; // Resolved @ 0x7FF68FA6CA70
        constexpr std::uintptr_t CanQuery = 0x20; // Resolved @ 0x7FF68FB9FE40
        constexpr std::uintptr_t CanTouch = 0x10; // Resolved @ 0x7FF68FA45A70
    }
    namespace ProximityPrompt {
        constexpr std::uintptr_t ActionText = 0xC8; // Resolved @ 0x7FF68FD8B500
        constexpr std::uintptr_t Enabled = 0x14E; // Unresolved in this version
        constexpr std::uintptr_t HoldDuration = 0x138; // Resolved @ 0x7FF691578E40
        constexpr std::uintptr_t KeyboardKeyCode = 0x13C; // Resolved @ 0x7FF691578E70
        constexpr std::uintptr_t MaxActivationDistance = 0x140; // Resolved @ 0x7FF690A22AC7
        constexpr std::uintptr_t ObjectText = 0xE8; // Resolved @ 0x7FF6905C6B80
        constexpr std::uintptr_t RequiresLineOfSight = 0x14F; // Unresolved in this version
    }
    namespace RenderView {
        constexpr std::uintptr_t LightingValid = 0x170; // Resolved @ 0x7FF690A22A49
        constexpr std::uintptr_t SkyboxValid = 0x28D; // Unresolved in this version
    }
    namespace Seat {
        constexpr std::uintptr_t Occupant = 0x218; // Resolved @ 0x7FF691E46700
    }
    namespace Sky {
        constexpr std::uintptr_t MoonAngularSize = 0x25C; // Resolved @ 0x7FF69101A9B9
        constexpr std::uintptr_t MoonTextureId = 0xE0; // Resolved @ 0x7FF69047ED70
        constexpr std::uintptr_t SkyboxBk = 0x110; // Resolved @ 0x7FF68FDA1F40
        constexpr std::uintptr_t SkyboxDn = 0x140; // Resolved @ 0x7FF690A22AC7
        constexpr std::uintptr_t SkyboxFt = 0x170; // Resolved @ 0x7FF690A22A49
        constexpr std::uintptr_t SkyboxLf = 0x1A0; // Resolved @ 0x7FF691E47340
        constexpr std::uintptr_t SkyboxOrientation = 0x250; // Resolved @ 0x7FF692016A20
        constexpr std::uintptr_t SkyboxRt = 0x1D0; // Resolved @ 0x7FF690504BD0
        constexpr std::uintptr_t SkyboxUp = 0x200; // Resolved @ 0x7FF68FE60080
        constexpr std::uintptr_t StarCount = 0x260; // Resolved @ 0x7FF690BFFEF0
        constexpr std::uintptr_t SunAngularSize = 0x264; // Resolved @ 0x7FF69101DFE8
        constexpr std::uintptr_t SunTextureId = 0x230; // Resolved @ 0x7FF691E6A2F0
    }
    namespace SpecialMesh {
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF68FDA1F40
        constexpr std::uintptr_t Offset = 0xD0; // Resolved @ 0x7FF68FDA1F70
        constexpr std::uintptr_t Scale = 0xDC; // Resolved @ 0x7FF6903E4F90
        constexpr std::uintptr_t TextureId = 0x140; // Resolved @ 0x7FF690A22AC7
    }
    namespace Team {
        constexpr std::uintptr_t TeamColor = 0xD0; // Resolved @ 0x7FF68FDA1F70
    }
    namespace Terrain {
        constexpr std::uintptr_t GrassLength = 0x1F0; // Resolved @ 0x7FF6903C97D0
        constexpr std::uintptr_t MaterialColors = 0x4A0; // Resolved @ 0x7FF68F3D54E5
        constexpr std::uintptr_t WaterColor = 0x1E0; // Resolved @ 0x7FF6920EBD00
        constexpr std::uintptr_t WaterReflectance = 0x1F8; // Resolved @ 0x7FF690412C00
        constexpr std::uintptr_t WaterTransparency = 0x1FC; // Resolved @ 0x7FF691019A62
        constexpr std::uintptr_t WaterWaveSize = 0x200; // Resolved @ 0x7FF68FE60080
        constexpr std::uintptr_t WaterWaveSpeed = 0x204; // Resolved @ 0x7FF691AEADA0
    }
    namespace TextButton {
        constexpr std::uintptr_t AutoButtonColor = 0x9C4; // Unresolved in this version
        constexpr std::uintptr_t ContentText = 0xDD0; // Resolved @ 0x7FF68FFC8097
        constexpr std::uintptr_t Font = 0x10E8; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xEC8; // Unresolved in this version
        constexpr std::uintptr_t LocalizedText = 0xDD0; // Resolved @ 0x7FF68FFC8097
        constexpr std::uintptr_t MaxVisibleGraphemes = 0x10F4; // Unresolved in this version
        constexpr std::uintptr_t Modal = 0x9C5; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xFC6; // Resolved @ 0x7FF692AE876F
        constexpr std::uintptr_t Selected = 0x9C6; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xDD0; // Resolved @ 0x7FF68FFC8097
        constexpr std::uintptr_t TextColor3 = 0x10D0; // Unresolved in this version
        constexpr std::uintptr_t TextDirection = 0xF68; // Resolved @ 0x7FF691E510F8
        constexpr std::uintptr_t TextScaled = 0xDB9; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0x10FC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0x10DC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0x1100; // Unresolved in this version
        constexpr std::uintptr_t TextTransparency = 0x1104; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0x1108; // Resolved @ 0x7FF69021C2B8
        constexpr std::uintptr_t TextWrapped = 0xFC0; // Resolved @ 0x7FF68F4210C0
        constexpr std::uintptr_t TextXAlignment = 0x110C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xF10; // Unresolved in this version
    }
    namespace TextLabel {
        constexpr std::uintptr_t ContentText = 0xB50; // Resolved @ 0x7FF690922E30
        constexpr std::uintptr_t Font = 0xE68; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xC48; // Resolved @ 0x7FF68FF27C0A
        constexpr std::uintptr_t LocalizedText = 0xB50; // Resolved @ 0x7FF690922E30
        constexpr std::uintptr_t MaxVisibleGraphemes = 0xE74; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xD46; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xB50; // Resolved @ 0x7FF690922E30
        constexpr std::uintptr_t TextColor3 = 0xE50; // Unresolved in this version
        constexpr std::uintptr_t TextDirection = 0xCE8; // Unresolved in this version
        constexpr std::uintptr_t TextScaled = 0xB39; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0xE7C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0xE5C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0xE80; // Resolved @ 0x7FF691EB5EC9
        constexpr std::uintptr_t TextTransparency = 0xE84; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0xE88; // Unresolved in this version
        constexpr std::uintptr_t TextWrapped = 0xD40; // Resolved @ 0x7FF6900E7B32
        constexpr std::uintptr_t TextXAlignment = 0xE8C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xC90; // Resolved @ 0x7FF68FF17604
    }
    namespace Tool {
        constexpr std::uintptr_t CanBeDropped = 0x4C8; // Resolved @ 0x7FF690B4B721
        constexpr std::uintptr_t Enabled = 0x4C9; // Unresolved in this version
        constexpr std::uintptr_t Grip = 0x498; // Resolved @ 0x7FF690B4E7E1
        constexpr std::uintptr_t GripForward = 0x4B0; // Resolved @ 0x7FF68F3D54FD
        constexpr std::uintptr_t GripPos = 0x4BC; // Unresolved in this version
        constexpr std::uintptr_t GripRight = 0x498; // Resolved @ 0x7FF690B4E7E1
        constexpr std::uintptr_t GripUp = 0x4A4; // Resolved @ 0x7FF69040F3D7
        constexpr std::uintptr_t ManualActivationOnly = 0x4CA; // Unresolved in this version
        constexpr std::uintptr_t RequiresHandle = 0x4CB; // Unresolved in this version
        constexpr std::uintptr_t Tooltip = 0x478; // Resolved @ 0x7FF690B4EFF1
    }
    namespace Value {
        constexpr std::uintptr_t Value = 0xD0; // Resolved @ 0x7FF68FDA1F70
    }
    namespace VehicleSeat {
        constexpr std::uintptr_t MaxSpeed = 0x230; // Resolved @ 0x7FF691E6A2F0
        constexpr std::uintptr_t Occupant = 0x210; // Resolved @ 0x7FF68FA1E405
        constexpr std::uintptr_t SteerFloat = 0x238; // Resolved @ 0x7FF68FC1A34D
        constexpr std::uintptr_t ThrottleFloat = 0x240; // Resolved @ 0x7FF690B6FB50
        constexpr std::uintptr_t Torque = 0x244; // Resolved @ 0x7FF6909BF700
        constexpr std::uintptr_t TurnSpeed = 0x248; // Resolved @ 0x7FF6920164C0
    }
    namespace VisualEngine {
        constexpr std::uintptr_t Dimensions = 0xAB0; // Resolved @ 0x7FF6900E7BF0
        constexpr std::uintptr_t FakeDataModel = 0xA90; // Resolved @ 0x7FF6909230D9
        constexpr std::uintptr_t Pointer = 0x8158B80; // Resolved @ 0x7FF697528B80 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RenderView = 0xBB0; // Resolved @ 0x7FF690923159
        constexpr std::uintptr_t ViewMatrix = 0x150; // Resolved @ 0x7FF690A22AD5
    }
    namespace Workspace {
        constexpr std::uintptr_t CurrentCamera = 0x4B0; // Resolved @ 0x7FF68F3D54FD
        constexpr std::uintptr_t ReadOnlyGravity = 0x9F0; // Resolved @ 0x7FF691FAA6C7
        constexpr std::uintptr_t World = 0x408; // Resolved @ 0x7FF690A233A0
    }
    namespace World {
        constexpr std::uintptr_t Gravity = 0x210; // Resolved @ 0x7FF68FA1E405
        constexpr std::uintptr_t Primitives = 0x280; // Resolved @ 0x7FF68FA22ACC
        constexpr std::uintptr_t WorldSteps = 0x678; // Resolved @ 0x7FF69206D8F0
    }
    namespace vm {
        constexpr std::uintptr_t Print = 0x1E08380; // Unresolved in this version
        constexpr std::uintptr_t luau_execute = 0x454ACD0; // Unresolved in this version
        constexpr std::uintptr_t luau_precall = 0x454ADF0; // Unresolved in this version
        constexpr std::uintptr_t luau_load = 0x453F030; // Unresolved in this version
        constexpr std::uintptr_t lua_load = 0x453ED80; // Unresolved in this version
        constexpr std::uintptr_t lua_pcallrun = 0x454DAB0; // Unresolved in this version
        constexpr std::uintptr_t LuaVMLoad = 0x1CC8D60; // Unresolved in this version
        constexpr std::uintptr_t Encrypt_State = 0x0; // Unresolved in this version
    }
    namespace state {
        constexpr std::uintptr_t lua_newstate = 0x453A580; // Unresolved in this version
        constexpr std::uintptr_t close_state = 0x4539F40; // Unresolved in this version
        constexpr std::uintptr_t f_luaopen = 0x453A000; // Unresolved in this version
        constexpr std::uintptr_t luaL_register = 0x45394D0; // Unresolved in this version
        constexpr std::uintptr_t luaL_findtable = 0x4538E50; // Unresolved in this version
        constexpr std::uintptr_t luaopen_base = 0x454DE30; // Unresolved in this version
        constexpr std::uintptr_t luaopen_math = 0x45571F0; // Unresolved in this version
        constexpr std::uintptr_t luaopen_bit32 = 0x4554740; // Unresolved in this version
        constexpr std::uintptr_t luaopen_buffer = 0x45557E0; // Unresolved in this version
        constexpr std::uintptr_t luaopen_coroutine = 0x454E7B0; // Unresolved in this version
        constexpr std::uintptr_t luaopen_debug = 0x4557B50; // Unresolved in this version
        constexpr std::uintptr_t luaopen_os = 0x45509A0; // Unresolved in this version
        constexpr std::uintptr_t luaopen_string = 0x4552F80; // Unresolved in this version
        constexpr std::uintptr_t luaopen_table = 0x454F770; // Unresolved in this version
        constexpr std::uintptr_t luaopen_utf8 = 0x4556100; // Unresolved in this version
        constexpr std::uintptr_t luaopen_vector = 0x4558500; // Unresolved in this version
        constexpr std::uintptr_t lua_getthreaddata = 0x1210930; // Unresolved in this version
        constexpr std::uintptr_t IdentityPtr = 0x7FBD4A0; // Unresolved in this version
        constexpr std::uintptr_t Impersonator = 0x45AAE80; // Unresolved in this version
    }
    namespace thread {
        constexpr std::uintptr_t lua_newthread = 0x4533B70; // Unresolved in this version
        constexpr std::uintptr_t lua_xmove = 0x45367C0; // Unresolved in this version
        constexpr std::uintptr_t lua_resume = 0x4537A80; // Unresolved in this version
        constexpr std::uintptr_t lua_yield = 0x4537C90; // Unresolved in this version
        constexpr std::uintptr_t lua_costatus = 0x4532CE0; // Unresolved in this version
        constexpr std::uintptr_t lua_tothread = 0x4536310; // Unresolved in this version
        constexpr std::uintptr_t lua_isyieldable = 0x4537A70; // Unresolved in this version
        constexpr std::uintptr_t lua_resetthread = 0x453B3F0; // Unresolved in this version
        constexpr std::uintptr_t cocreate = 0x454E020; // Unresolved in this version
        constexpr std::uintptr_t coclose = 0x454E140; // Unresolved in this version
        constexpr std::uintptr_t cowrap = 0x454E060; // Unresolved in this version
        constexpr std::uintptr_t coyield = 0x454E0C0; // Unresolved in this version
        constexpr std::uintptr_t corunning = 0x454E0E0; // Unresolved in this version
        constexpr std::uintptr_t coisyieldable = 0x454E110; // Unresolved in this version
        constexpr std::uintptr_t costatus = 0x454DFB0; // Unresolved in this version
        constexpr std::uintptr_t coresumey = 0x454E700; // Unresolved in this version
        constexpr std::uintptr_t luaB_pcally = 0x454DAF0; // Unresolved in this version
        constexpr std::uintptr_t luaB_xpcally = 0x454DD10; // Unresolved in this version
        constexpr std::uintptr_t luaB_pcallcont = 0x454DA40; // Unresolved in this version
        constexpr std::uintptr_t luaB_xpcallcont = 0x454DBE0; // Unresolved in this version
        constexpr std::uintptr_t luaB_xpcallerr = 0x454DD00; // Unresolved in this version
    }
    namespace api {
        constexpr std::uintptr_t luaS_new = 0x456A0D0; // Unresolved in this version
        constexpr std::uintptr_t luaS_free = 0x456A020; // Unresolved in this version
        constexpr std::uintptr_t lua_setfield = 0x45357C0; // Unresolved in this version
        constexpr std::uintptr_t lua_pushfstringL = 0x4534100; // Unresolved in this version
        constexpr std::uintptr_t lua_pushvfstring = 0x4569640; // Unresolved in this version
        constexpr std::uintptr_t luaO_pushfstring = 0x4569580; // Unresolved in this version
        constexpr std::uintptr_t luaO_pushvfstring = 0x650D10; // Unresolved in this version
        constexpr std::uintptr_t lua_pushnil = 0x4534390; // Unresolved in this version
        constexpr std::uintptr_t lua_pushboolean = 0x4533F50; // Unresolved in this version
        constexpr std::uintptr_t lua_pushinteger = 0x45341D0; // Unresolved in this version
        constexpr std::uintptr_t lua_pushnumber = 0x45343F0; // Unresolved in this version
        constexpr std::uintptr_t lua_pushlstring = 0x45342D0; // Unresolved in this version
        constexpr std::uintptr_t lua_typename = 0x45365B0; // Unresolved in this version
        constexpr std::uintptr_t pseudoaddr = 0x45368A0; // Unresolved in this version
        constexpr std::uintptr_t luaO_chunkid = 0x45693C0; // Unresolved in this version
        constexpr std::uintptr_t lua_newuserdatatagged = 0x4533C40; // Unresolved in this version
        constexpr std::uintptr_t lua_newuserdatataggedwithmetatable = 0x4533D00; // Unresolved in this version
        constexpr std::uintptr_t lua_pushcclosurek = 0x4533FD0; // Unresolved in this version
        constexpr std::uintptr_t OpcodeLookupTable = 0x6056C90; // Unresolved in this version
        constexpr std::uintptr_t lua_rawcheckstack = 0x4534870; // Unresolved in this version
        constexpr std::uintptr_t luaT_objtypename = 0x455A4A0; // Unresolved in this version
        constexpr std::uintptr_t luaA_toobject = 0x4532880; // Unresolved in this version
        constexpr std::uintptr_t luaL_tolstring = 0x4539610; // Unresolved in this version
        constexpr std::uintptr_t lua_clock = 0x51B6538; // Unresolved in this version
        constexpr std::uintptr_t lua_encodepointer = 0x4532DF0; // Unresolved in this version
        constexpr std::uintptr_t lua_namecallatom = 0x4533A40; // Unresolved in this version
        constexpr std::uintptr_t luaL_checktype = 0x4538D40; // Unresolved in this version
    }
    namespace memory {
        constexpr std::uintptr_t luaM_newvector = 0x4559CB0; // Unresolved in this version
        constexpr std::uintptr_t luaM_free = 0x4559AC0; // Unresolved in this version
        constexpr std::uintptr_t luaM_freegco = 0x4559B40; // Unresolved in this version
        constexpr std::uintptr_t luaM_visitgco = 0x4559FF0; // Unresolved in this version
        constexpr std::uintptr_t luaM_newgco = 0x4559D70; // Unresolved in this version
        constexpr std::uintptr_t newpage = 0x455A250; // Unresolved in this version
        constexpr std::uintptr_t newgcoblock = 0x455A1C0; // Unresolved in this version
        constexpr std::uintptr_t luaC_step = 0x453D110; // Unresolved in this version
        constexpr std::uintptr_t markroot = 0x453DB30; // Unresolved in this version
        constexpr std::uintptr_t markmt = 0x453D9F0; // Unresolved in this version
        constexpr std::uintptr_t propagatemark = 0x453DDB0; // Unresolved in this version
        constexpr std::uintptr_t atomic = 0x453CA60; // Unresolved in this version
        constexpr std::uintptr_t traversetable = 0x453E2B0; // Unresolved in this version
        constexpr std::uintptr_t luaM_toobig = 0x4559FC0; // Unresolved in this version
        constexpr std::uintptr_t newblock = 0x455A0C0; // Unresolved in this version
        constexpr std::uintptr_t freeblock = 0x4559960; // Unresolved in this version
        constexpr std::uintptr_t newclasspage = 0x455A150; // Unresolved in this version
        constexpr std::uintptr_t freeclasspage = 0x4559A20; // Unresolved in this version
    }
    namespace table {
        constexpr std::uintptr_t luaH_clone = 0x455B610; // Unresolved in this version
        constexpr std::uintptr_t luaH_free = 0x455B770; // Unresolved in this version
        constexpr std::uintptr_t luaH_new = 0x455BF10; // Unresolved in this version
        constexpr std::uintptr_t luaH_set = 0x455DF80; // Unresolved in this version
        constexpr std::uintptr_t luaH_getstr = 0x455BEA0; // Unresolved in this version
        constexpr std::uintptr_t luaV_gettable = 0x4565050; // Unresolved in this version
        constexpr std::uintptr_t luaV_settable = 0x4565690; // Unresolved in this version
        constexpr std::uintptr_t luaT_init = 0x456A3C0; // Unresolved in this version
        constexpr std::uintptr_t luaL_getmetafield = 0x4538F80; // Unresolved in this version
        constexpr std::uintptr_t luaL_callmeta = 0x4DBE7C0; // Unresolved in this version
    }
    namespace function {
        constexpr std::uintptr_t luaF_newproto = 0x4563470; // Unresolved in this version
        constexpr std::uintptr_t luaF_freeproto = 0x4563110; // Unresolved in this version
        constexpr std::uintptr_t luaF_newLclosure = 0x45633C0; // Unresolved in this version
        constexpr std::uintptr_t luaF_freeclosure = 0x45630D0; // Unresolved in this version
        constexpr std::uintptr_t luaF_newCclosure = 0x4563330; // Unresolved in this version
    }
    namespace error {
        constexpr std::uintptr_t luaD_rawrunprotected = 0x45376C0; // Unresolved in this version
        constexpr std::uintptr_t luaD_throw = 0x4537A00; // Unresolved in this version
        constexpr std::uintptr_t luaD_growstack = 0x4537270; // Unresolved in this version
        constexpr std::uintptr_t lua_exception = 0x45369D0; // Unresolved in this version
        constexpr std::uintptr_t pusherror = 0x4537980; // Unresolved in this version
        constexpr std::uintptr_t callerrfunc = 0x45369F0; // Unresolved in this version
        constexpr std::uintptr_t tag_error = 0x4539F10; // Unresolved in this version
        constexpr std::uintptr_t luaD_pcall = 0x4537430; // Unresolved in this version
        constexpr std::uintptr_t luaD_callint = 0x4536E40; // Unresolved in this version
        constexpr std::uintptr_t luaG_pusherror = 0x453C9B0; // Unresolved in this version
        constexpr std::uintptr_t luaG_runerrorL = 0x453C010; // Unresolved in this version
        constexpr std::uintptr_t luaL_errorL = 0x4538E00; // Unresolved in this version
        constexpr std::uintptr_t luaL_typerrorL = 0x4539D20; // Unresolved in this version
        constexpr std::uintptr_t currfuncname = 0x4538520; // Unresolved in this version
        constexpr std::uintptr_t currentline = 0x453B4E0; // Unresolved in this version
        constexpr std::uintptr_t luaL_argerrorL = 0x4538A30; // Unresolved in this version
        constexpr std::uintptr_t luaL_where = 0x4539E40; // Unresolved in this version
        constexpr std::uintptr_t resume_handle = 0x45382A0; // Unresolved in this version
    }
    namespace roblox {
        constexpr std::uintptr_t TaskScheduler_Pointer = 0x7FCB088; // Unresolved in this version
        constexpr std::uintptr_t FakeDataModel_Pointer = 0x7A39AD8; // Resolved @ 0x7FF696E09AD8 | Sig: N/A (Global Data)
        constexpr std::uintptr_t VisualEngine_Pointer = 0x8158B80; // Resolved @ 0x7FF697528B80 | Sig: N/A (Global Data)
        constexpr std::uintptr_t task_spawn = 0x1DE4170; // Unresolved in this version
        constexpr std::uintptr_t task_delay = 0x1DE36A0; // Unresolved in this version
        constexpr std::uintptr_t task_wait = 0x1DE44E0; // Unresolved in this version
        constexpr std::uintptr_t task_cancel = 0x1DE2F90; // Unresolved in this version
        constexpr std::uintptr_t task_synchronize = 0x1DE42F0; // Unresolved in this version
        constexpr std::uintptr_t task_desynchronize = 0x1DE38E0; // Unresolved in this version
        constexpr std::uintptr_t IdentityToCaps = 0x45AB650; // Unresolved in this version
        constexpr std::uintptr_t GetCapabilities = 0x45ABA10; // Unresolved in this version
        constexpr std::uintptr_t GetIdentityStruct = 0x1CAA830; // Unresolved in this version
        constexpr std::uintptr_t GetIdentityStruct_pure = 0x45AB200; // Unresolved in this version
        constexpr std::uintptr_t Security_checkCapability = 0x1DA5350; // Unresolved in this version
        constexpr std::uintptr_t Security_capabilityError = 0x1DA5450; // Unresolved in this version
        constexpr std::uintptr_t ScriptContext_canRun = 0x1D07E90; // Unresolved in this version
        constexpr std::uintptr_t ScriptContext_getGlobalState = 0x1CB0530; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushInstance = 0x1CA4FF0; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushInstance_safe = 0x1C970C0; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushString_cpp = 0x1C7E150; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushNewUserdata = 0x1C7E050; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushInstance_alt = 0x1CA3840; // Unresolved in this version
        constexpr std::uintptr_t Instance_pushInstance_alt2 = 0x1CA3880; // Unresolved in this version
        constexpr std::uintptr_t isLegalSendEvent = 0xA18810; // Unresolved in this version
        constexpr std::uintptr_t DisconnectConnection = 0x2FA7DC0; // Unresolved in this version
        constexpr std::uintptr_t CastArgs = 0x1C92D00; // Unresolved in this version
        constexpr std::uintptr_t SingleSurfaceApp = 0x8292AB8; // Unresolved in this version
        constexpr std::uintptr_t TaskDefer = 0x1DE3270; // Unresolved in this version
        constexpr std::uintptr_t ScriptContextResume = 0x1D79260; // Unresolved in this version
        constexpr std::uintptr_t TaskSchedulerTargetFps = 0x7672710; // Unresolved in this version
        constexpr std::uintptr_t FireTouchInterest = 0x29BDAC0; // Unresolved in this version
        constexpr std::uintptr_t FireProximityPrompt = 0x74C500; // Unresolved in this version
        constexpr std::uintptr_t GetProperty = 0x1C91ED0; // Unresolved in this version
        constexpr std::uintptr_t GetAppDataInfo = 0x35E7BC0; // Unresolved in this version
        constexpr std::uintptr_t AppdataInfo = 0x7F31380; // Unresolved in this version
        constexpr std::uintptr_t KTable = 0x7FCCAC0; // Unresolved in this version
        namespace ClickDetector {
            constexpr std::uintptr_t fireMouseClick = 0x2566BF0; // Unresolved in this version
            constexpr std::uintptr_t fireRightMouseClick = 0x2567260; // Unresolved in this version
            constexpr std::uintptr_t fireMouseHoverEnter = 0x2566E00; // Unresolved in this version
            constexpr std::uintptr_t fireMouseHoverLeave = 0x2566FF0; // Unresolved in this version
        }
    }
    namespace debug {
        constexpr std::uintptr_t dumpobj = 0x454B0F0; // Unresolved in this version
        constexpr std::uintptr_t dumpthread = 0x454B9C0; // Unresolved in this version
        constexpr std::uintptr_t enumgco = 0x454C1D0; // Unresolved in this version
        constexpr std::uintptr_t enumobj = 0x454C1F0; // Unresolved in this version
        constexpr std::uintptr_t enumtable = 0x454C7D0; // Unresolved in this version
    }
    namespace crt {
        constexpr std::uintptr_t vsnprintf = 0x75C4C0; // Unresolved in this version
    }
    namespace fflags {
        constexpr std::uintptr_t EnableLoadModule = 0x7B54040; // Unresolved in this version
        constexpr std::uintptr_t LockViolationInstanceCrash = 0x7B4ECA0; // Unresolved in this version
        constexpr std::uintptr_t LockViolationScriptCrash = 0x7B50F60; // Unresolved in this version
        constexpr std::uintptr_t WndProcessCheck = 0x75FE020; // Unresolved in this version
        constexpr std::uintptr_t LuaStepIntervalMsOverrideEnabled = 0x7B53770; // Unresolved in this version
        constexpr std::uintptr_t LuaStepIntervalMsOverride = 0x7B53708; // Unresolved in this version
    }
    namespace data {
        constexpr std::uintptr_t base_funcs = 0x67ABFD0; // Unresolved in this version
        constexpr std::uintptr_t mathlib = 0x67AD860; // Unresolved in this version
        constexpr std::uintptr_t LuaO_NilObject = 0x67AE440; // Unresolved in this version
        constexpr std::uintptr_t LuaH_DummyNode = 0x67AE2E8; // Unresolved in this version
    }
}
