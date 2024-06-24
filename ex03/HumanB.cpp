#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL)
        std::cout << this->name + "attacks with hand" << std::endl;
    else
        std::cout << this->name + "attacks with their" + this->weapon->getType() << std::endl;
}

HumanB::HumanB(){}
HumanB::~HumanB(){}