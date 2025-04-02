#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
protected:
    int         damage;
    int         range;
    std::string type;
    
public:
    virtual ~Weapon() {}
    virtual std::string attack() const = 0;

    int getDamage() const;
    int getRange() const;
    std::string getType() const;
};

#endif
