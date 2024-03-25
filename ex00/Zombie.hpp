#ifndef ZOMBIE.HPP
#define ZOMBIE.HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string);
        void announce( void );
};

#endif