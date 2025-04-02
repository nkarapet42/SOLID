#include "Bow.hpp"

Bow::Bow() {
    damage = 30;
    range = 50;
    type = "Bow";
}

std::string Bow::attack() const {
    return "Shooting an arrow!";
}
