#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"

class Bow : public Weapon {
public:
    Bow();
    std::string attack() const override;
};

#endif
