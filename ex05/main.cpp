#include "Harl.hpp"

int main() {
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("a");
}

#include <stdlib.h>
__attribute__((destructor)) static void destructor(void) {
    system("leaks -q Harl");
}