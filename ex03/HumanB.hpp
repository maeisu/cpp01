#ifndef HUMANB.HPP
#define HUMANB.HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanB(std::string);
        HumanB(Weapon, std::string);
        void attack( void );
};

#endif