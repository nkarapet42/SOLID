#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
protected:
    std::string name;
    int damage;

public:
    Weapon(std::string name, int damage);
    virtual ~Weapon() {}

    virtual void attack() const = 0;
};

#endif
