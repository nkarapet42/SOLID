#include "Gun.hpp"

Gun::Gun() {
    damage = 70;
    range = 100;
    type = "Gun";
}

std::string Gun::attack() const {
    return "Firing a bullet!";
}