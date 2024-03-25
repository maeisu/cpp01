#ifndef WEAPON.HPP
#define WEAPON.HPP

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string);
        std::string getType( void );
        void setType(std::string);
};

#endif