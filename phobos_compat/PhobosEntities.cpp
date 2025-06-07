#include "PhobosEntities.h"
#include <iostream>

namespace phobos {

void Weapon::Spawn() {
    std::cout << "Phobos weapon spawned\n";
}

void Weapon::Think() {
    // Placeholder weapon logic
}

void Monster::Spawn() {
    std::cout << "Phobos monster spawned\n";
}

void Monster::Think() {
    // Placeholder monster AI logic
}

} // namespace phobos
