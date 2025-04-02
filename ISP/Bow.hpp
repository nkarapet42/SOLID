#ifndef BOW_HPP
# define BOW_HPP

#include "IRangedWeapon.hpp"
#include "IReloadable.hpp"
#include <string>

class Bow : public IRangedWeapon, public IReloadable {
private:
    std::string name;
    int         damage;
    mutable int ammo;

public:
    Bow(std::string name, int damage, int ammo);
    void attack() const override;
    void aim() const override;
    void reload(int bullets) override;
};

#endif