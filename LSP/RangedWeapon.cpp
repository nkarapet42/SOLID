#include "RangedWeapon.hpp"

RangedWeapon::RangedWeapon(std::string name, int damage, int ammo, int maxRange)
        : Weapon(name, damage), ammo(ammo), maxRange(maxRange) {}

void RangedWeapon::attack() const {
    if (ammo > 0) {
        std::cout << "Shooting " << name << " causing " << damage 
                    << " damage from distance up to " << maxRange << " meters!" << std::endl;
    } else {
        std::cout << "Out of ammo for " << name << "!" << std::endl;
    }
}

void RangedWeapon::reload(int bullets) {
    ammo += bullets;
    std::cout << name << " reloaded with " << bullets << " bullets. Ammo now: " << ammo << std::endl;
}