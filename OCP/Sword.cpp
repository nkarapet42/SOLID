#include "Sword.hpp"

Sword::Sword() {
    damage = 50;  
    range = 5;
    type = "Sword";
}

std::string Sword::attack() const {
    return "Swinging the sword!";
}