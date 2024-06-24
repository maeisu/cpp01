#include "Zombie.hpp"

int main() {
    Zombie* zombie = newZombie("test");
    zombie->announce();
    randomChump("random");
    delete zombie;
}

// #include <stdlib.h>
// __attribute__((destructor)) static void destructor(void) {
//     system("leaks -q BraiiiiiiinnnzzzZ");
// }