#ifndef IMELEEWEAPON_HPP
# define IMELEEWEAPON_HPP

#include "IWeapon.hpp"

class IMeleeWeapon : public IWeapon {
    public:
        virtual void heavyAttack() const = 0;
};   

#endif