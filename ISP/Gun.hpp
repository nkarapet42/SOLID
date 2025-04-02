#ifndef GUN_HPP
# define GUN_HPP

#include "IRangedWeapon.hpp"
#include "IReloadable.hpp"
#include <string>

class Gun : public IRangedWeapon, public IReloadable {
private:
    std::string name;
    int         damage;
    mutable int ammo;

public:
    Gun(std::string name, int damage, int ammo);
    void attack() const override;
    void aim() const override;
    void reload(int bullets) override;
};

#endif
