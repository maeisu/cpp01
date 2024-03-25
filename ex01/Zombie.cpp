#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "";
}
Zombie::Zombie(std::string name) {
    this->name = name;
} 

void Zombie::announce(void) {
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

std::string Zombie::getName()
{
    return std::string();
}
