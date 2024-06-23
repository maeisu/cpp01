#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}

std::string &Weapon::getType(void) const
{
    return const_cast<std::string&>(type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}