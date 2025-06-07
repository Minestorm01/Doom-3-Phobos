#include "PhobosCompat.h"
#include <string>
#include <iostream>

namespace phobos {

static bool g_active = false;

// Example stub to detect the fs_game and binary.conf.
static bool ShouldActivate(const std::string& fs_game) {
    if (fs_game != "tfphobos") {
        return false;
    }
    // In a full engine, binary.conf would be parsed here.
    return true;
}

void Init() {
    g_active = true;
    // Placeholder: hook up custom monsters, weapons, and systems here.
    std::cout << "Phobos compatibility layer initialized\n";
}

void Shutdown() {
    if (!g_active)
        return;
    g_active = false;
    std::cout << "Phobos compatibility layer shutdown\n";
}

} // namespace phobos
