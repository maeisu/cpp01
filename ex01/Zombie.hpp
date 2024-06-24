#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        Zombie(const std::string&);
        void announce( void );
        void setName(const std::string&);
};

Zombie* zombieHorde( int N, std::string name );

#endif