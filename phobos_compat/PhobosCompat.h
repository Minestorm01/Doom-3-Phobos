#ifndef PHOBOS_COMPAT_H
#define PHOBOS_COMPAT_H

// Stub compatibility layer that would integrate Phobos mod code
// into the RBDoom3BFG engine. This file is a placeholder and does not
// compile on its own. In a full engine source tree, it should be
// included and built as part of the game logic.

namespace phobos {

// Initialize compatibility layer. Should be called when fs_game is
// set to "tfphobos" and binary.conf indicates a legacy module.
void Init();

// Shutdown the compatibility layer.
void Shutdown();

} // namespace phobos

#endif // PHOBOS_COMPAT_H
