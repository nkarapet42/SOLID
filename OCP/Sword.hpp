#ifndef SWORD_HPP
#define SWORD_HPP

#include "Weapon.hpp"

class Sword : public Weapon {
public:
    Sword();
    std::string attack() const override;
};

#endif
