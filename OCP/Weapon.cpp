#include "Weapon.hpp"

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}

std::string Weapon::getType() const {
    return type;
}