#pragma once
#include <cstdint>

// Target Version: version-76173e47a79145c7

namespace Roblox {
    namespace Atmosphere {
        constexpr std::uintptr_t Color = 0xD0; // Resolved @ 0x7FF672C84D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Decay = 0xDC; // Resolved @ 0x7FF67329AD80 | Sig: F3 0F 10 81 DC 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 E0 00 00 00
        constexpr std::uintptr_t Density = 0xE8; // Resolved @ 0x7FF67391002F | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 06 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Glare = 0xEC; // Resolved @ 0x7FF67329ADC0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t Haze = 0xF0; // Resolved @ 0x7FF672C84EA0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Offset = 0xF4; // Resolved @ 0x7FF67329ADE0 | Sig: F3 0F 10 81 F4 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 F8 00 00 00
    }

    namespace BasePart {
        constexpr std::uintptr_t CastShadow = 0xF5; // Resolved @ 0x7FF672D17450 | Sig: 0F B6 81 F5 00 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Color3 = 0x194; // Resolved @ 0x7FF672F89A20 | Sig: F3 0F 10 81 94 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 98 01 00 00 C3 CC
        constexpr std::uintptr_t Locked = 0xF6; // Resolved @ 0x7FF6742E57D0 | Sig: 0F B6 81 F6 00 00 00 C3 CC CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t Massless = 0xF7; // Resolved @ 0x7FF6742E58B0 | Sig: 0F B6 81 F7 00 00 00 C3 CC CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t Primitive = 0x148; // Resolved @ 0x7FF6739100AD | Sig: 48 8B 81 ? ? ? ? C3 33 C0 C3 CC CC CC CC CC CC CC CC 83 FA 1E 75 08
        constexpr std::uintptr_t Reflectance = 0xEC; // Resolved @ 0x7FF67329ADC0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t Shape = 0x1B1; // Unresolved in this version
        constexpr std::uintptr_t Transparency = 0xF0; // Resolved @ 0x7FF672C84EA0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace BloomEffect {
        constexpr std::uintptr_t Intensity = 0xD0; // Resolved @ 0x7FF672C84D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Size = 0xD4; // Resolved @ 0x7FF67329AD40 | Sig: F3 0F 10 81 D4 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 D8 00 00 00
        constexpr std::uintptr_t Threshold = 0xD8; // Resolved @ 0x7FF673910021 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 05 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace ByteCode {
        constexpr std::uintptr_t Pointer = 0x10; // Resolved @ 0x7FF672943DE0 | Sig: 48 8B 41 10 C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 01 83 FA 05 77 17
        constexpr std::uintptr_t Size = 0x20; // Resolved @ 0x7FF672A910B0 | Sig: 48 8B 41 20 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8D 41 20 C3 CC CC CC
    }

    namespace Camera {
        constexpr std::uintptr_t CFrame = 0xF8; // Resolved @ 0x7FF672C84D10 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t FieldOfView = 0x160; // Resolved @ 0x7FF673725800 | Sig: F3 0F 10 81 60 01 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Position = 0x11C; // Resolved @ 0x7FF673159A20 | Sig: F3 0F 10 81 1C 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 20 01 00 00
        constexpr std::uintptr_t Rotation = 0xF8; // Resolved @ 0x7FF672C84D10 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t ViewportInt16 = 0x2AC; // Resolved @ 0x7FF6746A88E0 | Sig: 0F BF 83 AC 02 00 00 F3 0F 11 A4 24 80 00 00 00 F3 0F 5E F0 0F 5B C9 0F
        constexpr std::uintptr_t ViewportSize = 0x2E8; // Resolved @ 0x7FF672909077 | Sig: 48 89 B3 ? ? ? ? 48 89 B3 ? ? ? ? 48 8B C3 48 ? ? ? ? 48 ?
    }

    namespace CharacterMesh {
        constexpr std::uintptr_t BaseTextureId = 0xE0; // Resolved @ 0x7FF673333730 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t BodyPart = 0x160; // Resolved @ 0x7FF673725800 | Sig: F3 0F 10 81 60 01 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF672C84D20 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t OverlayTextureId = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
    }

    namespace DataModel {
        constexpr std::uintptr_t CreatorId = 0x190; // Resolved @ 0x7FF674A296E0 | Sig: 0F B6 81 90 01 00 00 C3 CC CC CC CC CC CC CC CC 48 63 C2 8B 84 81 B4 03
        constexpr std::uintptr_t GameId = 0x198; // Resolved @ 0x7FF673562E60 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 4C 8B 81 ? ? ? ? 33
        constexpr std::uintptr_t GameLoaded = 0x670; // Resolved @ 0x7FF672306F78 | Sig: 48 81 C6 70 06 00 00 48 89 F1 48 89 DA 45 31 C0 E8 ? ? ? ? 48 89 F8
        constexpr std::uintptr_t JobId = 0x138; // Resolved @ 0x7FF6738A90C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 83 EC 28 48 81 C1 C8
        constexpr std::uintptr_t PlaceId = 0x1A0; // Resolved @ 0x7FF674CB4BA0 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t ServerIP = 0x658; // Resolved @ 0x7FF673F31579 | Sig: C6 83 58 06 00 00 01 C7 83 5C 06 00 00 10 00 00 00 48 89 BB ? ? ? ?
        constexpr std::uintptr_t Workspace = 0x178; // Resolved @ 0x7FF673561750 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41 3C F2 0F 10 41 34
    }

    namespace FakeDataModel {
        constexpr std::uintptr_t Pointer = 0x7A39AD8; // Resolved @ 0x7FF679D39AD8 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RealDataModel = 0x1D8; // Resolved @ 0x7FF672A9FB35 | Sig: 48 8B 8A ? ? ? ? BF 1B 00 00 00 48 8B 92 ? ? ? ? 48 85 C9 48 ?
    }

    namespace GuiBase2D {
        constexpr std::uintptr_t AbsolutePosition = 0x10C; // Resolved @ 0x7FF673510150 | Sig: F3 0F 10 81 0C 01 00 00 C3 CC CC CC CC CC CC CC 48 8B C1 33 D2 48 81 C1
        constexpr std::uintptr_t AbsoluteRotation = 0x188; // Resolved @ 0x7FF673562C40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t AbsoluteSize = 0x118; // Resolved @ 0x7FF673910059 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 09 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace GuiObject {
        constexpr std::uintptr_t Active = 0x5A8; // Resolved @ 0x7FF674F20B00 | Sig: 48 8B 81 ? ? ? ? 48 89 02 48 8B C2 C3 CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t AnchorPoint = 0x558; // Resolved @ 0x7FF67291470D | Sig: C6 83 58 05 00 00 01 48 89 BB ? ? ? ? 48 89 BB ? ? ? ? 48 89 BB
        constexpr std::uintptr_t AutomaticSize = 0x560; // Resolved @ 0x7FF67297849D | Sig: 66 0F 7F 8D 60 05 00 00 0F 10 05 04 69 F8 06 0F 29 85 70 05 00 00 C6 44
        constexpr std::uintptr_t BackgroundColor3 = 0x540; // Resolved @ 0x7FF673A2E989 | Sig: 48 8B 81 ? ? ? ? C3 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 48
        constexpr std::uintptr_t BackgroundTransparency = 0x564; // Unresolved in this version
        constexpr std::uintptr_t BorderColor3 = 0x54C; // Resolved @ 0x7FF674AA704C | Sig: 48 8D 83 ? ? ? ? B9 D4 00 00 00 48 0F 44 C1 83 38 03 74 10 BA 03 00
        constexpr std::uintptr_t BorderMode = 0x568; // Resolved @ 0x7FF67293D7CE | Sig: 48 8B 87 ? ? ? ? 40 86 70 30 48 ? ? ? ? 48 83 7C 24 78 08 48 0F
        constexpr std::uintptr_t BorderSizePixel = 0x56C; // Resolved @ 0x7FF673024646 | Sig: F3 0F 11 99 6C 05 00 00 C7 81 C8 02 00 00 00 00 80 3F F3 0F 5E E0 0F 28
        constexpr std::uintptr_t ClipsDescendants = 0x5A9; // Unresolved in this version
        constexpr std::uintptr_t GuiState = 0x578; // Resolved @ 0x7FF672914729 | Sig: 48 89 BB ? ? ? ? 48 89 BB ? ? ? ? 48 89 BB ? ? ? ? 48 89 BB
        constexpr std::uintptr_t Interactable = 0x5AB; // Unresolved in this version
        constexpr std::uintptr_t LayoutOrder = 0x580; // Resolved @ 0x7FF672306FEC | Sig: 49 8D 84 24 80 05 00 00 48 89 45 D8 49 8D 84 24 C0 06 00 00 48 89 45 C8
        constexpr std::uintptr_t Position = 0x510; // Resolved @ 0x7FF672914689 | Sig: 48 89 BB ? ? ? ? 48 C7 83 18 05 00 00 0F 00 00 00 40 88 BB 00 05 00
        constexpr std::uintptr_t Rotation = 0x188; // Resolved @ 0x7FF673562C40 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Selectable = 0x5AC; // Unresolved in this version
        constexpr std::uintptr_t SelectionOrder = 0x59C; // Unresolved in this version
        constexpr std::uintptr_t Size = 0x530; // Resolved @ 0x7FF6729146B0 | Sig: 48 89 BB ? ? ? ? 8B 0D F3 51 C3 07 65 48 8B 04 25 58 00 00 00 BA F4
        constexpr std::uintptr_t SizeConstraint = 0x5A0; // Resolved @ 0x7FF673A2E969 | Sig: 48 8B 81 ? ? ? ? C3 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83
        constexpr std::uintptr_t Visible = 0x5AD; // Unresolved in this version
        constexpr std::uintptr_t ZIndex = 0x5A4; // Unresolved in this version
    }

    namespace Humanoid {
        constexpr std::uintptr_t AutoJumpEnabled = 0x1E0; // Resolved @ 0x7FF67290B132 | Sig: 48 8D 8D ? ? ? ? FF 15 B1 72 4B 05 80 3D A2 BB 41 07 00 74 13 48 8B
        constexpr std::uintptr_t AutoRotate = 0x1E1; // Unresolved in this version
        constexpr std::uintptr_t AutomaticScalingEnabled = 0x1E2; // Resolved @ 0x7FF67380A0DF | Sig: 41 80 BC 24 E2 01 00 00 00 74 13 F3 45 0F 10 94 24 A0 01 00 00 F3 44 0F
        constexpr std::uintptr_t BreakJointsOnDeath = 0x1E3; // Unresolved in this version
        constexpr std::uintptr_t CameraOffset = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t DisplayDistanceType = 0x18C; // Resolved @ 0x7FF67463CBF0 | Sig: 0F B6 81 8C 01 00 00 C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 83
        constexpr std::uintptr_t EvaluateStateMachine = 0x1E4; // Resolved @ 0x7FF673F0F6B7 | Sig: F3 0F 10 86 E4 01 00 00 F3 0F 10 AE D8 01 00 00 F3 0F 10 8E E8 01 00 00
        constexpr std::uintptr_t Health = 0x194; // Resolved @ 0x7FF672F89A20 | Sig: F3 0F 10 81 94 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 98 01 00 00 C3 CC
        constexpr std::uintptr_t HealthDisplayDistance = 0x198; // Resolved @ 0x7FF673562E60 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 4C 8B 81 ? ? ? ? 33
        constexpr std::uintptr_t HealthDisplayType = 0x19C; // Resolved @ 0x7FF672F8A9F0 | Sig: F3 0F 10 81 9C 01 00 00 C3 CC CC CC CC CC CC CC 8B 41 08 F2 0F 10 01 F2
        constexpr std::uintptr_t HipHeight = 0x1A0; // Resolved @ 0x7FF674CB4BA0 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t JumpHeight = 0x1AC; // Resolved @ 0x7FF6753B7F40 | Sig: 0F B6 81 AC 01 00 00 C3 CC CC CC CC CC CC CC CC 83 B9 60 01 00 00 00 76
        constexpr std::uintptr_t JumpPower = 0x1B0; // Resolved @ 0x7FF672D17551 | Sig: 48 8B 81 ? ? ? ? 48 89 02 48 8B C2 4C 89 42 08 C3 CC CC CC CC CC CC
        constexpr std::uintptr_t MaxHealth = 0x1B4; // Resolved @ 0x7FF672D1B648 | Sig: 4C 8D 8B ? ? ? ? 4C 8D 05 ? ? ? ? 48 8D 95 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t MaxSlopeAngle = 0x1B8; // Resolved @ 0x7FF67297834E | Sig: 4C 8B 85 ? ? ? ? 49 83 F8 08 72 16 49 FF C0 48 8B 95 ? ? ? ? 48
        constexpr std::uintptr_t NameDisplayDistance = 0x1BC; // Resolved @ 0x7FF672D1B70C | Sig: 4C 8D 8B ? ? ? ? 4C 8D 05 ? ? ? ? 48 8D 95 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t NameOcclusion = 0x1C0; // Resolved @ 0x7FF672A0B1E2 | Sig: 25 C0 01 00 00 45 8D 77 04 83 F8 40 74 76 85 DB 0F 85 3E 01 00 00 48 85
        constexpr std::uintptr_t RequiresNeck = 0x1E9; // Unresolved in this version
        constexpr std::uintptr_t RigType = 0x1CC; // Resolved @ 0x7FF672FFD636 | Sig: F2 0F 10 81 CC 01 00 00 F2 0F 11 02 89 42 08 48 8B C2 C3 CC CC CC CC CC
        constexpr std::uintptr_t SeatPart = 0x120; // Resolved @ 0x7FF672B60980 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Sit = 0x1EA; // Unresolved in this version
        constexpr std::uintptr_t TargetPoint = 0x164; // Resolved @ 0x7FF67463C8F0 | Sig: 0F B6 81 64 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 7D 01 00 00 C3
        constexpr std::uintptr_t UseJumpPower = 0x1EC; // Unresolved in this version
        constexpr std::uintptr_t WalkSpeed = 0x1DC; // Resolved @ 0x7FF672FFD620 | Sig: F3 0F 10 81 DC 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 D4 01 00 00 F2 0F
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4; // Resolved @ 0x7FF6731B0BF1 | Sig: 41 8B 86 C4 03 00 00 89 85 C4 03 00 00 41 8B 86 C8 03 00 00 89 85 C8 03
        constexpr std::uintptr_t WalkToPoint = 0x17C; // Resolved @ 0x7FF672FD594D | Sig: F2 0F 10 87 7C 01 00 00 F2 0F 11 86 7C 01 00 00 F2 0F 10 8F 84 01 00 00
    }

    namespace InputObject {
        constexpr std::uintptr_t MousePosition = 0xEC; // Resolved @ 0x7FF67329ADC0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
    }

    namespace Instance {
        constexpr std::uintptr_t AttributeContainer = 0x48; // Resolved @ 0x7FF672CDAA80 | Sig: 48 8B 41 48 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t AttributeList = 0x18; // Resolved @ 0x7FF672A3A1A0 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t AttributeToNext = 0x58; // Resolved @ 0x7FF67368CA70 | Sig: 48 8B 41 58 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t AttributeToValue = 0x18; // Resolved @ 0x7FF672A3A1A0 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ChildrenEnd = 0x8; // Resolved @ 0x7FF672969810 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ChildrenStart = 0x78; // Resolved @ 0x7FF672C76B10 | Sig: 48 8B 41 78 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t ClassDescriptor = 0x18; // Resolved @ 0x7FF672A3A1A0 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t ClassName = 0x8; // Resolved @ 0x7FF672969810 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Name = 0xB0; // Resolved @ 0x7FF672979EE0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 83 EC 28 0F B6 05 35
        constexpr std::uintptr_t Parent = 0x70; // Resolved @ 0x7FF6729A3540 | Sig: 48 8B 41 70 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 83
    }

    namespace Lighting {
        constexpr std::uintptr_t Ambient = 0xE0; // Resolved @ 0x7FF673333730 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t Atmosphere = 0x1F0; // Resolved @ 0x7FF672914F63 | Sig: C6 85 F0 01 00 00 00 C6 85 18 02 00 00 00 C6 85 20 02 00 00 00 48 8D B5
        constexpr std::uintptr_t Brightness = 0x128; // Resolved @ 0x7FF673910091 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0D 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t ClockTime = 0x1C0; // Resolved @ 0x7FF672A0B1E2 | Sig: 25 C0 01 00 00 45 8D 77 04 83 F8 40 74 76 85 DB 0F 85 3E 01 00 00 48 85
        constexpr std::uintptr_t ColorShift_Bottom = 0xEC; // Resolved @ 0x7FF67329ADC0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t ColorShift_Top = 0xF8; // Resolved @ 0x7FF672C84D10 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t EnvironmentDiffuseScale = 0x12C; // Resolved @ 0x7FF673159A60 | Sig: F3 0F 10 81 2C 01 00 00 C3 CC CC CC CC CC CC CC 8B 81 30 01 00 00 C3 CC
        constexpr std::uintptr_t EnvironmentSpecularScale = 0x130; // Resolved @ 0x7FF6730F8FB0 | Sig: F3 0F 10 81 30 01 00 00 C3 CC CC CC CC CC CC CC 40 53 48 83 EC 20 80 3D
        constexpr std::uintptr_t ExposureCompensation = 0x134; // Resolved @ 0x7FF6731599E0 | Sig: 0F B6 81 34 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 35 01 00 00 C3
        constexpr std::uintptr_t FogColor = 0x104; // Resolved @ 0x7FF67367E680 | Sig: F3 0F 10 81 04 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 08 01 00 00
        constexpr std::uintptr_t FogEnd = 0x13C; // Resolved @ 0x7FF6731D3084 | Sig: 48 89 86 ? ? ? ? 89 9E 40 01 00 00 4C 89 BE ? ? ? ? 4C 89 BE ?
        constexpr std::uintptr_t FogStart = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t OutdoorAmbient = 0x110; // Resolved @ 0x7FF672C84D20 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t ShadowSoftness = 0x148; // Resolved @ 0x7FF6739100AD | Sig: 48 8B 81 ? ? ? ? C3 33 C0 C3 CC CC CC CC CC CC CC CC 83 FA 1E 75 08
        constexpr std::uintptr_t Sky = 0x1E0; // Resolved @ 0x7FF67290B132 | Sig: 48 8D 8D ? ? ? ? FF 15 B1 72 4B 05 80 3D A2 BB 41 07 00 74 13 48 8B
    }

    namespace LightingParameters {
        constexpr std::uintptr_t GeographicLatitude = 0x198; // Resolved @ 0x7FF673562E60 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 4C 8B 81 ? ? ? ? 33
        constexpr std::uintptr_t LightColor = 0x164; // Resolved @ 0x7FF67463C8F0 | Sig: 0F B6 81 64 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 7D 01 00 00 C3
        constexpr std::uintptr_t LightDirection = 0x170; // Resolved @ 0x7FF67463CE60 | Sig: 0F B6 81 70 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 72 01 00 00 C3
        constexpr std::uintptr_t SkyAmbient = 0x158; // Resolved @ 0x7FF673910067 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 0A 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t SkyAmbient2 = 0x19C; // Resolved @ 0x7FF672F8A9F0 | Sig: F3 0F 10 81 9C 01 00 00 C3 CC CC CC CC CC CC CC 8B 41 08 F2 0F 10 01 F2
        constexpr std::uintptr_t Source = 0x17C; // Resolved @ 0x7FF672FD594D | Sig: F2 0F 10 87 7C 01 00 00 F2 0F 11 86 7C 01 00 00 F2 0F 10 8F 84 01 00 00
        constexpr std::uintptr_t TrueMoonPosition = 0x18C; // Resolved @ 0x7FF67463CBF0 | Sig: 0F B6 81 8C 01 00 00 C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 83
        constexpr std::uintptr_t TrueSunPosition = 0x180; // Resolved @ 0x7FF67463C960 | Sig: 0F B6 81 80 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 81 01 00 00 C3
    }

    namespace LocalScript {
        constexpr std::uintptr_t Bytecode = 0x1A8; // Resolved @ 0x7FF673910005 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 03 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF67391002F | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 06 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace MaterialColors {
        constexpr std::uintptr_t Asphalt = 0x30; // Resolved @ 0x7FF672F3E100 | Sig: 48 8B 41 30 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Basalt = 0x27; // Resolved @ 0x7FF67509F6E0 | Sig: 0F B6 41 27 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 33 C0
        constexpr std::uintptr_t Brick = 0xF; // Unresolved in this version
        constexpr std::uintptr_t Cobblestone = 0x33; // Resolved @ 0x7FF6742769A0 | Sig: 0F B6 41 33 C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Concrete = 0xC; // Resolved @ 0x7FF672F88CB0 | Sig: F3 0F 10 41 0C C3 CC CC CC CC CC CC CC CC CC CC F2 0F 10 41 08 48 8B C2
        constexpr std::uintptr_t CrackedLava = 0x2D; // Resolved @ 0x7FF67509F950 | Sig: 0F B6 41 2D C3 CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 33 C0
        constexpr std::uintptr_t Glacier = 0x1B; // Resolved @ 0x7FF67482E2E0 | Sig: 0F B6 41 1B C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 05 F6 6C A0 05 C3
        constexpr std::uintptr_t Grass = 0x6; // Resolved @ 0x7FF6733AB900 | Sig: 0F B6 41 06 C3 CC CC CC CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t Ground = 0x2A; // Unresolved in this version
        constexpr std::uintptr_t Ice = 0x36; // Unresolved in this version
        constexpr std::uintptr_t LeafyGrass = 0x39; // Resolved @ 0x7FF674E1A9A0 | Sig: 0F B6 41 39 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8B C4 48 89 58 10 4C
        constexpr std::uintptr_t Limestone = 0x3F; // Unresolved in this version
        constexpr std::uintptr_t Mud = 0x24; // Resolved @ 0x7FF672E53370 | Sig: F3 0F 10 41 24 C3 CC CC CC CC CC CC CC CC CC CC 48 8B C4 55 41 54 41 56
        constexpr std::uintptr_t Pavement = 0x42; // Unresolved in this version
        constexpr std::uintptr_t Rock = 0x18; // Resolved @ 0x7FF672A3A1A0 | Sig: 48 8B 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t Salt = 0x3C; // Resolved @ 0x7FF6731C1670 | Sig: F3 0F 10 41 3C C3 CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t Sand = 0x12; // Resolved @ 0x7FF6733BE260 | Sig: 0F B6 41 12 C3 CC CC CC CC CC CC CC CC CC CC CC 88 51 13 C3 CC CC CC CC
        constexpr std::uintptr_t Sandstone = 0x21; // Resolved @ 0x7FF673965A60 | Sig: 0F B6 41 21 C3 CC CC CC CC CC CC CC CC CC CC CC F3 0F 10 41 30 C3 CC CC
        constexpr std::uintptr_t Slate = 0x9; // Resolved @ 0x7FF6736627D0 | Sig: 0F B6 41 09 C3 CC CC CC CC CC CC CC CC CC CC CC 8B 81 C8 00 00 00 C3 CC
        constexpr std::uintptr_t Snow = 0x1E; // Unresolved in this version
        constexpr std::uintptr_t WoodPlanks = 0x15; // Resolved @ 0x7FF6730F8860 | Sig: 0F B6 41 15 C3 CC CC CC CC CC CC CC CC CC CC CC 33 C0 48 89 02 89 42 08
    }

    namespace MeshPart {
        constexpr std::uintptr_t MeshId = 0x2F8; // Resolved @ 0x7FF6747B81C2 | Sig: 48 8B 81 ? ? ? ? 48 89 02 48 8B 81 ? ? ? ? 48 89 42 08 48 8B C2
        constexpr std::uintptr_t TextureId = 0x328; // Resolved @ 0x7FF6747B8180 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 05 69 E7 75 05 4C
    }

    namespace ModuleScript {
        constexpr std::uintptr_t Bytecode = 0x150; // Resolved @ 0x7FF672F894A0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC F3 0F 10 41 20 C3 CC CC
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF67391002F | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 06 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace MouseService {
        constexpr std::uintptr_t InputObject = 0x118; // Resolved @ 0x7FF673910059 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 09 75 08 48 8B 81 ? ? ? ? C3 41 83
    }

    namespace Player {
        constexpr std::uintptr_t AccountAge = 0x34C; // Unresolved in this version
        constexpr std::uintptr_t Character = 0x3C8; // Resolved @ 0x7FF67291453E | Sig: 48 C7 83 C8 03 00 00 0F 00 00 00 40 88 BB B0 03 00 00 48 89 BB ? ? ?
        constexpr std::uintptr_t DisplayName = 0x150; // Resolved @ 0x7FF672F894A0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC F3 0F 10 41 20 C3 CC CC
        constexpr std::uintptr_t HealthDisplayDistance = 0x378; // Resolved @ 0x7FF672A58AA2 | Sig: 48 C7 85 78 03 00 00 0F 00 00 00 C6 85 60 03 00 00 00 48 8D 15 ? ? ?
        constexpr std::uintptr_t LocaleId = 0x720; // Resolved @ 0x7FF6729783BF | Sig: C7 85 20 07 00 00 68 00 00 00 0F 11 85 B0 04 00 00 48 89 85 ? ? ? ?
        constexpr std::uintptr_t NameDisplayDistance = 0x388; // Resolved @ 0x7FF672D26066 | Sig: 48 89 9D ? ? ? ? 48 8B 9D ? ? ? ? 48 89 B5 ? ? ? ? 48 85 DB
        constexpr std::uintptr_t Team = 0x2D0; // Resolved @ 0x7FF6747B70E0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t TeamColor = 0x394; // Resolved @ 0x7FF6731B0B38 | Sig: 41 0F B6 86 94 03 00 00 88 85 94 03 00 00 41 0F B6 86 95 03 00 00 88 85
        constexpr std::uintptr_t UserId = 0x2F8; // Resolved @ 0x7FF6747B81C2 | Sig: 48 8B 81 ? ? ? ? 48 89 02 48 8B 81 ? ? ? ? 48 89 42 08 48 8B C2
    }

    namespace Players {
        constexpr std::uintptr_t LocalPlayer = 0x138; // Resolved @ 0x7FF6738A90C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 83 EC 28 48 81 C1 C8
    }

    namespace Primitive {
        constexpr std::uintptr_t AssemblyAngularVelocity = 0x104; // Resolved @ 0x7FF67367E680 | Sig: F3 0F 10 81 04 01 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 08 01 00 00
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8; // Resolved @ 0x7FF672C84D10 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B 81 ? ? ? ? C3
        constexpr std::uintptr_t CFrame = 0xC8; // Resolved @ 0x7FF673910013 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 04 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Material = 0x236; // Resolved @ 0x7FF672FD53CB | Sig: 0F B6 85 36 02 00 00 41 88 86 3E 02 00 00 49 8B C6 48 ? ? ? ? 48 ?
        constexpr std::uintptr_t Orientation = 0xC8; // Resolved @ 0x7FF673910013 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 04 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Position = 0xEC; // Resolved @ 0x7FF67329ADC0 | Sig: F3 0F 10 81 EC 00 00 00 C3 CC CC CC CC CC CC CC 8B 81 F0 00 00 00 C3 CC
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6; // Resolved @ 0x7FF674826D40 | Sig: 0F B6 82 B6 01 00 00 A8 01 75 07 A8 08 74 03 B0 01 C3 32 C0 C3 CC CC CC
        constexpr std::uintptr_t Rotation = 0xC8; // Resolved @ 0x7FF673910013 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 04 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Size = 0x1B8; // Resolved @ 0x7FF67297834E | Sig: 4C 8B 85 ? ? ? ? 49 83 F8 08 72 16 49 FF C0 48 8B 95 ? ? ? ? 48
    }

    namespace PrimitiveFlags {
        constexpr std::uintptr_t Anchored = 0x2; // Resolved @ 0x7FF67538F730 | Sig: 0F B7 41 02 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 83
        constexpr std::uintptr_t CanCollide = 0x8; // Resolved @ 0x7FF672969810 | Sig: 48 8B 41 08 C3 CC CC CC CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
        constexpr std::uintptr_t CanQuery = 0x20; // Resolved @ 0x7FF672A910B0 | Sig: 48 8B 41 20 C3 CC CC CC CC CC CC CC CC CC CC CC 48 8D 41 20 C3 CC CC CC
        constexpr std::uintptr_t CanTouch = 0x10; // Resolved @ 0x7FF672943DE0 | Sig: 48 8B 41 10 C3 CC CC CC CC CC CC CC CC CC CC CC 0F B6 01 83 FA 05 77 17
    }

    namespace ProximityPrompt {
        constexpr std::uintptr_t ActionText = 0xC8; // Resolved @ 0x7FF673910013 | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 04 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t Enabled = 0x14E; // Resolved @ 0x7FF67464BFD6 | Sig: 80 BE 4E 01 00 00 00 0F 85 6B 01 00 00 83 F9 15 0F 84 62 01 00 00 48 8B
        constexpr std::uintptr_t HoldDuration = 0x138; // Resolved @ 0x7FF6738A90C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 83 EC 28 48 81 C1 C8
        constexpr std::uintptr_t KeyboardKeyCode = 0x13C; // Resolved @ 0x7FF6731D3084 | Sig: 48 89 86 ? ? ? ? 89 9E 40 01 00 00 4C 89 BE ? ? ? ? 4C 89 BE ?
        constexpr std::uintptr_t MaxActivationDistance = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t ObjectText = 0xE8; // Resolved @ 0x7FF67391002F | Sig: 48 8B 81 ? ? ? ? C3 41 83 F8 06 75 08 48 8B 81 ? ? ? ? C3 41 83
        constexpr std::uintptr_t RequiresLineOfSight = 0x14F; // Unresolved in this version
    }

    namespace RenderView {
        constexpr std::uintptr_t LightingValid = 0x170; // Resolved @ 0x7FF67463CE60 | Sig: 0F B6 81 70 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 72 01 00 00 C3
        constexpr std::uintptr_t SkyboxValid = 0x28D; // Unresolved in this version
    }

    namespace Seat {
        constexpr std::uintptr_t Occupant = 0x218; // Resolved @ 0x7FF672D3EBC0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
    }

    namespace Sky {
        constexpr std::uintptr_t MoonAngularSize = 0x25C; // Resolved @ 0x7FF673EE7740 | Sig: F3 0F 10 81 5C 02 00 00 F3 0F 59 C6 F3 44 0F 58 C8 41 0F 28 C3 41 0F 14
        constexpr std::uintptr_t MoonTextureId = 0xE0; // Resolved @ 0x7FF673333730 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 41 B8 01 00 00 00 48 8D
        constexpr std::uintptr_t SkyboxBk = 0x110; // Resolved @ 0x7FF672C84D20 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t SkyboxDn = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t SkyboxFt = 0x170; // Resolved @ 0x7FF67463CE60 | Sig: 0F B6 81 70 01 00 00 C3 CC CC CC CC CC CC CC CC 0F B6 81 72 01 00 00 C3
        constexpr std::uintptr_t SkyboxLf = 0x1A0; // Resolved @ 0x7FF674CB4BA0 | Sig: F3 0F 10 81 A0 01 00 00 C3 CC CC CC CC CC CC CC 44 8B 81 E8 00 00 00 41
        constexpr std::uintptr_t SkyboxOrientation = 0x250; // Resolved @ 0x7FF67291CD91 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t SkyboxRt = 0x1D0; // Resolved @ 0x7FF67291CCF9 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t SkyboxUp = 0x200; // Resolved @ 0x7FF675C2A575 | Sig: 48 8B 81 ? ? ? ? C3 33 C0 C3 48 8B 81 ? ? ? ? 0F B6 80 B6 01 00
        constexpr std::uintptr_t StarCount = 0x260; // Resolved @ 0x7FF67291AE22 | Sig: 48 8B B9 ? ? ? ? 48 85 FF 74 3A BE FF FF FF FF 8B C6 F0 0F C1 47 08
        constexpr std::uintptr_t SunAngularSize = 0x264; // Resolved @ 0x7FF673169018 | Sig: C6 86 64 02 00 00 00 48 83 7E 08 00 0F 85 A6 01 00 00 48 8B 47 08 F2 0F
        constexpr std::uintptr_t SunTextureId = 0x230; // Resolved @ 0x7FF673A527D0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
    }

    namespace SpecialMesh {
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF672C84D20 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Offset = 0xD0; // Resolved @ 0x7FF672C84D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
        constexpr std::uintptr_t Scale = 0xDC; // Resolved @ 0x7FF67329AD80 | Sig: F3 0F 10 81 DC 00 00 00 C3 CC CC CC CC CC CC CC F3 0F 10 81 E0 00 00 00
        constexpr std::uintptr_t TextureId = 0x140; // Resolved @ 0x7FF674EE4FE0 | Sig: 0F B6 81 40 01 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
    }

    namespace Team {
        constexpr std::uintptr_t TeamColor = 0xD0; // Resolved @ 0x7FF672C84D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace Terrain {
        constexpr std::uintptr_t GrassLength = 0x1F0; // Resolved @ 0x7FF672914F63 | Sig: C6 85 F0 01 00 00 00 C6 85 18 02 00 00 00 C6 85 20 02 00 00 00 48 8D B5
        constexpr std::uintptr_t MaterialColors = 0x4A0; // Resolved @ 0x7FF673A31991 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83 B9 CC 01 00 00 00 74 08
        constexpr std::uintptr_t WaterColor = 0x1E0; // Resolved @ 0x7FF67290B132 | Sig: 48 8D 8D ? ? ? ? FF 15 B1 72 4B 05 80 3D A2 BB 41 07 00 74 13 48 8B
        constexpr std::uintptr_t WaterReflectance = 0x1F8; // Resolved @ 0x7FF6732C8530 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 63 81 D8 01 00 00 48
        constexpr std::uintptr_t WaterTransparency = 0x1FC; // Resolved @ 0x7FF672FD5A3D | Sig: 8B 87 FC 01 00 00 89 43 0C 8B 87 00 02 00 00 89 43 10 0F 10 87 08 02 00
        constexpr std::uintptr_t WaterWaveSize = 0x200; // Resolved @ 0x7FF675C2A575 | Sig: 48 8B 81 ? ? ? ? C3 33 C0 C3 48 8B 81 ? ? ? ? 0F B6 80 B6 01 00
        constexpr std::uintptr_t WaterWaveSpeed = 0x204; // Resolved @ 0x7FF67495B5A0 | Sig: F3 0F 10 81 04 02 00 00 C3 CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
    }

    namespace TextButton {
        constexpr std::uintptr_t AutoButtonColor = 0x9C4; // Unresolved in this version
        constexpr std::uintptr_t ContentText = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t Font = 0x10E8; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xEC8; // Resolved @ 0x7FF6733F111B | Sig: 48 81 C1 C8 0E 00 00 48 8D 89 ? ? ? ? 0F 10 00 0F 10 48 10 48 8D 80
        constexpr std::uintptr_t LocalizedText = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t MaxVisibleGraphemes = 0x10F4; // Unresolved in this version
        constexpr std::uintptr_t Modal = 0x9C5; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xFC6; // Unresolved in this version
        constexpr std::uintptr_t Selected = 0x9C6; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t TextColor3 = 0x10D0; // Unresolved in this version
        constexpr std::uintptr_t TextDirection = 0xF68; // Resolved @ 0x7FF675889038 | Sig: 00 EB 55 48 85 F6 74 50 48 8B 7A 08 48 85 FF 74 3A BB FF FF FF FF 8B C3
        constexpr std::uintptr_t TextScaled = 0xDB9; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0x10FC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0x10DC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0x1100; // Resolved @ 0x7FF672A5884A | Sig: 0F 29 B4 24 00 11 00 00 48 8B F9 48 C7 C6 FF FF FF FF 45 33 E4 48 8B 05
        constexpr std::uintptr_t TextTransparency = 0x1104; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0x1108; // Unresolved in this version
        constexpr std::uintptr_t TextWrapped = 0xFC0; // Resolved @ 0x7FF672360840 | Sig: 4F 8D 94 09 ? ? ? ? 4A 8D 6C 4D C0 4D 29 D3 41 BA 00 00 00 00 4D 0F
        constexpr std::uintptr_t TextXAlignment = 0x110C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xF10; // Resolved @ 0x7FF674EE22C7 | Sig: 48 8D A9 ? ? ? ? 49 89 7B 20 48 3B EA 74 16 48 83 7A 18 10 4C 8B 42
    }

    namespace TextLabel {
        constexpr std::uintptr_t ContentText = 0xB50; // Resolved @ 0x7FF672A59DDE | Sig: 48 8D 8D ? ? ? ? E8 ? ? ? ? 90 4C 8B C0 BA 7D 00 00 00 48 8B CF
        constexpr std::uintptr_t Font = 0xE68; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xC48; // Unresolved in this version
        constexpr std::uintptr_t LocalizedText = 0xB50; // Resolved @ 0x7FF672A59DDE | Sig: 48 8D 8D ? ? ? ? E8 ? ? ? ? 90 4C 8B C0 BA 7D 00 00 00 48 8B CF
        constexpr std::uintptr_t MaxVisibleGraphemes = 0xE74; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xD46; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xB50; // Resolved @ 0x7FF672A59DDE | Sig: 48 8D 8D ? ? ? ? E8 ? ? ? ? 90 4C 8B C0 BA 7D 00 00 00 48 8B CF
        constexpr std::uintptr_t TextColor3 = 0xE50; // Resolved @ 0x7FF6750307E2 | Sig: 0F B6 B6 50 0E 00 00 E9 ? ? ? ? 48 8D 96 ? ? ? ? 48 8D 4D 97 E8
        constexpr std::uintptr_t TextDirection = 0xCE8; // Resolved @ 0x7FF672FB1257 | Sig: 48 8D 8B ? ? ? ? 48 ? ? ? ? E8 ? ? ? ? 48 8B 40 08 48 85 C0
        constexpr std::uintptr_t TextScaled = 0xB39; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0xE7C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0xE5C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0xE80; // Unresolved in this version
        constexpr std::uintptr_t TextTransparency = 0xE84; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0xE88; // Unresolved in this version
        constexpr std::uintptr_t TextWrapped = 0xD40; // Resolved @ 0x7FF6738B032B | Sig: 48 89 85 ? ? ? ? 44 89 B5 48 0D 00 00 C7 85 4C 0D 00 00 20 00 00 00
        constexpr std::uintptr_t TextXAlignment = 0xE8C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xC90; // Unresolved in this version
    }

    namespace Tool {
        constexpr std::uintptr_t CanBeDropped = 0x4C8; // Resolved @ 0x7FF67291464D | Sig: C7 83 C8 04 00 00 02 00 00 00 48 89 BB ? ? ? ? 48 89 BB ? ? ? ?
        constexpr std::uintptr_t Enabled = 0x4C9; // Unresolved in this version
        constexpr std::uintptr_t Grip = 0x498; // Resolved @ 0x7FF67291461F | Sig: 48 89 BB ? ? ? ? 40 88 BB A0 04 00 00 48 89 BB ? ? ? ? 48 89 BB
        constexpr std::uintptr_t GripForward = 0x4B0; // Resolved @ 0x7FF673A2E971 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83 B9 CC 01 00 00 00 74 08
        constexpr std::uintptr_t GripPos = 0x4BC; // Unresolved in this version
        constexpr std::uintptr_t GripRight = 0x498; // Resolved @ 0x7FF67291461F | Sig: 48 89 BB ? ? ? ? 40 88 BB A0 04 00 00 48 89 BB ? ? ? ? 48 89 BB
        constexpr std::uintptr_t GripUp = 0x4A4; // Unresolved in this version
        constexpr std::uintptr_t ManualActivationOnly = 0x4CA; // Unresolved in this version
        constexpr std::uintptr_t RequiresHandle = 0x4CB; // Unresolved in this version
        constexpr std::uintptr_t Tooltip = 0x478; // Resolved @ 0x7FF6729145FF | Sig: 48 89 BB ? ? ? ? 48 89 BB ? ? ? ? 48 C7 83 90 04 00 00 0F 00 00
    }

    namespace Value {
        constexpr std::uintptr_t Value = 0xD0; // Resolved @ 0x7FF672C84D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 57 48 81
    }

    namespace VehicleSeat {
        constexpr std::uintptr_t MaxSpeed = 0x230; // Resolved @ 0x7FF673A527D0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 55 56 57
        constexpr std::uintptr_t Occupant = 0x210; // Resolved @ 0x7FF67291CD45 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t SteerFloat = 0x238; // Resolved @ 0x7FF674E80D50 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC F3 0F 10 81 B0 02 00 00
        constexpr std::uintptr_t ThrottleFloat = 0x240; // Resolved @ 0x7FF674E811C0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 48 8B
        constexpr std::uintptr_t Torque = 0x244; // Resolved @ 0x7FF672B09F6E | Sig: F3 0F 10 88 44 02 00 00 0F 28 C1 F3 0F 11 4B 04 0F 54 05 CB B1 31 05 F3
        constexpr std::uintptr_t TurnSpeed = 0x248; // Resolved @ 0x7FF674A55520 | Sig: 0F B6 81 48 02 00 00 C3 CC CC CC CC CC CC CC CC 40 53 48 83 EC 20 0F B7
    }

    namespace VisualEngine {
        constexpr std::uintptr_t Dimensions = 0xAB0; // Resolved @ 0x7FF672FB10E0 | Sig: F3 0F 10 81 B0 0A 00 00 C3 CC CC CC CC CC CC CC 48 83 EC 28 48 8B 81 ?
        constexpr std::uintptr_t FakeDataModel = 0xA90; // Resolved @ 0x7FF673818240 | Sig: 48 8B 81 ? ? ? ? 48 89 02 8B 81 88 0A 00 00 89 42 08 8B 81 8C 0A 00
        constexpr std::uintptr_t Pointer = 0x8158B80; // Resolved @ 0x7FF67A458B80 | Sig: N/A (Global Data)
        constexpr std::uintptr_t RenderView = 0xBB0; // Resolved @ 0x7FF672A58B33 | Sig: 48 8D 8D ? ? ? ? E8 ? ? ? ? 90 4C 8B C0 BA 09 00 00 00 48 8B CF
        constexpr std::uintptr_t ViewMatrix = 0x150; // Resolved @ 0x7FF672F894A0 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC F3 0F 10 41 20 C3 CC CC
    }

    namespace Workspace {
        constexpr std::uintptr_t CurrentCamera = 0x4B0; // Resolved @ 0x7FF673A2E971 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC 83 B9 CC 01 00 00 00 74 08
        constexpr std::uintptr_t ReadOnlyGravity = 0x9F0; // Resolved @ 0x7FF6738180C0 | Sig: 48 8B 81 ? ? ? ? 48 89 02 8B 81 EC 09 00 00 89 42 08 0F B6 81 E0 09
        constexpr std::uintptr_t World = 0x408; // Resolved @ 0x7FF672D17B10 | Sig: 48 8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 ? ? ? ? 48 ? ?
    }

    namespace World {
        constexpr std::uintptr_t Gravity = 0x210; // Resolved @ 0x7FF67291CD45 | Sig: 48 8D 97 ? ? ? ? 48 8D 8B ? ? ? ? 48 3B CA 74 13 48 83 7A 18 10
        constexpr std::uintptr_t Primitives = 0x280; // Resolved @ 0x7FF672D265D6 | Sig: 48 89 95 ? ? ? ? 43 8B 04 3C 39 05 B1 16 02 07 0F 8F DA 0B 00 00 EB
        constexpr std::uintptr_t WorldSteps = 0x678; // Resolved @ 0x7FF672D26D5D | Sig: 48 8D 8D ? ? ? ? E8 ? ? ? ? 83 4C 24 20 08 33 DB 48 89 9D ? ?
    }
}
