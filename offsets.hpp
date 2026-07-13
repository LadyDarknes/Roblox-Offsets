#pragma once
#include <cstdint>


namespace Roblox {
    namespace Atmosphere {
        constexpr std::uintptr_t Color = 0xD0; //   @ 0x7FF6AC091F70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Decay = 0xDC; //   @ 0x7FF6AC6D4F90 | Sig: F3 0F 10 81 DC 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 E0 00 00 00
        constexpr std::uintptr_t Density = 0xE8; //   @ 0x7FF6AC8B6B80 | Sig: F3 0F 10 81 E8 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 E0 00 00 00 C3 CC
        constexpr std::uintptr_t Glare = 0xEC; //   @ 0x7FF6AC6D4FD0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t Haze = 0xF0; //   @ 0x7FF6AC0920C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Offset = 0xF4; //   @ 0x7FF6AC6D4FF0 | Sig: F3 0F 10 81 F4 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 F8 00 00 00
    }

    namespace BasePart {
        constexpr std::uintptr_t CastShadow = 0xF5; //   @ 0x7FF6AC0E9FE9 | Sig: F5 00 00 00 48 8D 4D EF E8 ? ? ? ? 90 BB 07 00 00 00 89 5D 87 48 8B
        constexpr std::uintptr_t Color3 = 0x194; //   @ 0x7FF6AC3AD9B0 | Sig: F3 0F 10 81 94 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 98 01 00 00 C3 CC
        constexpr std::uintptr_t Locked = 0xF6; //   @ 0x7FF6AB6C6413 | Sig: 0F 85 F6 00 00 00 E8 ? ? ? ? 48 8B 00 48 8B 78 70 48 8D 4D C8 FF 15
        constexpr std::uintptr_t Massless = 0xF7; //   @ 0x7FF6ABF1647D | Sig: F7 00 00 00 4C 8B FE 49 C1 E7 04 48 ? ? ? ? 49 81 FF 00 10 00 00 72
        constexpr std::uintptr_t Primitive = 0x148; //   @ 0x7FF6AB7080D9 | Sig: 48 8D B4 24 ? ? ? ? 48 8B 5E F8 48 8D 26 48 ? ? ? ? 48 ? ? ?
        constexpr std::uintptr_t Reflectance = 0xEC; //   @ 0x7FF6AC6D4FD0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t Shape = 0x1B1; //bozuk
        constexpr std::uintptr_t Transparency = 0xF0; //   @ 0x7FF6AC0920C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace BloomEffect {
        constexpr std::uintptr_t Intensity = 0xD0; //   @ 0x7FF6AC091F70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Size = 0xD4; //   @ 0x7FF6AC6D4F50 | Sig: F3 0F 10 81 D4 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 D8 00 00 00
        constexpr std::uintptr_t Threshold = 0xD8; //   @ 0x7FF6AC6D4F60 | Sig: F3 0F 10 81 D8 00 00 00 C3 CC CC CC CC CC CC CC 0F B6 81 04 01 00 00 C3
    }

    namespace ByteCode {
        constexpr std::uintptr_t Pointer = 0x10; //   @ 0x7FF6ABD35A70 | Sig: 48 8B 41 10 C3 CC CC CC CC CC CC CC CC CC CC CC 80 39 00 48 8D 41 08 4C
        constexpr std::uintptr_t Size = 0x20; //   @ 0x7FF6ABE8FE40 | Sig: 48 8B 41 20 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8D 41 20 C3 CC CC CC
    }

    namespace Camera {
        constexpr std::uintptr_t CFrame = 0xF8; //   @ 0x7FF6AC091F30 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t FieldOfView = 0x160; //   @ 0x7FF6ACD12AE3 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0C 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Position = 0x11C; //   @ 0x7FF6AC5952A0 | Sig: F3 0F 10 81 1C 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 20 01 00 00
        constexpr std::uintptr_t Rotation = 0xF8; //   @ 0x7FF6AC091F30 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t ViewportInt16 = 0x2AC; //   @ 0x7FF6AE299BA0 | Sig: F3 0F 10 81 AC 02 00 00 C3 CC CC CC CC CC CC CC 8B 81 B0 02 00 00 C3 CC
        constexpr std::uintptr_t ViewportSize = 0x2E8; //   @ 0x7FF6ABD10646 | Sig: 48 8B BE ? ? ? ? 48 8B C7 48 83 E0 FC 48 8B C8 48 83 E1 F8 74 3F 40
    }

    namespace CharacterMesh {
        constexpr std::uintptr_t BaseTextureId = 0xE0; //   @ 0x7FF6AC76ED70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t BodyPart = 0x160; //   @ 0x7FF6ACD12AE3 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0C 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t MeshId = 0x110; //   @ 0x7FF6AC091F40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t OverlayTextureId = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace DataModel {
        constexpr std::uintptr_t CreatorId = 0x190; //   @ 0x7FF6ACD12A65 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 03 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t GameId = 0x198; //   @ 0x7FF6AC6DC720 | Sig: F3 0F 10 81 98 01 00 00 C3 CC CC CC CC CC CC CC 48 8D 81 ? ? ? ? C3
        constexpr std::uintptr_t GameLoaded = 0x5D0; //   @ 0x7FF6AE846630 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t JobId = 0x138; //   @ 0x7FF6AD868E40 | Sig: F3 0F 10 81 38 01 00 00 C3 CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t PlaceId = 0x1A0; //   @ 0x7FF6AE137340 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t ServerIP = 0x658; //   @ 0x7FF6AE465ECD | Sig: 49 89 AE 58 06 00 00 49 89 AE 60 06 00 00 48 8B 05 ? ? ? ? 48 8B 0D
        constexpr std::uintptr_t Workspace = 0x178; //   @ 0x7FF6AE463EE0 | Sig: F3 0F 10 81 78 01 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 83
    }

    namespace FakeDataModel {
        constexpr std::uintptr_t Pointer = 0x7A39AD8; //   @ 0x7FF6B30F9AD8 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RealDataModel = 0x1D8; //   @ 0x7FF6AC90D3F0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41 3C F2 0F 10 41 34
    }

    namespace GuiBase2D {
        constexpr std::uintptr_t AbsolutePosition = 0x10C; //   @ 0x7FF6AC8B6C70 | Sig: F3 0F 10 81 0C 01 00 00 C3 CC CC CC CC CC CC CC 0F B6 81 2B 01 00 00 C3
        constexpr std::uintptr_t AbsoluteRotation = 0x188; //   @ 0x7FF6AC6DC6D0 | Sig: F3 0F 10 81 88 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 8C 01 00 00
        constexpr std::uintptr_t AbsoluteSize = 0x118; //   @ 0x7FF6AC595290 | Sig: F3 0F 10 81 18 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 1C 01 00 00
    }

    namespace GuiObject {
        constexpr std::uintptr_t Active = 0x5A8; //   @ 0x7FF6AC18EAC4 | Sig: 48 3B 91 ? ? ? ? 74 1B 48 8B 01 48 8B 80 ? ? ? ? FF 15 CB 23 1B
        constexpr std::uintptr_t AnchorPoint = 0x558; //   @ 0x7FF6ADE57E5B | Sig: 49 8B 8A 58 05 00 00 4D 0F AF CB 49 23 C9 48 C1 E1 04 49 03 8A 40 05 00
        constexpr std::uintptr_t AutomaticSize = 0x560; //   @ 0x7FF6AC80E397 | Sig: 0F 10 80 60 05 00 00 0F 29 44 24 40 0F 10 88 70 05 00 00 0F 29 4C 24 50
        constexpr std::uintptr_t BackgroundColor3 = 0x540; //   @ 0x7FF6AF144730 | Sig: 48 8B 81 ? ? ? ? 48 89 02 0F B6 81 A8 05 00 00 88 42 08 48 8B C2 C3
        constexpr std::uintptr_t BackgroundTransparency = 0x564; //   @ 0x7FF6AEC257AD | Sig: 41 8B 83 64 05 00 00 41 01 82 64 05 00 00 41 8B 83 98 05 00 00 41 01 82
        constexpr std::uintptr_t BorderColor3 = 0x54C; //   @ 0x7FF6AEC25705 | Sig: 41 8B 83 4C 05 00 00 41 01 82 4C 05 00 00 41 8B 83 80 05 00 00 41 01 82
        constexpr std::uintptr_t BorderMode = 0x568; //   @ 0x7FF6ACE3E7F9 | Sig: 48 8B 81 ? ? ? ? C3 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 48
        constexpr std::uintptr_t BorderSizePixel = 0x56C; //   @ 0x7FF6ADE5AEC0 | Sig: 83 B9 6C 05 00 00 00 0F 9F C0 C3 CC CC CC CC CC 03 91 6C 05 00 00 33 C0
        constexpr std::uintptr_t ClipsDescendants = 0x5A9; //bozuk
        constexpr std::uintptr_t GuiState = 0x578; //   @ 0x7FF6ABEA0809 | Sig: BA 78 05 00 00 48 ? ? ? ? 45 0F B7 C8 E8 ? ? ? ? 8B 08 48 8B C3
        constexpr std::uintptr_t Interactable = 0x5AB; //bozuk
        constexpr std::uintptr_t LayoutOrder = 0x580; //   @ 0x7FF6AB6C6AFC | Sig: 49 8D 84 24 80 05 00 00 48 89 45 D8 49 8D 84 24 C0 06 00 00 48 89 45 C8
        constexpr std::uintptr_t Position = 0x510; //   @ 0x7FF6AC80E01B | Sig: 48 81 EC 10 05 00 00 0F 29 70 D8 0F 29 78 C8 44 0F 29 40 B8 44 0F 29 48
        constexpr std::uintptr_t Rotation = 0x188; //   @ 0x7FF6AC6DC6D0 | Sig: F3 0F 10 81 88 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 8C 01 00 00
        constexpr std::uintptr_t Selectable = 0x5AC; //   @ 0x7FF6AEC25847 | Sig: 41 8B 83 AC 05 00 00 41 01 82 AC 05 00 00 41 8B 83 7C 05 00 00 41 01 82
        constexpr std::uintptr_t SelectionOrder = 0x59C; //   @ 0x7FF6AE3BA830 | Sig: 0F B6 81 9C 05 00 00 C3 CC CC CC CC CC CC CC CC 40 55 53 56 57 41 54 41
        constexpr std::uintptr_t Size = 0x530; //   @ 0x7FF6ABD48CB3 | Sig: 48 81 EC 30 05 00 00 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ?
        constexpr std::uintptr_t SizeConstraint = 0x5A0; //   @ 0x7FF6ABD33660 | Sig: 0F B6 81 A0 05 00 00 C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Visible = 0x5AD; //bozuk
        constexpr std::uintptr_t ZIndex = 0x5A4; //   @ 0x7FF6AEC2580F | Sig: 41 8B 83 A4 05 00 00 41 01 82 A4 05 00 00 41 8B 83 74 05 00 00 41 01 82
    }

    namespace Humanoid {
        constexpr std::uintptr_t AutoJumpEnabled = 0x1E0; //   @ 0x7FF6AE3DBD00 | Sig: 0F B6 81 E0 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
        constexpr std::uintptr_t AutoRotate = 0x1E1; //bozuk
        constexpr std::uintptr_t AutomaticScalingEnabled = 0x1E2; //bozuk
        constexpr std::uintptr_t BreakJointsOnDeath = 0x1E3; //bozuk
        constexpr std::uintptr_t CameraOffset = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t DisplayDistanceType = 0x18C; //   @ 0x7FF6AC6DC6E0 | Sig: F3 0F 10 81 8C 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 90 01 00 00
        constexpr std::uintptr_t EvaluateStateMachine = 0x1E4; //bozuk
        constexpr std::uintptr_t Health = 0x194; //   @ 0x7FF6AC3AD9B0 | Sig: F3 0F 10 81 94 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 98 01 00 00 C3 CC
        constexpr std::uintptr_t HealthDisplayDistance = 0x198; //   @ 0x7FF6AC6DC720 | Sig: F3 0F 10 81 98 01 00 00 C3 CC CC CC CC CC CC CC 48 8D 81 ? ? ? ? C3
        constexpr std::uintptr_t HealthDisplayType = 0x19C; //   @ 0x7FF6AC3AE970 | Sig: F3 0F 10 81 9C 01 00 00 C3 CC CC CC CC CC CC CC 8B 41 08 F2 0F 10 01 F2
        constexpr std::uintptr_t HipHeight = 0x1A0; //   @ 0x7FF6AE137340 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t JumpHeight = 0x1AC; //   @ 0x7FF6AC6DC770 | Sig: F3 0F 10 81 AC 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 B0 01 00 00
        constexpr std::uintptr_t JumpPower = 0x1B0; //   @ 0x7FF6AC6DC780 | Sig: F3 0F 10 81 B0 01 00 00 C3 CC CC CC CC CC CC CC 0F B6 81 BC 01 00 00 C3
        constexpr std::uintptr_t MaxHealth = 0x1B4; //   @ 0x7FF6AC6DC7A0 | Sig: F3 0F 10 81 B4 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 10 01 00 00 A8 01
        constexpr std::uintptr_t MaxSlopeAngle = 0x1B8; //   @ 0x7FF6AE14611E | Sig: F3 0F 10 81 B8 01 00 00 C3 CC CC CC CC CC CC CC CC CC 48 8B 81 ? ? ?
        constexpr std::uintptr_t NameDisplayDistance = 0x1BC; //   @ 0x7FF6AE4BBC20 | Sig: F3 0F 10 81 BC 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 33 C0
        constexpr std::uintptr_t NameOcclusion = 0x1C0; //   @ 0x7FF6AE4BBDC0 | Sig: F3 0F 10 81 C0 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
        constexpr std::uintptr_t RequiresNeck = 0x1E9; //   @ 0x7FF6AEB3075C | Sig: 41 0F B6 85 E9 01 00 00 90 84 C0 74 3E 4C 8B 45 88 48 8D 95 ? ? ? ?
        constexpr std::uintptr_t RigType = 0x1CC; //   @ 0x7FF6AC12C5A0 | Sig: 4C 8D 8B ? ? ? ? 4C 8D 05 ? ? ? ? 48 8D 95 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t SeatPart = 0x120; //   @ 0x7FF6ACCA5D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 83 EC 28 48 81 C1 B0
        constexpr std::uintptr_t Sit = 0x1EA; //bozuk
        constexpr std::uintptr_t TargetPoint = 0x164; //   @ 0x7FF6AE18CC7E | Sig: FF 8B 64 01 00 00 80 BB 5C 01 00 00 00 75 25 48 8B 07 48 8B CF 48 8B 40
        constexpr std::uintptr_t UseJumpPower = 0x1EC; //   @ 0x7FF6ADFC2000 | Sig: C6 87 EC 01 00 00 00 48 8D 8F ? ? ? ? E8 ? ? ? ? 90 48 ? ? ?
        constexpr std::uintptr_t WalkSpeed = 0x1DC; //   @ 0x7FF6AC434100 | Sig: F3 0F 10 81 DC 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 D4 01 00 00 F2 0F
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4; //bozuk
        constexpr std::uintptr_t WalkToPoint = 0x17C; //   @ 0x7FF6AD70F41D | Sig: 42 0F 10 84 C1 7C 01 00 00 42 0F 10 8C C1 8C 01 00 00 0F 11 02 42 0F 10
    }

    namespace InputObject {
        constexpr std::uintptr_t MousePosition = 0xEC; //   @ 0x7FF6AC6D4FD0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
    }

    namespace Instance {
        constexpr std::uintptr_t AttributeContainer = 0x48; //   @ 0x7FF6AC0E9B70 | Sig: 48 8B 41 48 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 55 56 57 41 56 48
        constexpr std::uintptr_t AttributeList = 0x18; //   @ 0x7FF6ABE37350 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t AttributeToNext = 0x58; //   @ 0x7FF6ACA63E90 | Sig: 48 8B 41 58 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t AttributeToValue = 0x18; //   @ 0x7FF6ABE37350 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ChildrenEnd = 0x8; //   @ 0x7FF6ABD5CA70 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ChildrenStart = 0x78; //   @ 0x7FF6AC6A57D0 | Sig: F3 0F 10 41 78 C3 CC CC CC CC CC CC CC CC CC CC 0F B6 41 0C C3 CC CC CC
        constexpr std::uintptr_t ClassDescriptor = 0x18; //   @ 0x7FF6ABE37350 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ClassName = 0x8; //   @ 0x7FF6ABD5CA70 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Name = 0xB0; //   @ 0x7FF6ACD12A73 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 04 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Parent = 0x70; //   @ 0x7FF6ABEAB3D0 | Sig: 48 8B 41 70 C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 41 75 C3 CC CC CC
    }

    namespace Lighting {
        constexpr std::uintptr_t Ambient = 0xE0; //   @ 0x7FF6AC76ED70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t Atmosphere = 0x1F0; //   @ 0x7FF6AC6B97D0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B C4 48 89 58 08 57
        constexpr std::uintptr_t Brightness = 0x128; //   @ 0x7FF6AC5952D0 | Sig: F3 0F 10 81 28 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 2C 01 00 00
        constexpr std::uintptr_t ClockTime = 0x1C0; //   @ 0x7FF6AE4BBDC0 | Sig: F3 0F 10 81 C0 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
        constexpr std::uintptr_t ColorShift_Bottom = 0xEC; //   @ 0x7FF6AC6D4FD0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t ColorShift_Top = 0xF8; //   @ 0x7FF6AC091F30 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t EnvironmentDiffuseScale = 0x12C; //   @ 0x7FF6AC5952E0 | Sig: F3 0F 10 81 2C 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 30 01 00 00 C3 CC
        constexpr std::uintptr_t EnvironmentSpecularScale = 0x130; //   @ 0x7FF6ACD12B0D | Sig: 48 8B 81 ? ? ? ? C3 33 C0 C3 CC CC CC CC CC CC CC CC 83 FA 1E CC CC
        constexpr std::uintptr_t ExposureCompensation = 0x134; //   @ 0x7FF6AD868E30 | Sig: F3 0F 10 81 34 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 38 01 00 00
        constexpr std::uintptr_t FogColor = 0x104; //   @ 0x7FF6ACA554C0 | Sig: F3 0F 10 81 04 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 08 01 00 00
        constexpr std::uintptr_t FogEnd = 0x13C; //   @ 0x7FF6AD868E70 | Sig: F3 0F 10 81 3C 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t FogStart = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t OutdoorAmbient = 0x110; //   @ 0x7FF6AC091F40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t ShadowSoftness = 0x148; //   @ 0x7FF6AB7080D9 | Sig: 48 8D B4 24 ? ? ? ? 48 8B 5E F8 48 8D 26 48 ? ? ? ? 48 ? ? ?
        constexpr std::uintptr_t Sky = 0x1E0; //   @ 0x7FF6AE3DBD00 | Sig: 0F B6 81 E0 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
    }

    namespace LightingParameters {
        constexpr std::uintptr_t GeographicLatitude = 0x198; //   @ 0x7FF6AC6DC720 | Sig: F3 0F 10 81 98 01 00 00 C3 CC CC CC CC CC CC CC 48 8D 81 ? ? ? ? C3
        constexpr std::uintptr_t LightColor = 0x164; //   @ 0x7FF6AE18CC7E | Sig: FF 8B 64 01 00 00 80 BB 5C 01 00 00 00 75 25 48 8B 07 48 8B CF 48 8B 40
        constexpr std::uintptr_t LightDirection = 0x170; //   @ 0x7FF6ACD12A49 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 01 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t SkyAmbient = 0x158; //   @ 0x7FF6ACB1DF70 | Sig: 0F B6 81 58 01 00 00 C3 CC CC CC CC CC CC CC CC F3 0F 10 81 5C 01 00 00
        constexpr std::uintptr_t SkyAmbient2 = 0x19C; //   @ 0x7FF6AC3AE970 | Sig: F3 0F 10 81 9C 01 00 00 C3 CC CC CC CC CC CC CC 8B 41 08 F2 0F 10 01 F2
        constexpr std::uintptr_t Source = 0x17C; //   @ 0x7FF6AD70F41D | Sig: 42 0F 10 84 C1 7C 01 00 00 42 0F 10 8C C1 8C 01 00 00 0F 11 02 42 0F 10
        constexpr std::uintptr_t TrueMoonPosition = 0x18C; //   @ 0x7FF6AC6DC6E0 | Sig: F3 0F 10 81 8C 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 90 01 00 00
        constexpr std::uintptr_t TrueSunPosition = 0x180; //   @ 0x7FF6ACD12A57 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 02 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace LocalScript {
        constexpr std::uintptr_t Bytecode = 0x1A8; //   @ 0x7FF6AE3DAC50 | Sig: 0F B6 81 A8 01 00 00 C3 CC CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t Hash = 0xE8; //   @ 0x7FF6AC8B6B80 | Sig: F3 0F 10 81 E8 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 E0 00 00 00 C3 CC
    }

    namespace MaterialColors {
        constexpr std::uintptr_t Asphalt = 0x30; //   @ 0x7FF6AC35B560 | Sig: 48 8B 41 30 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 81 EC 90 00 00
        constexpr std::uintptr_t Basalt = 0x27; //bozuk
        constexpr std::uintptr_t Brick = 0xF; //bozuk
        constexpr std::uintptr_t Cobblestone = 0x33; //   @ 0x7FF6AD6BA8A0 | Sig: 0F B6 41 33 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Concrete = 0xC; //   @ 0x7FF6AC3ACC40 | Sig: F3 0F 10 41 0C C3 CC CC CC CC CC CC CC CC CC CC F2 0F 10 41 08 48 8B C2
        constexpr std::uintptr_t CrackedLava = 0x2D; //bozuk
        constexpr std::uintptr_t Glacier = 0x1B; //   @ 0x7FF6ADCC8280 | Sig: 0F B6 41 1B C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 05 2E 02 B3 05 C3
        constexpr std::uintptr_t Grass = 0x6; //   @ 0x7FF6AC7F0220 | Sig: 0F B6 41 06 C3 CC CC CC CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t Ground = 0x2A; //bozuk
        constexpr std::uintptr_t Ice = 0x36; //bozuk
        constexpr std::uintptr_t LeafyGrass = 0x39; //   @ 0x7FF6AE29B900 | Sig: 0F B6 41 39 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8B C4 48 89 58 10 4C
        constexpr std::uintptr_t Limestone = 0x3F; //bozuk
        constexpr std::uintptr_t Mud = 0x24; //   @ 0x7FF6AC26C890 | Sig: F3 0F 10 41 24 C3 CC CC CC CC CC CC CC CC CC CC 48 8B C4 55 41 54 41 56
        constexpr std::uintptr_t Pavement = 0x42; //bozuk
        constexpr std::uintptr_t Rock = 0x18; //   @ 0x7FF6ABE37350 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Salt = 0x3C; //   @ 0x7FF6AC6007F0 | Sig: F3 0F 10 41 3C C3 CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t Sand = 0x12; //   @ 0x7FF6AC802C40 | Sig: 0F B6 41 12 C3 CC CC CC CC CC CC CC CC CC CC CC 88 51 13 C3 CC CC CC CC
        constexpr std::uintptr_t Sandstone = 0x21; //   @ 0x7FF6ACD73A90 | Sig: 0F B6 41 21 C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 41 34 C3 CC CC CC
        constexpr std::uintptr_t Slate = 0x9; //bozuk
        constexpr std::uintptr_t Snow = 0x1E; //bozuk
        constexpr std::uintptr_t WoodPlanks = 0x15; //   @ 0x7FF6AC5331A0 | Sig: 0F B6 41 15 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
    }

    namespace MeshPart {
        constexpr std::uintptr_t MeshId = 0x2F8; //   @ 0x7FF6AE306370 | Sig: 0F B6 81 F8 02 00 00 C3 CC CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t TextureId = 0x328; //   @ 0x7FF6AC80F269 | Sig: 48 89 81 ? ? ? ? C6 81 30 03 00 00 01 48 89 81 ? ? ? ? 48 89 81
    }

    namespace ModuleScript {
        constexpr std::uintptr_t Bytecode = 0x150; //   @ 0x7FF6ACD12AD5 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0B 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Hash = 0xE8; //   @ 0x7FF6AC8B6B80 | Sig: F3 0F 10 81 E8 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 E0 00 00 00 C3 CC
    }

    namespace MouseService {
        constexpr std::uintptr_t InputObject = 0x118; //   @ 0x7FF6AC595290 | Sig: F3 0F 10 81 18 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 1C 01 00 00
    }

    namespace Player {
        constexpr std::uintptr_t AccountAge = 0x34C; //   @ 0x7FF6AE084038 | Sig: BA 4C 03 00 00 41 B9 08 00 00 00 41 B8 08 02 00 00 48 8D 4D D0 E8 ? ?
        constexpr std::uintptr_t Character = 0x3C8; //   @ 0x7FF6ABDACF2A | Sig: 48 81 EC C8 03 00 00 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ?
        constexpr std::uintptr_t DisplayName = 0x150; //   @ 0x7FF6ACD12AD5 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0B 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t HealthDisplayDistance = 0x378; //   @ 0x7FF6AC80E9D0 | Sig: 0F 10 90 78 03 00 00 0F 10 98 88 03 00 00 F2 0F 10 A0 98 03 00 00 C6 45
        constexpr std::uintptr_t LocaleId = 0x720; //   @ 0x7FF6AC80E451 | Sig: 0F 10 80 20 07 00 00 0F 29 44 24 60 48 ? ? ? ? 48 8D 0D ? ? ? ?
        constexpr std::uintptr_t NameDisplayDistance = 0x388; //   @ 0x7FF6AE29A7CD | Sig: F3 0F 10 81 88 03 00 00 C3 CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ?
        constexpr std::uintptr_t Team = 0x2D0; //   @ 0x7FF6AD30B060 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 51 08 B9 F8 01 00
        constexpr std::uintptr_t TeamColor = 0x394; //bozuk
        constexpr std::uintptr_t UserId = 0x2F8; //   @ 0x7FF6AE306370 | Sig: 0F B6 81 F8 02 00 00 C3 CC CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
    }

    namespace Players {
        constexpr std::uintptr_t LocalPlayer = 0x138; //   @ 0x7FF6AD868E40 | Sig: F3 0F 10 81 38 01 00 00 C3 CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
    }

    namespace Primitive {
        constexpr std::uintptr_t AssemblyAngularVelocity = 0x104; //   @ 0x7FF6ACA554C0 | Sig: F3 0F 10 81 04 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 08 01 00 00
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8; //   @ 0x7FF6AC091F30 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t CFrame = 0xC8; //   @ 0x7FF6AC07B500 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t Material = 0x236; //bozuk
        constexpr std::uintptr_t Orientation = 0xC8; //   @ 0x7FF6AC07B500 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t Position = 0xEC; //   @ 0x7FF6AC6D4FD0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6; //   @ 0x7FF6AD0CD011 | Sig: 41 0F B6 87 B6 01 00 00 A8 01 0F 85 E0 01 00 00 A8 08 0F 84 D8 01 00 00
        constexpr std::uintptr_t Rotation = 0xC8; //   @ 0x7FF6AC07B500 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t Size = 0x1B8; //   @ 0x7FF6AE14611E | Sig: F3 0F 10 81 B8 01 00 00 C3 CC CC CC CC CC CC CC CC CC 48 8B 81 ? ? ?
    }

    namespace PrimitiveFlags {
        constexpr std::uintptr_t Anchored = 0x2; //   @ 0x7FF6AE840890 | Sig: 0F B7 41 02 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 83
        constexpr std::uintptr_t CanCollide = 0x8; //   @ 0x7FF6ABD5CA70 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t CanQuery = 0x20; //   @ 0x7FF6ABE8FE40 | Sig: 48 8B 41 20 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8D 41 20 C3 CC CC CC
        constexpr std::uintptr_t CanTouch = 0x10; //   @ 0x7FF6ABD35A70 | Sig: 48 8B 41 10 C3 CC CC CC CC CC CC CC CC CC CC CC 80 39 00 48 8D 41 08 4C
    }

    namespace ProximityPrompt {
        constexpr std::uintptr_t ActionText = 0xC8; //   @ 0x7FF6AC07B500 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t Enabled = 0x14E; //bozuk
        constexpr std::uintptr_t HoldDuration = 0x138; //   @ 0x7FF6AD868E40 | Sig: F3 0F 10 81 38 01 00 00 C3 CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t KeyboardKeyCode = 0x13C; //   @ 0x7FF6AD868E70 | Sig: F3 0F 10 81 3C 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t MaxActivationDistance = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t ObjectText = 0xE8; //   @ 0x7FF6AC8B6B80 | Sig: F3 0F 10 81 E8 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 E0 00 00 00 C3 CC
        constexpr std::uintptr_t RequiresLineOfSight = 0x14F; //bozuk
    }

    namespace RenderView {
        constexpr std::uintptr_t LightingValid = 0x170; //   @ 0x7FF6ACD12A49 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 01 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t SkyboxValid = 0x28D; //bozuk
    }

    namespace Seat {
        constexpr std::uintptr_t Occupant = 0x218; //   @ 0x7FF6AE136700 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 44 0F B6 C2 41 83 E8 01
    }

    namespace Sky {
        constexpr std::uintptr_t MoonAngularSize = 0x25C; //   @ 0x7FF6AD30A9B9 | Sig: 89 83 5C 02 00 00 89 83 50 02 00 00 89 7C 24 28 40 38 3D 50 6E 1D 06 0F
        constexpr std::uintptr_t MoonTextureId = 0xE0; //   @ 0x7FF6AC76ED70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t SkyboxBk = 0x110; //   @ 0x7FF6AC091F40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t SkyboxDn = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t SkyboxFt = 0x170; //   @ 0x7FF6ACD12A49 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 01 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t SkyboxLf = 0x1A0; //   @ 0x7FF6AE137340 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t SkyboxOrientation = 0x250; //   @ 0x7FF6AE306A20 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81 04 03 00 00 C3
        constexpr std::uintptr_t SkyboxRt = 0x1D0; //   @ 0x7FF6AC7F4BD0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t SkyboxUp = 0x200; //   @ 0x7FF6AC150080 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t StarCount = 0x260; //   @ 0x7FF6ACEEFEF0 | Sig: 0F B6 81 60 02 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t SunAngularSize = 0x264; //   @ 0x7FF6AD30DFE8 | Sig: F3 0F 10 81 64 02 00 00 F3 0F 59 C6 F3 0F 58 D0 F3 0F 10 81 68 02 00 00
        constexpr std::uintptr_t SunTextureId = 0x230; //   @ 0x7FF6AE15A2F0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 85 D2 75 05 48 8B 41 08
    }

    namespace SpecialMesh {
        constexpr std::uintptr_t MeshId = 0x110; //   @ 0x7FF6AC091F40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Offset = 0xD0; //   @ 0x7FF6AC091F70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Scale = 0xDC; //   @ 0x7FF6AC6D4F90 | Sig: F3 0F 10 81 DC 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 E0 00 00 00
        constexpr std::uintptr_t TextureId = 0x140; //   @ 0x7FF6ACD12AC7 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace Team {
        constexpr std::uintptr_t TeamColor = 0xD0; //   @ 0x7FF6AC091F70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace Terrain {
        constexpr std::uintptr_t GrassLength = 0x1F0; //   @ 0x7FF6AC6B97D0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B C4 48 89 58 08 57
        constexpr std::uintptr_t MaterialColors = 0x4A0; //   @ 0x7FF6AB6C54E5 | Sig: 48 89 8E ? ? ? ? BA 80 00 00 00 E8 ? ? ? ? 48 89 86 ? ? ? ?
        constexpr std::uintptr_t WaterColor = 0x1E0; //   @ 0x7FF6AE3DBD00 | Sig: 0F B6 81 E0 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
        constexpr std::uintptr_t WaterReflectance = 0x1F8; //   @ 0x7FF6AC702C00 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 63 81 D8 01 00 00 48
        constexpr std::uintptr_t WaterTransparency = 0x1FC; //   @ 0x7FF6AD309A62 | Sig: 89 B3 FC 01 00 00 8B 0D 42 1F 80 06 65 48 8B 04 25 58 00 00 00 41 B8 F4
        constexpr std::uintptr_t WaterWaveSize = 0x200; //   @ 0x7FF6AC150080 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t WaterWaveSpeed = 0x204; //   @ 0x7FF6ADDDADA0 | Sig: F3 0F 10 81 04 02 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
    }

    namespace TextButton {
        constexpr std::uintptr_t AutoButtonColor = 0x9C4; //bozuk
        constexpr std::uintptr_t ContentText = 0xDD0; //   @ 0x7FF6AC2B8097 | Sig: 49 8D 88 D0 0D 00 00 E8 ? ? ? ? 90 48 8B 4D DF 48 85 C9 0F 84 2B FF
        constexpr std::uintptr_t Font = 0x10E8; //bozuk
        constexpr std::uintptr_t LineHeight = 0xEC8; //bozuk
        constexpr std::uintptr_t LocalizedText = 0xDD0; //   @ 0x7FF6AC2B8097 | Sig: 49 8D 88 D0 0D 00 00 E8 ? ? ? ? 90 48 8B 4D DF 48 85 C9 0F 84 2B FF
        constexpr std::uintptr_t MaxVisibleGraphemes = 0x10F4; //bozuk
        constexpr std::uintptr_t Modal = 0x9C5; //bozuk
        constexpr std::uintptr_t RichText = 0xFC6; //   @ 0x7FF6AEDD876F | Sig: 81 FF C6 0F 00 00 74 E3 81 FF 39 0F 00 00 75 15 B8 7F 00 00 00 C1 E0 08
        constexpr std::uintptr_t Selected = 0x9C6; //bozuk
        constexpr std::uintptr_t Text = 0xDD0; //   @ 0x7FF6AC2B8097 | Sig: 49 8D 88 D0 0D 00 00 E8 ? ? ? ? 90 48 8B 4D DF 48 85 C9 0F 84 2B FF
        constexpr std::uintptr_t TextColor3 = 0x10D0; //bozuk
        constexpr std::uintptr_t TextDirection = 0xF68; //   @ 0x7FF6AE1410F8 | Sig: 60 48 C7 44 24 68 0F 00 00 00 0F 28 44 24 60 66 0F 7F 44 24 60 41 B9 01
        constexpr std::uintptr_t TextScaled = 0xDB9; //bozuk
        constexpr std::uintptr_t TextSize = 0x10FC; //bozuk
        constexpr std::uintptr_t TextStrokeColor3 = 0x10DC; //bozuk
        constexpr std::uintptr_t TextStrokeTransparency = 0x1100; //bozuk
        constexpr std::uintptr_t TextTransparency = 0x1104; //bozuk
        constexpr std::uintptr_t TextTruncate = 0x1108; //   @ 0x7FF6AC50C2B8 | Sig: 49 8B 92 08 11 00 00 4D 69 C9 80 90 00 00 41 0F C6 C8 FF 41 0F 59 C8 0F
        constexpr std::uintptr_t TextWrapped = 0xFC0; //   @ 0x7FF6AB7110C0 | Sig: 4F 8D 94 09 ? ? ? ? 4A 8D 6C 4D C0 4D 29 D3 41 BA 00 00 00 00 4D 0F
        constexpr std::uintptr_t TextXAlignment = 0x110C; //bozuk
        constexpr std::uintptr_t TextYAlignment = 0xF10; //bozuk
    }

    namespace TextLabel {
        constexpr std::uintptr_t ContentText = 0xB50; //   @ 0x7FF6ACC12E30 | Sig: 48 8B 81 ? ? ? ? 48 89 02 8B 81 48 0B 00 00 89 42 08 8B 81 4C 0B 00
        constexpr std::uintptr_t Font = 0xE68; //bozuk
        constexpr std::uintptr_t LineHeight = 0xC48; //   @ 0x7FF6AC217C0A | Sig: 45 8B 9D 48 0C 00 00 45 33 FF 45 8D 67 01 45 85 DB 0F 84 86 00 00 00 45
        constexpr std::uintptr_t LocalizedText = 0xB50; //   @ 0x7FF6ACC12E30 | Sig: 48 8B 81 ? ? ? ? 48 89 02 8B 81 48 0B 00 00 89 42 08 8B 81 4C 0B 00
        constexpr std::uintptr_t MaxVisibleGraphemes = 0xE74; //bozuk
        constexpr std::uintptr_t RichText = 0xD46; //bozuk
        constexpr std::uintptr_t Text = 0xB50; //   @ 0x7FF6ACC12E30 | Sig: 48 8B 81 ? ? ? ? 48 89 02 8B 81 48 0B 00 00 89 42 08 8B 81 4C 0B 00
        constexpr std::uintptr_t TextColor3 = 0xE50; //bozuk
        constexpr std::uintptr_t TextDirection = 0xCE8; //bozuk
        constexpr std::uintptr_t TextScaled = 0xB39; //bozuk
        constexpr std::uintptr_t TextSize = 0xE7C; //bozuk
        constexpr std::uintptr_t TextStrokeColor3 = 0xE5C; //bozuk
        constexpr std::uintptr_t TextStrokeTransparency = 0xE80; //   @ 0x7FF6AE1A5EC9 | Sig: 48 81 EC 80 0E 00 00 0F 29 70 B8 0F 29 78 A8 44 0F 29 40 98 44 0F 29 48
        constexpr std::uintptr_t TextTransparency = 0xE84; //bozuk
        constexpr std::uintptr_t TextTruncate = 0xE88; //bozuk
        constexpr std::uintptr_t TextWrapped = 0xD40; //   @ 0x7FF6AC3D7B32 | Sig: 48 8B 81 ? ? ? ? 33 D2 48 85 C0 48 8D 88 ? ? ? ? 48 0F 44 CA 48
        constexpr std::uintptr_t TextXAlignment = 0xE8C; //bozuk
        constexpr std::uintptr_t TextYAlignment = 0xC90; //   @ 0x7FF6AC207604 | Sig: FF 8F 90 0C 00 00 FF 87 94 0C 00 00 4C 8B 87 ? ? ? ? 44 8B 8F 80 0C
    }

    namespace Tool {
        constexpr std::uintptr_t CanBeDropped = 0x4C8; //   @ 0x7FF6ACE3B721 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ? ?
        constexpr std::uintptr_t Enabled = 0x4C9; //bozuk
        constexpr std::uintptr_t Grip = 0x498; //   @ 0x7FF6ACE3E7E1 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83 B9 C0 01 00 00 00 74 08
        constexpr std::uintptr_t GripForward = 0x4B0; //   @ 0x7FF6AB6C54FD | Sig: 48 89 86 ? ? ? ? 48 85 C0 74 78 8B 0D A1 64 44 08 65 48 8B 14 25 58
        constexpr std::uintptr_t GripPos = 0x4BC; //bozuk
        constexpr std::uintptr_t GripRight = 0x498; //   @ 0x7FF6ACE3E7E1 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83 B9 C0 01 00 00 00 74 08
        constexpr std::uintptr_t GripUp = 0x4A4; //   @ 0x7FF6AC6FF3D7 | Sig: B8 A4 04 00 00 0F 44 C1 48 89 45 F0 B8 09 01 00 00 0F 45 F0 80 3D 2E 5F
        constexpr std::uintptr_t ManualActivationOnly = 0x4CA; //bozuk
        constexpr std::uintptr_t RequiresHandle = 0x4CB; //bozuk
        constexpr std::uintptr_t Tooltip = 0x478; //   @ 0x7FF6ACE3EFF1 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 48 83 EC 28 8B 91 C0 01 00
    }

    namespace Value {
        constexpr std::uintptr_t Value = 0xD0; //   @ 0x7FF6AC091F70 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace VehicleSeat {
        constexpr std::uintptr_t MaxSpeed = 0x230; //   @ 0x7FF6AE15A2F0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 85 D2 75 05 48 8B 41 08
        constexpr std::uintptr_t Occupant = 0x210; //   @ 0x7FF6ABD0E405 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t SteerFloat = 0x238; //   @ 0x7FF6ABF0A34D | Sig: 48 8B 93 ? ? ? ? 48 85 D2 74 3D 4C 8B 83 ? ? ? ? 4C 2B C2 48 8B
        constexpr std::uintptr_t ThrottleFloat = 0x240; //   @ 0x7FF6ACE5FB50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Torque = 0x244; //   @ 0x7FF6ACCAF700 | Sig: 48 ? ? ? ? 48 ? ? ? ? 4C ? ? ? ? 48 ? ? ? ? 57 48 83 EC
        constexpr std::uintptr_t TurnSpeed = 0x248; //   @ 0x7FF6AE3064C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC F3 0F 10 81 D0 02 00 00
    }

    namespace VisualEngine {
        constexpr std::uintptr_t Dimensions = 0xAB0; //   @ 0x7FF6AC3D7BF0 | Sig: F3 0F 10 81 B0 0A 00 00 C3 CC CC CC CC CC CC CC 48 83 EC 28 48 8B 81 ?
        constexpr std::uintptr_t FakeDataModel = 0xA90; //   @ 0x7FF6ACC130D9 | Sig: 48 8B 81 ? ? ? ? C3 48 C7 C0 FF FF FF FF C3 CC CC CC CC CC CC CC 80
        constexpr std::uintptr_t Pointer = 0x8158B80; //   @ 0x7FF6B3818B80 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RenderView = 0xBB0; //   @ 0x7FF6ACC13159 | Sig: 48 8B 81 ? ? ? ? C3 48 C7 C0 FF FF FF FF C3 CC CC CC CC CC CC CC 80
        constexpr std::uintptr_t ViewMatrix = 0x150; //   @ 0x7FF6ACD12AD5 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0B 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace Workspace {
        constexpr std::uintptr_t CurrentCamera = 0x4B0; //   @ 0x7FF6AB6C54FD | Sig: 48 89 86 ? ? ? ? 48 85 C0 74 78 8B 0D A1 64 44 08 65 48 8B 14 25 58
        constexpr std::uintptr_t ReadOnlyGravity = 0x9F0; //   @ 0x7FF6AE29A6C7 | Sig: 48 81 C1 F0 09 00 00 E8 ? ? ? ? 0F 10 00 66 48 0F 7E C2 0F 11 44 24
        constexpr std::uintptr_t World = 0x408; //   @ 0x7FF6ACD133A0 | Sig: F3 0F 10 81 08 04 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
    }

    namespace World {
        constexpr std::uintptr_t Gravity = 0x210; //   @ 0x7FF6ABD0E405 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t Primitives = 0x280; //   @ 0x7FF6ABD12ACC | Sig: 48 81 EC 80 02 00 00 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ?
        constexpr std::uintptr_t WorldSteps = 0x5D8; //   @ 0x7FF6AE846640 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
    }
}
