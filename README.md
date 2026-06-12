<div align="center">

# Roblox Offsets & Patterns

![Arch](https://img.shields.io/badge/Arch-x64%20PE-lightgrey?style=flat-square)
![Tool](https://img.shields.io/badge/Tool-IDA%20Pro%209.3-orange?style=flat-square)
![Status](https://img.shields.io/badge/Status-Up%20to%20date-brightgreen?style=flat-square)

star for support ⭐

A clean, auto-generated C++ header file containing resolved Roblox instance offsets, global pointers, and their corresponding byte signatures for reverse engineering.

---

### 📂 File Structure
* `offsets.hpp` - The main C++ header containing all offsets and patterns.
* `.gitignore` - Kept minimal to only track the header and documentation.

### 🚀 Usage
Simply include `offsets.hpp` in your C++ project:
```cpp
#include "offsets.hpp"

// Example
uintptr_t local_player = *reinterpret_cast<uintptr_t*>(players_service + Roblox::Players::LocalPlayer);
```

</div>
