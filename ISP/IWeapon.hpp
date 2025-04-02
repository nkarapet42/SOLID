// WeaponInterfaces.hpp
#ifndef WEAPONINTERFACES_HPP
#define WEAPONINTERFACES_HPP

#include <iostream>

class IWeapon {
public:
    virtual ~IWeapon() {}
    virtual void attack() const = 0;
};

#endif
