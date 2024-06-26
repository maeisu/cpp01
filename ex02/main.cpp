#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN.";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl; 

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    std::string newStr = "hi this is brain.";
    stringREF = newStr;

    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl; 

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}

// #include <stdlib.h>
// __attribute__((destructor)) static void destructor(void) {
//     system("leaks -q HITHISISBRAIN");
// }