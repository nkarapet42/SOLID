#include "Sword.hpp"

Sword::Sword(std::string name, int damage)
    : name(name), damage(damage) {}

void Sword::attack() const {
    std::cout << name << " swings, causing " << damage << " damage!" << std::endl;
}

void Sword::heavyAttack() const {
    std::cout << name << " performs a heavy swing, causing " << damage * 2 << " damage!" << std::endl;
}