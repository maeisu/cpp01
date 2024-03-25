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
        HumanA(std::string, Weapon);
        void attack( void );
};

#endif