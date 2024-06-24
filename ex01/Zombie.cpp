#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "";
}
Zombie::Zombie(const std::string& name)
{
	this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) {
    this->name = name;
}

Zombie::~Zombie(){}