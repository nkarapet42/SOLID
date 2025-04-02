#include <iostream>
#include "Weapon.hpp"
#include "MeleeWeapon.hpp"
#include "RangedWeapon.hpp"
#include "Inventory.hpp"

int main() {
    Inventory inventory;

    Weapon* sword = new MeleeWeapon("Sword", 30, 2);
    Weapon* bow = new RangedWeapon("Bow", 20, 5, 50);
    Weapon* gun = new RangedWeapon("Gun", 40, 10, 100);

    inventory.addWeapon(sword);
    inventory.addWeapon(bow);
    inventory.addWeapon(gun);

    inventory.attackWithAll();

    static_cast<RangedWeapon*>(bow)->reload(5);
    inventory.attackWithAll();

    return 0;
}
