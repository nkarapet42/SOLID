#include "MeleeWeapon.hpp"

MeleeWeapon::MeleeWeapon(std::string name, int damage, int range) : Weapon(name, damage), range(range) {}

void MeleeWeapon::attack() const {
    std::cout << "Swinging " << name << " causing " << damage 
              << " damage in range of " << range << " meters!" << std::endl;
}