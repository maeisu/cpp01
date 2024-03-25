#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::HumanB(Weapon weapon, std::string name)
{
    this->weapon = weapon;
    this->name = name;
}

void HumanB::attack(void)
{
    std::cout << this->name + "attacks with their" + this->weapon.getType() << std::endl;
}
