#pragma once
#include <cstdint>

// Target Version: version-76173e47a79145c7

namespace Roblox {
    namespace Atmosphere {
        constexpr std::uintptr_t Color = 0xD0; // Resolved @ 0x7FF672C84D50
        constexpr std::uintptr_t Decay = 0xDC; // Resolved @ 0x7FF67329AD80
        constexpr std::uintptr_t Density = 0xE8; // Resolved @ 0x7FF67391002F
        constexpr std::uintptr_t Glare = 0xEC; // Resolved @ 0x7FF67329ADC0
        constexpr std::uintptr_t Haze = 0xF0; // Resolved @ 0x7FF672C84EA0
        constexpr std::uintptr_t Offset = 0xF4; // Resolved @ 0x7FF67329ADE0
    }

    namespace BasePart {
        constexpr std::uintptr_t CastShadow = 0xF5; // Resolved @ 0x7FF672D17450
        constexpr std::uintptr_t Color3 = 0x194; // Resolved @ 0x7FF672F89A20
        constexpr std::uintptr_t Locked = 0xF6; // Resolved @ 0x7FF6742E57D0
        constexpr std::uintptr_t Massless = 0xF7; // Resolved @ 0x7FF6742E58B0
        constexpr std::uintptr_t Primitive = 0x148; // Resolved @ 0x7FF6739100AD
        constexpr std::uintptr_t Reflectance = 0xEC; // Resolved @ 0x7FF67329ADC0
        constexpr std::uintptr_t Shape = 0x1B1; // Unresolved in this version
        constexpr std::uintptr_t Transparency = 0xF0; // Resolved @ 0x7FF672C84EA0
    }

    namespace BloomEffect {
        constexpr std::uintptr_t Intensity = 0xD0; // Resolved @ 0x7FF672C84D50
        constexpr std::uintptr_t Size = 0xD4; // Resolved @ 0x7FF67329AD40
        constexpr std::uintptr_t Threshold = 0xD8; // Resolved @ 0x7FF673910021
    }

    namespace ByteCode {
        constexpr std::uintptr_t Pointer = 0x10; // Resolved @ 0x7FF672943DE0
        constexpr std::uintptr_t Size = 0x20; // Resolved @ 0x7FF672A910B0
    }

    namespace Camera {
        constexpr std::uintptr_t CFrame = 0xF8; // Resolved @ 0x7FF672C84D10
        constexpr std::uintptr_t FieldOfView = 0x160; // Resolved @ 0x7FF673725800
        constexpr std::uintptr_t Position = 0x11C; // Resolved @ 0x7FF673159A20
        constexpr std::uintptr_t Rotation = 0xF8; // Resolved @ 0x7FF672C84D10
        constexpr std::uintptr_t ViewportInt16 = 0x2AC; // Resolved @ 0x7FF6746A88E0
        constexpr std::uintptr_t ViewportSize = 0x2E8; // Resolved @ 0x7FF672909077
    }

    namespace CharacterMesh {
        constexpr std::uintptr_t BaseTextureId = 0xE0; // Resolved @ 0x7FF673333730
        constexpr std::uintptr_t BodyPart = 0x160; // Resolved @ 0x7FF673725800
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF672C84D20
        constexpr std::uintptr_t OverlayTextureId = 0x140; // Resolved @ 0x7FF674EE4FE0
    }

    namespace DataModel {
        constexpr std::uintptr_t CreatorId = 0x190; // Resolved @ 0x7FF674A296E0
        constexpr std::uintptr_t GameId = 0x198; // Resolved @ 0x7FF673562E60
        constexpr std::uintptr_t GameLoaded = 0x670; // Resolved @ 0x7FF672306F78
        constexpr std::uintptr_t JobId = 0x138; // Resolved @ 0x7FF6738A90C0
        constexpr std::uintptr_t PlaceId = 0x1A0; // Resolved @ 0x7FF674CB4BA0
        constexpr std::uintptr_t ServerIP = 0x658; // Resolved @ 0x7FF673F31579
        constexpr std::uintptr_t Workspace = 0x178; // Resolved @ 0x7FF673561750
    }

    namespace FakeDataModel {
        constexpr std::uintptr_t Pointer = 0x7A39AD8; // Resolved @ 0x7FF679D39AD8
        constexpr std::uintptr_t RealDataModel = 0x1D8; // Resolved @ 0x7FF672A9FB35
    }

    namespace GuiBase2D {
        constexpr std::uintptr_t AbsolutePosition = 0x10C; // Resolved @ 0x7FF673510150
        constexpr std::uintptr_t AbsoluteRotation = 0x188; // Resolved @ 0x7FF673562C40
        constexpr std::uintptr_t AbsoluteSize = 0x118; // Resolved @ 0x7FF673910059
    }

    namespace GuiObject {
        constexpr std::uintptr_t Active = 0x5A8; // Resolved @ 0x7FF674F20B00
        constexpr std::uintptr_t AnchorPoint = 0x558; // Resolved @ 0x7FF67291470D
        constexpr std::uintptr_t AutomaticSize = 0x560; // Resolved @ 0x7FF67297849D
        constexpr std::uintptr_t BackgroundColor3 = 0x540; // Resolved @ 0x7FF673A2E989
        constexpr std::uintptr_t BackgroundTransparency = 0x564; // Unresolved in this version
        constexpr std::uintptr_t BorderColor3 = 0x54C; // Resolved @ 0x7FF674AA704C
        constexpr std::uintptr_t BorderMode = 0x568; // Resolved @ 0x7FF67293D7CE
        constexpr std::uintptr_t BorderSizePixel = 0x56C; // Resolved @ 0x7FF673024646
        constexpr std::uintptr_t ClipsDescendants = 0x5A9; // Unresolved in this version
        constexpr std::uintptr_t GuiState = 0x578; // Resolved @ 0x7FF672914729
        constexpr std::uintptr_t Interactable = 0x5AB; // Unresolved in this version
        constexpr std::uintptr_t LayoutOrder = 0x580; // Resolved @ 0x7FF672306FEC
        constexpr std::uintptr_t Position = 0x510; // Resolved @ 0x7FF672914689
        constexpr std::uintptr_t Rotation = 0x188; // Resolved @ 0x7FF673562C40
        constexpr std::uintptr_t Selectable = 0x5AC; // Unresolved in this version
        constexpr std::uintptr_t SelectionOrder = 0x59C; // Unresolved in this version
        constexpr std::uintptr_t Size = 0x530; // Resolved @ 0x7FF6729146B0
        constexpr std::uintptr_t SizeConstraint = 0x5A0; // Resolved @ 0x7FF673A2E969
        constexpr std::uintptr_t Visible = 0x5AD; // Unresolved in this version
        constexpr std::uintptr_t ZIndex = 0x5A4; // Unresolved in this version
    }

    namespace Humanoid {
        constexpr std::uintptr_t AutoJumpEnabled = 0x1E0; // Resolved @ 0x7FF67290B132
        constexpr std::uintptr_t AutoRotate = 0x1E1; // Unresolved in this version
        constexpr std::uintptr_t AutomaticScalingEnabled = 0x1E2; // Resolved @ 0x7FF67380A0DF
        constexpr std::uintptr_t BreakJointsOnDeath = 0x1E3; // Unresolved in this version
        constexpr std::uintptr_t CameraOffset = 0x140; // Resolved @ 0x7FF674EE4FE0
        constexpr std::uintptr_t DisplayDistanceType = 0x18C; // Resolved @ 0x7FF67463CBF0
        constexpr std::uintptr_t EvaluateStateMachine = 0x1E4; // Resolved @ 0x7FF673F0F6B7
        constexpr std::uintptr_t Health = 0x194; // Resolved @ 0x7FF672F89A20
        constexpr std::uintptr_t HealthDisplayDistance = 0x198; // Resolved @ 0x7FF673562E60
        constexpr std::uintptr_t HealthDisplayType = 0x19C; // Resolved @ 0x7FF672F8A9F0
        constexpr std::uintptr_t HipHeight = 0x1A0; // Resolved @ 0x7FF674CB4BA0
        constexpr std::uintptr_t JumpHeight = 0x1AC; // Resolved @ 0x7FF6753B7F40
        constexpr std::uintptr_t JumpPower = 0x1B0; // Resolved @ 0x7FF672D17551
        constexpr std::uintptr_t MaxHealth = 0x1B4; // Resolved @ 0x7FF672D1B648
        constexpr std::uintptr_t MaxSlopeAngle = 0x1B8; // Resolved @ 0x7FF67297834E
        constexpr std::uintptr_t NameDisplayDistance = 0x1BC; // Resolved @ 0x7FF672D1B70C
        constexpr std::uintptr_t NameOcclusion = 0x1C0; // Resolved @ 0x7FF672A0B1E2
        constexpr std::uintptr_t RequiresNeck = 0x1E9; // Unresolved in this version
        constexpr std::uintptr_t RigType = 0x1CC; // Resolved @ 0x7FF672FFD636
        constexpr std::uintptr_t SeatPart = 0x120; // Resolved @ 0x7FF672B60980
        constexpr std::uintptr_t Sit = 0x1EA; // Unresolved in this version
        constexpr std::uintptr_t TargetPoint = 0x164; // Resolved @ 0x7FF67463C8F0
        constexpr std::uintptr_t UseJumpPower = 0x1EC; // Unresolved in this version
        constexpr std::uintptr_t WalkSpeed = 0x1DC; // Resolved @ 0x7FF672FFD620
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4; // Resolved @ 0x7FF6731B0BF1
        constexpr std::uintptr_t WalkToPoint = 0x17C; // Resolved @ 0x7FF672FD594D
        constexpr std::uintptr_t HumanoidState = 0x830; // Resolved @ 0x7FF67297800D
        constexpr std::uintptr_t HumanoidStateId = 0x0; // Unresolved in this version
    }

    namespace InputObject {
        constexpr std::uintptr_t MousePosition = 0xEC; // Resolved @ 0x7FF67329ADC0
    }

    namespace Instance {
        constexpr std::uintptr_t AttributeContainer = 0x48; // Resolved @ 0x7FF672CDAA80
        constexpr std::uintptr_t AttributeList = 0x18; // Resolved @ 0x7FF672A3A1A0
        constexpr std::uintptr_t AttributeToNext = 0x58; // Resolved @ 0x7FF67368CA70
        constexpr std::uintptr_t AttributeToValue = 0x18; // Resolved @ 0x7FF672A3A1A0
        constexpr std::uintptr_t ChildrenEnd = 0x8; // Resolved @ 0x7FF672969810
        constexpr std::uintptr_t ChildrenStart = 0x78; // Resolved @ 0x7FF672C76B10
        constexpr std::uintptr_t ClassDescriptor = 0x18; // Resolved @ 0x7FF672A3A1A0
        constexpr std::uintptr_t ClassName = 0x8; // Resolved @ 0x7FF672969810
        constexpr std::uintptr_t Name = 0xB0; // Resolved @ 0x7FF672979EE0
        constexpr std::uintptr_t Parent = 0x70; // Resolved @ 0x7FF6729A3540
    }

    namespace Lighting {
        constexpr std::uintptr_t Ambient = 0xE0; // Resolved @ 0x7FF673333730
        constexpr std::uintptr_t Atmosphere = 0x1F0; // Resolved @ 0x7FF672914F63
        constexpr std::uintptr_t Brightness = 0x128; // Resolved @ 0x7FF673910091
        constexpr std::uintptr_t ClockTime = 0x1C0; // Resolved @ 0x7FF672A0B1E2
        constexpr std::uintptr_t ColorShift_Bottom = 0xEC; // Resolved @ 0x7FF67329ADC0
        constexpr std::uintptr_t ColorShift_Top = 0xF8; // Resolved @ 0x7FF672C84D10
        constexpr std::uintptr_t EnvironmentDiffuseScale = 0x12C; // Resolved @ 0x7FF673159A60
        constexpr std::uintptr_t EnvironmentSpecularScale = 0x130; // Resolved @ 0x7FF6730F8FB0
        constexpr std::uintptr_t ExposureCompensation = 0x134; // Resolved @ 0x7FF6731599E0
        constexpr std::uintptr_t FogColor = 0x104; // Resolved @ 0x7FF67367E680
        constexpr std::uintptr_t FogEnd = 0x13C; // Resolved @ 0x7FF6731D3084
        constexpr std::uintptr_t FogStart = 0x140; // Resolved @ 0x7FF674EE4FE0
        constexpr std::uintptr_t OutdoorAmbient = 0x110; // Resolved @ 0x7FF672C84D20
        constexpr std::uintptr_t ShadowSoftness = 0x148; // Resolved @ 0x7FF6739100AD
        constexpr std::uintptr_t Sky = 0x1E0; // Resolved @ 0x7FF67290B132
    }

    namespace LightingParameters {
        constexpr std::uintptr_t GeographicLatitude = 0x198; // Resolved @ 0x7FF673562E60
        constexpr std::uintptr_t LightColor = 0x164; // Resolved @ 0x7FF67463C8F0
        constexpr std::uintptr_t LightDirection = 0x170; // Resolved @ 0x7FF67463CE60
        constexpr std::uintptr_t SkyAmbient = 0x158; // Resolved @ 0x7FF673910067
        constexpr std::uintptr_t SkyAmbient2 = 0x19C; // Resolved @ 0x7FF672F8A9F0
        constexpr std::uintptr_t Source = 0x17C; // Resolved @ 0x7FF672FD594D
        constexpr std::uintptr_t TrueMoonPosition = 0x18C; // Resolved @ 0x7FF67463CBF0
        constexpr std::uintptr_t TrueSunPosition = 0x180; // Resolved @ 0x7FF67463C960
    }

    namespace LocalScript {
        constexpr std::uintptr_t Bytecode = 0x1A8; // Resolved @ 0x7FF673910005
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF67391002F
    }

    namespace MaterialColors {
        constexpr std::uintptr_t Asphalt = 0x30; // Resolved @ 0x7FF672F3E100
        constexpr std::uintptr_t Basalt = 0x27; // Resolved @ 0x7FF67509F6E0
        constexpr std::uintptr_t Brick = 0xF; // Unresolved in this version
        constexpr std::uintptr_t Cobblestone = 0x33; // Resolved @ 0x7FF6742769A0
        constexpr std::uintptr_t Concrete = 0xC; // Resolved @ 0x7FF672F88CB0
        constexpr std::uintptr_t CrackedLava = 0x2D; // Resolved @ 0x7FF67509F950
        constexpr std::uintptr_t Glacier = 0x1B; // Resolved @ 0x7FF67482E2E0
        constexpr std::uintptr_t Grass = 0x6; // Resolved @ 0x7FF6733AB900
        constexpr std::uintptr_t Ground = 0x2A; // Unresolved in this version
        constexpr std::uintptr_t Ice = 0x36; // Unresolved in this version
        constexpr std::uintptr_t LeafyGrass = 0x39; // Resolved @ 0x7FF674E1A9A0
        constexpr std::uintptr_t Limestone = 0x3F; // Unresolved in this version
        constexpr std::uintptr_t Mud = 0x24; // Resolved @ 0x7FF672E53370
        constexpr std::uintptr_t Pavement = 0x42; // Unresolved in this version
        constexpr std::uintptr_t Rock = 0x18; // Resolved @ 0x7FF672A3A1A0
        constexpr std::uintptr_t Salt = 0x3C; // Resolved @ 0x7FF6731C1670
        constexpr std::uintptr_t Sand = 0x12; // Resolved @ 0x7FF6733BE260
        constexpr std::uintptr_t Sandstone = 0x21; // Resolved @ 0x7FF673965A60
        constexpr std::uintptr_t Slate = 0x9; // Resolved @ 0x7FF6736627D0
        constexpr std::uintptr_t Snow = 0x1E; // Unresolved in this version
        constexpr std::uintptr_t WoodPlanks = 0x15; // Resolved @ 0x7FF6730F8860
    }

    namespace MeshPart {
        constexpr std::uintptr_t MeshId = 0x2F8; // Resolved @ 0x7FF6747B81C2
        constexpr std::uintptr_t TextureId = 0x328; // Resolved @ 0x7FF6747B8180
    }

    namespace ModuleScript {
        constexpr std::uintptr_t Bytecode = 0x150; // Resolved @ 0x7FF672F894A0
        constexpr std::uintptr_t Hash = 0xE8; // Resolved @ 0x7FF67391002F
    }

    namespace MouseService {
        constexpr std::uintptr_t InputObject = 0x118; // Resolved @ 0x7FF673910059
    }

    namespace Player {
        constexpr std::uintptr_t AccountAge = 0x34C; // Unresolved in this version
        constexpr std::uintptr_t Character = 0x3C8; // Resolved @ 0x7FF67291453E
        constexpr std::uintptr_t DisplayName = 0x150; // Resolved @ 0x7FF672F894A0
        constexpr std::uintptr_t HealthDisplayDistance = 0x378; // Resolved @ 0x7FF672A58AA2
        constexpr std::uintptr_t LocaleId = 0x720; // Resolved @ 0x7FF6729783BF
        constexpr std::uintptr_t NameDisplayDistance = 0x388; // Resolved @ 0x7FF672D26066
        constexpr std::uintptr_t Team = 0x2D0; // Resolved @ 0x7FF6747B70E0
        constexpr std::uintptr_t TeamColor = 0x394; // Resolved @ 0x7FF6731B0B38
        constexpr std::uintptr_t UserId = 0x2F8; // Resolved @ 0x7FF6747B81C2
    }

    namespace Players {
        constexpr std::uintptr_t LocalPlayer = 0x138; // Resolved @ 0x7FF6738A90C0
    }

    namespace Primitive {
        constexpr std::uintptr_t AssemblyAngularVelocity = 0x104; // Resolved @ 0x7FF67367E680
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8; // Resolved @ 0x7FF672C84D10
        constexpr std::uintptr_t CFrame = 0xC8; // Resolved @ 0x7FF673910013
        constexpr std::uintptr_t Material = 0x236; // Resolved @ 0x7FF672FD53CB
        constexpr std::uintptr_t Orientation = 0xC8; // Resolved @ 0x7FF673910013
        constexpr std::uintptr_t Position = 0xEC; // Resolved @ 0x7FF67329ADC0
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6; // Resolved @ 0x7FF674826D40
        constexpr std::uintptr_t Rotation = 0xC8; // Resolved @ 0x7FF673910013
        constexpr std::uintptr_t Size = 0x1B8; // Resolved @ 0x7FF67297834E
    }

    namespace PrimitiveFlags {
        constexpr std::uintptr_t Anchored = 0x2; // Resolved @ 0x7FF67538F730
        constexpr std::uintptr_t CanCollide = 0x8; // Resolved @ 0x7FF672969810
        constexpr std::uintptr_t CanQuery = 0x20; // Resolved @ 0x7FF672A910B0
        constexpr std::uintptr_t CanTouch = 0x10; // Resolved @ 0x7FF672943DE0
    }

    namespace ProximityPrompt {
        constexpr std::uintptr_t ActionText = 0xC8; // Resolved @ 0x7FF673910013
        constexpr std::uintptr_t Enabled = 0x14E; // Resolved @ 0x7FF67464BFD6
        constexpr std::uintptr_t HoldDuration = 0x138; // Resolved @ 0x7FF6738A90C0
        constexpr std::uintptr_t KeyboardKeyCode = 0x13C; // Resolved @ 0x7FF6731D3084
        constexpr std::uintptr_t MaxActivationDistance = 0x140; // Resolved @ 0x7FF674EE4FE0
        constexpr std::uintptr_t ObjectText = 0xE8; // Resolved @ 0x7FF67391002F
        constexpr std::uintptr_t RequiresLineOfSight = 0x14F; // Unresolved in this version
    }

    namespace RenderView {
        constexpr std::uintptr_t LightingValid = 0x170; // Resolved @ 0x7FF67463CE60
        constexpr std::uintptr_t SkyboxValid = 0x28D; // Unresolved in this version
    }

    namespace Seat {
        constexpr std::uintptr_t Occupant = 0x218; // Resolved @ 0x7FF672D3EBC0
    }

    namespace Sky {
        constexpr std::uintptr_t MoonAngularSize = 0x25C; // Resolved @ 0x7FF673EE7740
        constexpr std::uintptr_t MoonTextureId = 0xE0; // Resolved @ 0x7FF673333730
        constexpr std::uintptr_t SkyboxBk = 0x110; // Resolved @ 0x7FF672C84D20
        constexpr std::uintptr_t SkyboxDn = 0x140; // Resolved @ 0x7FF674EE4FE0
        constexpr std::uintptr_t SkyboxFt = 0x170; // Resolved @ 0x7FF67463CE60
        constexpr std::uintptr_t SkyboxLf = 0x1A0; // Resolved @ 0x7FF674CB4BA0
        constexpr std::uintptr_t SkyboxOrientation = 0x250; // Resolved @ 0x7FF67291CD91
        constexpr std::uintptr_t SkyboxRt = 0x1D0; // Resolved @ 0x7FF67291CCF9
        constexpr std::uintptr_t SkyboxUp = 0x200; // Resolved @ 0x7FF675C2A575
        constexpr std::uintptr_t StarCount = 0x260; // Resolved @ 0x7FF67291AE22
        constexpr std::uintptr_t SunAngularSize = 0x264; // Resolved @ 0x7FF673169018
        constexpr std::uintptr_t SunTextureId = 0x230; // Resolved @ 0x7FF673A527D0
    }

    namespace SpecialMesh {
        constexpr std::uintptr_t MeshId = 0x110; // Resolved @ 0x7FF672C84D20
        constexpr std::uintptr_t Offset = 0xD0; // Resolved @ 0x7FF672C84D50
        constexpr std::uintptr_t Scale = 0xDC; // Resolved @ 0x7FF67329AD80
        constexpr std::uintptr_t TextureId = 0x140; // Resolved @ 0x7FF674EE4FE0
    }

    namespace Team {
        constexpr std::uintptr_t TeamColor = 0xD0; // Resolved @ 0x7FF672C84D50
    }

    namespace Terrain {
        constexpr std::uintptr_t GrassLength = 0x1F0; // Resolved @ 0x7FF672914F63
        constexpr std::uintptr_t MaterialColors = 0x4A0; // Resolved @ 0x7FF673A31991
        constexpr std::uintptr_t WaterColor = 0x1E0; // Resolved @ 0x7FF67290B132
        constexpr std::uintptr_t WaterReflectance = 0x1F8; // Resolved @ 0x7FF6732C8530
        constexpr std::uintptr_t WaterTransparency = 0x1FC; // Resolved @ 0x7FF672FD5A3D
        constexpr std::uintptr_t WaterWaveSize = 0x200; // Resolved @ 0x7FF675C2A575
        constexpr std::uintptr_t WaterWaveSpeed = 0x204; // Resolved @ 0x7FF67495B5A0
    }

    namespace TextButton {
        constexpr std::uintptr_t AutoButtonColor = 0x9C4; // Unresolved in this version
        constexpr std::uintptr_t ContentText = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t Font = 0x10E8; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xEC8; // Resolved @ 0x7FF6733F111B
        constexpr std::uintptr_t LocalizedText = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t MaxVisibleGraphemes = 0x10F4; // Unresolved in this version
        constexpr std::uintptr_t Modal = 0x9C5; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xFC6; // Unresolved in this version
        constexpr std::uintptr_t Selected = 0x9C6; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xDD0; // Unresolved in this version
        constexpr std::uintptr_t TextColor3 = 0x10D0; // Unresolved in this version
        constexpr std::uintptr_t TextDirection = 0xF68; // Unresolved in this version
        constexpr std::uintptr_t TextScaled = 0xDB9; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0x10FC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0x10DC; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0x1100; // Resolved @ 0x7FF672A5884A
        constexpr std::uintptr_t TextTransparency = 0x1104; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0x1108; // Unresolved in this version
        constexpr std::uintptr_t TextWrapped = 0xFC0; // Resolved @ 0x7FF672360840
        constexpr std::uintptr_t TextXAlignment = 0x110C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xF10; // Resolved @ 0x7FF674EE22C7
    }

    namespace TextLabel {
        constexpr std::uintptr_t ContentText = 0xB50; // Resolved @ 0x7FF672A59DDE
        constexpr std::uintptr_t Font = 0xE68; // Unresolved in this version
        constexpr std::uintptr_t LineHeight = 0xC48; // Unresolved in this version
        constexpr std::uintptr_t LocalizedText = 0xB50; // Resolved @ 0x7FF672A59DDE
        constexpr std::uintptr_t MaxVisibleGraphemes = 0xE74; // Unresolved in this version
        constexpr std::uintptr_t RichText = 0xD46; // Unresolved in this version
        constexpr std::uintptr_t Text = 0xB50; // Resolved @ 0x7FF672A59DDE
        constexpr std::uintptr_t TextColor3 = 0xE50; // Resolved @ 0x7FF6750307E2
        constexpr std::uintptr_t TextDirection = 0xCE8; // Resolved @ 0x7FF672FB1257
        constexpr std::uintptr_t TextScaled = 0xB39; // Unresolved in this version
        constexpr std::uintptr_t TextSize = 0xE7C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeColor3 = 0xE5C; // Unresolved in this version
        constexpr std::uintptr_t TextStrokeTransparency = 0xE80; // Unresolved in this version
        constexpr std::uintptr_t TextTransparency = 0xE84; // Unresolved in this version
        constexpr std::uintptr_t TextTruncate = 0xE88; // Unresolved in this version
        constexpr std::uintptr_t TextWrapped = 0xD40; // Resolved @ 0x7FF6738B032B
        constexpr std::uintptr_t TextXAlignment = 0xE8C; // Unresolved in this version
        constexpr std::uintptr_t TextYAlignment = 0xC90; // Unresolved in this version
    }

    namespace Tool {
        constexpr std::uintptr_t CanBeDropped = 0x4C8; // Resolved @ 0x7FF67291464D
        constexpr std::uintptr_t Enabled = 0x4C9; // Unresolved in this version
        constexpr std::uintptr_t Grip = 0x498; // Resolved @ 0x7FF67291461F
        constexpr std::uintptr_t GripForward = 0x4B0; // Resolved @ 0x7FF673A2E971
        constexpr std::uintptr_t GripPos = 0x4BC; // Unresolved in this version
        constexpr std::uintptr_t GripRight = 0x498; // Resolved @ 0x7FF67291461F
        constexpr std::uintptr_t GripUp = 0x4A4; // Unresolved in this version
        constexpr std::uintptr_t ManualActivationOnly = 0x4CA; // Unresolved in this version
        constexpr std::uintptr_t RequiresHandle = 0x4CB; // Unresolved in this version
        constexpr std::uintptr_t Tooltip = 0x478; // Resolved @ 0x7FF6729145FF
    }

    namespace Value {
        constexpr std::uintptr_t Value = 0xD0; // Resolved @ 0x7FF672C84D50
    }

    namespace VehicleSeat {
        constexpr std::uintptr_t MaxSpeed = 0x230; // Resolved @ 0x7FF673A527D0
        constexpr std::uintptr_t Occupant = 0x210; // Resolved @ 0x7FF67291CD45
        constexpr std::uintptr_t SteerFloat = 0x238; // Resolved @ 0x7FF674E80D50
        constexpr std::uintptr_t ThrottleFloat = 0x240; // Resolved @ 0x7FF674E811C0
        constexpr std::uintptr_t Torque = 0x244; // Resolved @ 0x7FF672B09F6E
        constexpr std::uintptr_t TurnSpeed = 0x248; // Resolved @ 0x7FF674A55520
    }

    namespace VisualEngine {
        constexpr std::uintptr_t Dimensions = 0xAB0; // Resolved @ 0x7FF672FB10E0
        constexpr std::uintptr_t FakeDataModel = 0xA90; // Resolved @ 0x7FF673818240
        constexpr std::uintptr_t Pointer = 0x8158B80; // Resolved @ 0x7FF67A458B80
        constexpr std::uintptr_t RenderView = 0xBB0; // Resolved @ 0x7FF672A58B33
        constexpr std::uintptr_t ViewMatrix = 0x150; // Resolved @ 0x7FF672F894A0
    }

    namespace Workspace {
        constexpr std::uintptr_t CurrentCamera = 0x4B0; // Resolved @ 0x7FF673A2E971
        constexpr std::uintptr_t ReadOnlyGravity = 0x9F0; // Resolved @ 0x7FF6738180C0
        constexpr std::uintptr_t World = 0x408; // Resolved @ 0x7FF672D17B10
    }

    namespace World {
        constexpr std::uintptr_t Gravity = 0x210; // Resolved @ 0x7FF67291CD45
        constexpr std::uintptr_t Primitives = 0x280; // Resolved @ 0x7FF672D265D6
        constexpr std::uintptr_t WorldSteps = 0x678; // Resolved @ 0x7FF672D26D5D
    }
}
