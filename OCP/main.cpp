#include <iostream>
#include "Sword.hpp"
#include "Bow.hpp"
#include "Gun.hpp"
#include "WeaponUser.hpp"

int main() {
    WeaponUser user(new Sword());
    user.performAttack();
    user.displayWeaponStats();

    user.setWeapon(new Bow());
    user.performAttack();
    user.displayWeaponStats();

    user.setWeapon(new Gun());
    user.performAttack();
    user.displayWeaponStats();

    return 0;
}
