#include "Gun.hpp"

Gun::Gun(std::string name, int damage, int ammo)
    : name(name), damage(damage), ammo(ammo) {}

void Gun::attack() const {
    if (ammo > 0) {
        std::cout << name << " fires, causing " << damage << " damage!" << std::endl;
        ammo--;
    } else {
        std::cout << name << " is out of bullets!" << std::endl;
    }
}

void Gun::aim() const {
    std::cout << name << " is aiming precisely..." << std::endl;
}

void Gun::reload(int bullets) {
    ammo += bullets;
    std::cout << name << " reloaded with " << bullets << " bullets. Ammo now: " << ammo << std::endl;
}
