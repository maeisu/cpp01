#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanA(std::string, Weapon);
        HumanA();
        ~HumanA();
        void attack( void );
};

#endif