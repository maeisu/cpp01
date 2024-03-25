#ifndef HUMANA.HPP
#define HUMANA.HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanA(Weapon, std::string);
        void attack( void );
};

#endif