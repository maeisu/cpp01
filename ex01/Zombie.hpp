#ifndef ZOMBIE.HPP
#define ZOMBIE.HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string);
        void announce( void );
        void setName(std::string);
        std::string getName();
};

Zombie* zombieHorde( int N, std::string name );

#endif