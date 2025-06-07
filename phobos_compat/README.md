# Phobos Compatibility Layer (Stub)

This directory contains placeholder C++ code intended to illustrate how the
legacy `gamex86.dll` of the Phobos mod could be integrated into the
RBDoom3BFG engine. The files do **not** compile as-is; they merely outline
where hooks and custom entities might be added.

`PhobosCompat.h` / `PhobosCompat.cpp`
: Initializes and shuts down the compatibility layer. The real engine
  should call these when `fs_game` is set to `tfphobos` and `binary.conf`
  indicates a legacy module.

`PhobosEntities.h` / `PhobosEntities.cpp`
: Simplified placeholders for weapons and monsters that would normally be
  implemented via Doom 3 scripts or DLL code.

To use these stubs, copy the folder into an RBDoom3BFG source tree and add
appropriate build rules. Then, in `game/Game_local.cpp`, detect the mod and
call `phobos::Init()` during startup.
