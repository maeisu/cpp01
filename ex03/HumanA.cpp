#include "HumanA.hpp"

HumanA::HumanA(Weapon weapon, std::string name)
{
    this->weapon = weapon;
    this->name = name;
}

void HumanA::attack(void)
{
    std::cout << this->name + "attacks with their" + this->weapon.getType() << std::endl;
}
