#include "Bow.hpp"

Bow::Bow(std::string name, int damage, int ammo)
    : name(name), damage(damage), ammo(ammo) {}

void Bow::attack() const {
    if (ammo > 0) {
        std::cout << name << " shoots, causing " << damage << " damage!" << std::endl;
        ammo--;
    } else {
        std::cout << name << " is out of ammo!" << std::endl;
    }
}

void Bow::aim() const {
    std::cout << name << " is aiming at the target..." << std::endl;
}

void Bow::reload(int bullets) {
    ammo += bullets;
    std::cout << name << " reloaded with " << bullets << " arrows. Ammo now: " << ammo << std::endl;
}