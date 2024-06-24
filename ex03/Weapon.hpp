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
        Weapon(const std::string&);
        const std::string &getType( void ) const;
        void setType(const std::string&);
};

#endif