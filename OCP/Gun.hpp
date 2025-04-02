#ifndef GUN_HPP
#define GUN_HPP

#include "Weapon.hpp"

class Gun : public Weapon {
public:
    Gun();
    std::string attack() const override;
};

#endif
