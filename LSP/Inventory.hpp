#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include <vector>
#include "Weapon.hpp"

class Inventory {
private:
    std::vector<Weapon*> weapons;

public:
    void addWeapon(Weapon* weapon);

    void attackWithAll() const;
    ~Inventory();
};

#endif
