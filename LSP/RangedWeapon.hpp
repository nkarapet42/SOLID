#ifndef RANGEDWEAPON_HPP
# define RANGEDWEAPON_HPP

#include "Weapon.hpp"

class RangedWeapon : public Weapon {
private:
    int ammo;
    int maxRange;

public:
    RangedWeapon(std::string name, int damage, int ammo, int maxRange);
    void attack() const override;
    void reload(int bullets);
};

#endif