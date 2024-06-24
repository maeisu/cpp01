#include "Weapon.hpp"

Weapon::Weapon(const std::string& weapon)
{
    this->type = weapon;
}

const std::string &Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}