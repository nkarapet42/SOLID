#include "WeaponUser.hpp"

WeaponUser::WeaponUser(Weapon* weapon) : weapon(weapon) {}

WeaponUser::~WeaponUser() {delete weapon;}

void WeaponUser::performAttack() {
    std::cout << weapon->attack() << std::endl;
}

void WeaponUser::displayWeaponStats() const {
    std::cout << "Weapon Type: " << weapon->getType() << std::endl;
    std::cout << "Weapon Damage: " << weapon->getDamage() << std::endl;
    std::cout << "Weapon Range: " << weapon->getRange() << std::endl;
}

void WeaponUser::setWeapon(Weapon* newWeapon) {
    if (weapon)
        delete weapon;
    weapon = newWeapon;
}