#pragma once
#include <cstdint>

// Auto-generated Roblox Offsets
// Generated from scan_all_getters.py results
// Offset values confirmed if getter pattern exists in .text

namespace Roblox {
    namespace Instance {
        constexpr std::uintptr_t AttributeContainer = 0x48;
        constexpr std::uintptr_t AttributeList = 0x18;
        constexpr std::uintptr_t AttributeToNext = 0x58;
        constexpr std::uintptr_t AttributeToValue = 0x18;
        constexpr std::uintptr_t ChildrenEnd = 0x8;
        constexpr std::uintptr_t ChildrenStart = 0x78;
        constexpr std::uintptr_t ClassDescriptor = 0x18;
        constexpr std::uintptr_t ClassName = 0x8;
        constexpr std::uintptr_t Name = 0xB0;
        constexpr std::uintptr_t Parent = 0x70;
    }

    namespace DataModel {
        constexpr std::uintptr_t CreatorId = 0x190;
        constexpr std::uintptr_t GameId = 0x198;
        constexpr std::uintptr_t GameLoaded = 0x670;
        constexpr std::uintptr_t JobId = 0x138;
        constexpr std::uintptr_t PlaceId = 0x1A0;
        constexpr std::uintptr_t ServerIP = 0x658;
        constexpr std::uintptr_t Workspace = 0x178;
    }

    namespace Workspace {
        constexpr std::uintptr_t CurrentCamera = 0x4B0;
        constexpr std::uintptr_t ReadOnlyGravity = 0x9F0;
        constexpr std::uintptr_t World = 0x408;
    }

    namespace World {
        constexpr std::uintptr_t Gravity = 0x210;
        constexpr std::uintptr_t Primitives = 0x280;
        constexpr std::uintptr_t WorldSteps = 0x678;
    }

    namespace VisualEngine {
        constexpr std::uintptr_t Dimensions = 0xAB0;
        constexpr std::uintptr_t FakeDataModel = 0xA90;
        constexpr std::uintptr_t Pointer = 0x8158B80;
        constexpr std::uintptr_t RenderView = 0xBB0;
        constexpr std::uintptr_t ViewMatrix = 0x150;
    }

    namespace FakeDataModel {
        constexpr std::uintptr_t Pointer = 0x7A39AD8;
        constexpr std::uintptr_t RealDataModel = 0x1D8;
    }

    namespace RenderView {
        constexpr std::uintptr_t LightingValid = 0x170;
        constexpr std::uintptr_t SkyboxValid = 0x28D; // STALE - no getter found
    }

    namespace Camera {
        constexpr std::uintptr_t CFrame = 0xF8;
        constexpr std::uintptr_t FieldOfView = 0x160;
        constexpr std::uintptr_t Position = 0x11C;
        constexpr std::uintptr_t Rotation = 0xF8;
        constexpr std::uintptr_t ViewportInt16 = 0x2AC;
        constexpr std::uintptr_t ViewportSize = 0x2E8;
    }

    namespace BasePart {
        constexpr std::uintptr_t CastShadow = 0xF5;
        constexpr std::uintptr_t Color3 = 0x194;
        constexpr std::uintptr_t Locked = 0xF6;
        constexpr std::uintptr_t Massless = 0xF7;
        constexpr std::uintptr_t Primitive = 0x148;
        constexpr std::uintptr_t Reflectance = 0xEC;
        constexpr std::uintptr_t Shape = 0x1B1; // STALE - no getter found at this offset
        constexpr std::uintptr_t Transparency = 0xF0;
    }

    namespace Primitive {
        constexpr std::uintptr_t AssemblyAngularVelocity = 0x104;
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8;
        constexpr std::uintptr_t CFrame = 0xC8;
        constexpr std::uintptr_t Material = 0x236; // STALE - no getter found at this offset
        constexpr std::uintptr_t Orientation = 0xC8;
        constexpr std::uintptr_t Position = 0xEC;
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6;
        constexpr std::uintptr_t Rotation = 0xC8;
        constexpr std::uintptr_t Size = 0x1B8;
    }

    namespace PrimitiveFlags {
        constexpr std::uintptr_t Anchored = 0x2;
        constexpr std::uintptr_t CanCollide = 0x8;
        constexpr std::uintptr_t CanQuery = 0x20;
        constexpr std::uintptr_t CanTouch = 0x10;
    }

    namespace GuiBase2D {
        constexpr std::uintptr_t AbsolutePosition = 0x10C;
        constexpr std::uintptr_t AbsoluteRotation = 0x188;
        constexpr std::uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
        constexpr std::uintptr_t Active = 0x5A8;
        constexpr std::uintptr_t AnchorPoint = 0x558;
        constexpr std::uintptr_t AutomaticSize = 0x560;
        constexpr std::uintptr_t BackgroundColor3 = 0x540;
        constexpr std::uintptr_t BackgroundTransparency = 0x564;
        constexpr std::uintptr_t BorderColor3 = 0x54C;
        constexpr std::uintptr_t BorderMode = 0x568;
        constexpr std::uintptr_t BorderSizePixel = 0x56C;
        constexpr std::uintptr_t ClipsDescendants = 0x5A9; // STALE
        constexpr std::uintptr_t GuiState = 0x578;
        constexpr std::uintptr_t Interactable = 0x5AB; // STALE
        constexpr std::uintptr_t LayoutOrder = 0x580;
        constexpr std::uintptr_t Position = 0x510;
        constexpr std::uintptr_t Rotation = 0x188;
        constexpr std::uintptr_t Selectable = 0x5AC;
        constexpr std::uintptr_t SelectionOrder = 0x59C;
        constexpr std::uintptr_t Size = 0x530;
        constexpr std::uintptr_t SizeConstraint = 0x5A0;
        constexpr std::uintptr_t Visible = 0x5AD; // STALE
        constexpr std::uintptr_t ZIndex = 0x5A4;
    }

    namespace TextLabel {
        constexpr std::uintptr_t ContentText = 0xB50;
        constexpr std::uintptr_t Font = 0xE68; // STALE
        constexpr std::uintptr_t LineHeight = 0xC48;
        constexpr std::uintptr_t LocalizedText = 0xB50;
        constexpr std::uintptr_t MaxVisibleGraphemes = 0xE74; // STALE
        constexpr std::uintptr_t RichText = 0xD46; // STALE
        constexpr std::uintptr_t Text = 0xB50;
        constexpr std::uintptr_t TextColor3 = 0xE50; // STALE
        constexpr std::uintptr_t TextDirection = 0xCE8; // STALE
        constexpr std::uintptr_t TextScaled = 0xB39; // STALE
        constexpr std::uintptr_t TextSize = 0xE7C; // STALE
        constexpr std::uintptr_t TextStrokeColor3 = 0xE5C; // STALE
        constexpr std::uintptr_t TextStrokeTransparency = 0xE80;
        constexpr std::uintptr_t TextTransparency = 0xE84; // STALE
        constexpr std::uintptr_t TextTruncate = 0xE88; // STALE
        constexpr std::uintptr_t TextWrapped = 0xD40;
        constexpr std::uintptr_t TextXAlignment = 0xE8C; // STALE
        constexpr std::uintptr_t TextYAlignment = 0xC90;
    }

    namespace TextButton {
        constexpr std::uintptr_t AutoButtonColor = 0x9C4; // STALE
        constexpr std::uintptr_t ContentText = 0xDD0;
        constexpr std::uintptr_t Font = 0x10E8; // STALE
        constexpr std::uintptr_t LineHeight = 0xEC8; // STALE
        constexpr std::uintptr_t LocalizedText = 0xDD0;
        constexpr std::uintptr_t MaxVisibleGraphemes = 0x10F4; // STALE
        constexpr std::uintptr_t Modal = 0x9C5; // STALE
        constexpr std::uintptr_t RichText = 0xFC6;
        constexpr std::uintptr_t Selected = 0x9C6; // STALE
        constexpr std::uintptr_t Text = 0xDD0;
        constexpr std::uintptr_t TextColor3 = 0x10D0; // STALE
        constexpr std::uintptr_t TextDirection = 0xF68;
        constexpr std::uintptr_t TextScaled = 0xDB9; // STALE
        constexpr std::uintptr_t TextSize = 0x10FC; // STALE
        constexpr std::uintptr_t TextStrokeColor3 = 0x10DC; // STALE
        constexpr std::uintptr_t TextStrokeTransparency = 0x1100; // STALE
        constexpr std::uintptr_t TextTransparency = 0x1104; // STALE
        constexpr std::uintptr_t TextTruncate = 0x1108;
        constexpr std::uintptr_t TextWrapped = 0xFC0;
        constexpr std::uintptr_t TextXAlignment = 0x110C; // STALE
        constexpr std::uintptr_t TextYAlignment = 0xF10; // STALE
    }

    namespace Tool {
        constexpr std::uintptr_t CanBeDropped = 0x4C8;
        constexpr std::uintptr_t Enabled = 0x4C9; // STALE
        constexpr std::uintptr_t Grip = 0x498;
        constexpr std::uintptr_t GripForward = 0x4B0;
        constexpr std::uintptr_t GripPos = 0x4BC; // STALE
        constexpr std::uintptr_t GripRight = 0x498;
        constexpr std::uintptr_t GripUp = 0x4A4;
        constexpr std::uintptr_t ManualActivationOnly = 0x4CA; // STALE
        constexpr std::uintptr_t RequiresHandle = 0x4CB; // STALE
        constexpr std::uintptr_t Tooltip = 0x478;
    }

    namespace Humanoid {
        constexpr std::uintptr_t AutoJumpEnabled = 0x1E0;
        constexpr std::uintptr_t AutoRotate = 0x1E1; // STALE
        constexpr std::uintptr_t AutomaticScalingEnabled = 0x1E2; // STALE
        constexpr std::uintptr_t BreakJointsOnDeath = 0x1E3; // STALE
        constexpr std::uintptr_t CameraOffset = 0x140;
        constexpr std::uintptr_t DisplayDistanceType = 0x18C;
        constexpr std::uintptr_t EvaluateStateMachine = 0x1E4; // STALE
        constexpr std::uintptr_t Health = 0x194;
        constexpr std::uintptr_t HealthDisplayDistance = 0x198;
        constexpr std::uintptr_t HealthDisplayType = 0x19C;
        constexpr std::uintptr_t HipHeight = 0x1A0;
        constexpr std::uintptr_t JumpHeight = 0x1AC;
        constexpr std::uintptr_t JumpPower = 0x1B0;
        constexpr std::uintptr_t MaxHealth = 0x1B4;
        constexpr std::uintptr_t MaxSlopeAngle = 0x1B8;
        constexpr std::uintptr_t NameDisplayDistance = 0x1BC;
        constexpr std::uintptr_t NameOcclusion = 0x1C0;
        constexpr std::uintptr_t RequiresNeck = 0x1E9;
        constexpr std::uintptr_t RigType = 0x1CC;
        constexpr std::uintptr_t SeatPart = 0x120;
        constexpr std::uintptr_t Sit = 0x1EA; // STALE
        constexpr std::uintptr_t TargetPoint = 0x164;
        constexpr std::uintptr_t UseJumpPower = 0x1EC;
        constexpr std::uintptr_t WalkSpeed = 0x1DC;
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4; // STALE
        constexpr std::uintptr_t WalkToPoint = 0x17C;
    }

    namespace ProximityPrompt {
        constexpr std::uintptr_t ActionText = 0xC8;
        constexpr std::uintptr_t Enabled = 0x14E; // STALE
        constexpr std::uintptr_t HoldDuration = 0x138;
        constexpr std::uintptr_t KeyboardKeyCode = 0x13C;
        constexpr std::uintptr_t MaxActivationDistance = 0x140;
        constexpr std::uintptr_t ObjectText = 0xE8;
        constexpr std::uintptr_t RequiresLineOfSight = 0x14F; // STALE
    }

    namespace Player {
        constexpr std::uintptr_t AccountAge = 0x34C;
        constexpr std::uintptr_t Character = 0x3C8;
        constexpr std::uintptr_t DisplayName = 0x150;
        constexpr std::uintptr_t HealthDisplayDistance = 0x378;
        constexpr std::uintptr_t LocaleId = 0x720;
        constexpr std::uintptr_t NameDisplayDistance = 0x388;
        constexpr std::uintptr_t Team = 0x2D0;
        constexpr std::uintptr_t TeamColor = 0x394; // STALE
        constexpr std::uintptr_t UserId = 0x2F8;
    }

    namespace Players {
        constexpr std::uintptr_t LocalPlayer = 0x138;
    }

    namespace InputObject {
        constexpr std::uintptr_t MousePosition = 0xEC;
    }

    namespace MouseService {
        constexpr std::uintptr_t InputObject = 0x118;
    }

    namespace Value {
        constexpr std::uintptr_t Value = 0xD0;
    }

    namespace ByteCode {
        constexpr std::uintptr_t Pointer = 0x10;
        constexpr std::uintptr_t Size = 0x20;
    }

    namespace LocalScript {
        constexpr std::uintptr_t Bytecode = 0x1A8;
        constexpr std::uintptr_t Hash = 0xE8;
    }

    namespace ModuleScript {
        constexpr std::uintptr_t Bytecode = 0x150;
        constexpr std::uintptr_t Hash = 0xE8;
    }

    namespace CharacterMesh {
        constexpr std::uintptr_t BaseTextureId = 0xE0;
        constexpr std::uintptr_t BodyPart = 0x160;
        constexpr std::uintptr_t MeshId = 0x110;
        constexpr std::uintptr_t OverlayTextureId = 0x140;
    }

    namespace MeshPart {
        constexpr std::uintptr_t MeshId = 0x2F8;
        constexpr std::uintptr_t TextureId = 0x328;
    }

    namespace SpecialMesh {
        constexpr std::uintptr_t MeshId = 0x110;
        constexpr std::uintptr_t Offset = 0xD0;
        constexpr std::uintptr_t Scale = 0xDC;
        constexpr std::uintptr_t TextureId = 0x140;
    }

    namespace Lighting {
        constexpr std::uintptr_t Ambient = 0xE0;
        constexpr std::uintptr_t Atmosphere = 0x1F0;
        constexpr std::uintptr_t Brightness = 0x128;
        constexpr std::uintptr_t ClockTime = 0x1C0;
        constexpr std::uintptr_t ColorShift_Bottom = 0xEC;
        constexpr std::uintptr_t ColorShift_Top = 0xF8;
        constexpr std::uintptr_t EnvironmentDiffuseScale = 0x12C;
        constexpr std::uintptr_t EnvironmentSpecularScale = 0x130;
        constexpr std::uintptr_t ExposureCompensation = 0x134;
        constexpr std::uintptr_t FogColor = 0x104;
        constexpr std::uintptr_t FogEnd = 0x13C;
        constexpr std::uintptr_t FogStart = 0x140;
        constexpr std::uintptr_t OutdoorAmbient = 0x110;
        constexpr std::uintptr_t ShadowSoftness = 0x148;
        constexpr std::uintptr_t Sky = 0x1E0;
    }

    namespace Atmosphere {
        constexpr std::uintptr_t Color = 0xD0;
        constexpr std::uintptr_t Decay = 0xDC;
        constexpr std::uintptr_t Density = 0xE8;
        constexpr std::uintptr_t Glare = 0xEC;
        constexpr std::uintptr_t Haze = 0xF0;
        constexpr std::uintptr_t Offset = 0xF4;
    }

    namespace BloomEffect {
        constexpr std::uintptr_t Intensity = 0xD0;
        constexpr std::uintptr_t Size = 0xD4;
        constexpr std::uintptr_t Threshold = 0xD8;
    }

    namespace Team {
        constexpr std::uintptr_t TeamColor = 0xD0;
    }

    namespace Seat {
        constexpr std::uintptr_t Occupant = 0x218;
    }

    namespace VehicleSeat {
        constexpr std::uintptr_t MaxSpeed = 0x230;
        constexpr std::uintptr_t Occupant = 0x210;
        constexpr std::uintptr_t SteerFloat = 0x238;
        constexpr std::uintptr_t ThrottleFloat = 0x240;
        constexpr std::uintptr_t Torque = 0x244;
        constexpr std::uintptr_t TurnSpeed = 0x248;
    }

    namespace Sky {
        constexpr std::uintptr_t MoonAngularSize = 0x25C;
        constexpr std::uintptr_t MoonTextureId = 0xE0;
        constexpr std::uintptr_t SkyboxBk = 0x110;
        constexpr std::uintptr_t SkyboxDn = 0x140;
        constexpr std::uintptr_t SkyboxFt = 0x170;
        constexpr std::uintptr_t SkyboxLf = 0x1A0;
        constexpr std::uintptr_t SkyboxOrientation = 0x250;
        constexpr std::uintptr_t SkyboxRt = 0x1D0;
        constexpr std::uintptr_t SkyboxUp = 0x200;
        constexpr std::uintptr_t StarCount = 0x260;
        constexpr std::uintptr_t SunAngularSize = 0x264;
        constexpr std::uintptr_t SunTextureId = 0x230;
    }

    namespace MaterialColors {
        constexpr std::uintptr_t Asphalt = 0x30;
        constexpr std::uintptr_t Basalt = 0x27; // STALE
        constexpr std::uintptr_t Brick = 0xF; // STALE
        constexpr std::uintptr_t Cobblestone = 0x33;
        constexpr std::uintptr_t Concrete = 0xC;
        constexpr std::uintptr_t CrackedLava = 0x2D; // STALE
        constexpr std::uintptr_t Glacier = 0x1B;
        constexpr std::uintptr_t Grass = 0x6;
        constexpr std::uintptr_t Ground = 0x2A; // STALE
        constexpr std::uintptr_t Ice = 0x36; // STALE
        constexpr std::uintptr_t LeafyGrass = 0x39;
        constexpr std::uintptr_t Limestone = 0x3F; // STALE
        constexpr std::uintptr_t Mud = 0x24;
        constexpr std::uintptr_t Pavement = 0x42; // STALE
        constexpr std::uintptr_t Rock = 0x18;
        constexpr std::uintptr_t Salt = 0x3C;
        constexpr std::uintptr_t Sand = 0x12;
        constexpr std::uintptr_t Sandstone = 0x21;
        constexpr std::uintptr_t Slate = 0x9; // STALE
        constexpr std::uintptr_t Snow = 0x1E; // STALE
        constexpr std::uintptr_t WoodPlanks = 0x15;
    }

    namespace Terrain {
        constexpr std::uintptr_t GrassLength = 0x1F0;
        constexpr std::uintptr_t MaterialColors = 0x4A0;
        constexpr std::uintptr_t WaterColor = 0x1E0;
        constexpr std::uintptr_t WaterReflectance = 0x1F8;
        constexpr std::uintptr_t WaterTransparency = 0x1FC;
        constexpr std::uintptr_t WaterWaveSize = 0x200;
        constexpr std::uintptr_t WaterWaveSpeed = 0x204;
    }

    namespace LightingParameters {
        constexpr std::uintptr_t GeographicLatitude = 0x198;
        constexpr std::uintptr_t LightColor = 0x164;
        constexpr std::uintptr_t LightDirection = 0x170;
        constexpr std::uintptr_t SkyAmbient = 0x158;
        constexpr std::uintptr_t SkyAmbient2 = 0x19C;
        constexpr std::uintptr_t Source = 0x17C;
        constexpr std::uintptr_t TrueMoonPosition = 0x18C;
        constexpr std::uintptr_t TrueSunPosition = 0x180;
    }
}
