#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}

std::string Weapon::getType(void)
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}