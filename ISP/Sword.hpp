#ifndef SWORD_HPP
# define SWORD_HPP

#include "IMeleeWeapon.hpp"
#include <string>

class Sword : public IMeleeWeapon {
private:
    std::string name;
    int damage;

public:
    Sword(std::string name, int damage);
    void attack() const override;
    void heavyAttack() const override;
};

#endif
