#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanB(std::string);
        HumanB();
        ~HumanB();
        void setWeapon(Weapon);
        void attack( void );
};

#endif