#include "Zombie.hpp"

int main() {
    int N = 2;
    Zombie* zombies = zombieHorde( N, "test");
    for (int i=0; i<N; i++) {
        zombies[i].announce();
    }
    delete[] zombies;
}

// #include <stdlib.h>
// __attribute__((destructor)) static void destructor(void) {
//     system("leaks -q MoarBrainz!");
// }