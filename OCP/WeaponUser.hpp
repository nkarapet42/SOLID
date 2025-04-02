#ifndef WEAPONUSER_HPP
#define WEAPONUSER_HPP

#include "Weapon.hpp"
#include <iostream>

class WeaponUser {
private:
    Weapon* weapon;
    
public:
    WeaponUser(Weapon* weapon);
    ~WeaponUser();

    void performAttack();

    void displayWeaponStats() const;
    void setWeapon(Weapon* newWeapon);
};

#endif
