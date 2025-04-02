#ifndef IRANGEDWEAPON_HPP
# define IRANGEDWEAPON_HPP

#include "IWeapon.hpp"

class IRangedWeapon : public IWeapon {
    public:
        virtual void aim() const = 0;
};

#endif