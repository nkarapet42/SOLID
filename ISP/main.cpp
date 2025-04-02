#include <iostream>
#include "Sword.hpp"
#include "Bow.hpp"
#include "Gun.hpp"

int main() {
    Sword sword("Excalibur", 30);
    Bow bow("Elven Bow", 20, 5);
    Gun gun("Desert Eagle", 50, 3);

    sword.attack();
    sword.heavyAttack();

    bow.attack();
    bow.aim();
    bow.reload(5);
    bow.attack();

    gun.attack();
    gun.aim();
    gun.reload(10);
    gun.attack();

    return 0;
}
