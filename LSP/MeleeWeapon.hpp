#ifndef MELEEWEAPON_HPP
# define MELEEWEAPON_HPP

#include "Weapon.hpp"

class MeleeWeapon : public Weapon {
    private:
        int range;
    
    public:
        MeleeWeapon(std::string name, int damage, int range);
    
        void attack() const override;
};

#endif