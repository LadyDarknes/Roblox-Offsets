// Roblox Offsets
// Generated for: version-5cf2272675e145f5

#pragma once
#include <cstdint>
#include <cstddef>

namespace offsets
{
    namespace Instance
    {
        constexpr std::uintptr_t Parent = 0x70;
        constexpr std::uintptr_t ChildrenStart = 0x78;
        constexpr std::uintptr_t ChildrenEnd = 0x8;
        constexpr std::uintptr_t ClassDescriptor = 0x18;
        constexpr std::uintptr_t ClassName = 0x8;
        constexpr std::uintptr_t Name = 0xB0;
        constexpr std::uintptr_t HC = 0x18;
    }

    namespace Players
    {
        constexpr std::uintptr_t LocalPlayer = 0x138;
    }

    namespace Player
    {
        constexpr std::uintptr_t Character = 0x3C8;
        constexpr std::uintptr_t Team = 0x2D0;
        constexpr std::uintptr_t TeamColor = 0xD0;
        constexpr std::uintptr_t UserId = 0x2F8;
        constexpr std::uintptr_t DisplayName = 0x150;
    }

    namespace DataModel
    {
        constexpr std::uintptr_t Workspace = 0x178;
        constexpr std::uintptr_t PlaceId = 0x1A0;
        constexpr std::uintptr_t GameLoaded = 0x670;
    }

    namespace Humanoid
    {
        constexpr std::uintptr_t Health = 0x194;
        constexpr std::uintptr_t MaxHealth = 0x1B4;
        constexpr std::uintptr_t WalkSpeed = 0x1DC;
        constexpr std::uintptr_t WalkSpeedCheck = 0x3C4;
        constexpr std::uintptr_t JumpPower = 0x1B0;
        constexpr std::uintptr_t RigType = 0x1CC;
        constexpr std::uintptr_t HumanoidState = 0x8A0; // Unresolved in this version
        constexpr std::uintptr_t HumanoidStateId = 0x20; // Unresolved in this version
    }

    namespace BasePart
    {
        constexpr std::uintptr_t Primitive = 0x148;
    }

    namespace Primitive
    {
        constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8;
        constexpr std::uintptr_t CFrame = 0xC8;
        constexpr std::uintptr_t Position = 0xEC;
        constexpr std::uintptr_t Size = 0x1B0;
        constexpr std::uintptr_t PrimitiveFlags = 0x1B6; // Unresolved in this version
    }

    namespace PrimitiveFlags
    {
        constexpr std::uintptr_t CanCollide = 0x8;
    }

    // =============================
    //          Camera
    // =============================
    namespace Camera
    {
        constexpr std::uintptr_t Rotation = 0x128;
        constexpr std::uintptr_t Position = 0x11C;
        constexpr std::uintptr_t FieldOfView = 0x160;
        constexpr std::uintptr_t ViewportSize = 0x2E8;
    }

    namespace VisualEngine
    {
        constexpr std::uintptr_t Pointer = 0x0; // Resolved at runtime via TaskScheduler
        constexpr std::uintptr_t Dimensions = 0xAB0;
        constexpr std::uintptr_t ViewMatrix = 0x510; // Unresolved in this version
    }

    namespace Workspace
    {
        constexpr std::uintptr_t World = 0x408;
        constexpr std::uintptr_t ReadOnlyGravity = 0x418; // Guessed
    }

    namespace FakeDataModel
    {
        constexpr std::uintptr_t Pointer = 0x0; // Resolved at runtime via TaskScheduler
        constexpr std::uintptr_t RealDataModel = 0x1D8;
    }

    namespace Misc
    {
        constexpr std::uintptr_t HC = 0x18;
        constexpr std::uintptr_t FakeDataModelToDataModel = 0x1D8;
        constexpr std::uintptr_t ModelInstance = 0x3C8;
        constexpr std::uintptr_t ClassDescriptorToClassName = 0x8;
        constexpr std::uintptr_t Spelling = 0x0;
    }
}
