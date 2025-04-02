#include "Inventory.hpp"

void Inventory::addWeapon(Weapon* weapon) {
    weapons.push_back(weapon);
}

void Inventory::attackWithAll() const {
    for (Weapon* weapon : weapons) {
        weapon->attack();
    }
}

Inventory::~Inventory() {
    for (Weapon* weapon : weapons) {
        delete weapon;
    }
}