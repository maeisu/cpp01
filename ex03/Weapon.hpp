#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string);
        const std::string &getType( void ) const;
        void setType(std::string);
};

#endif