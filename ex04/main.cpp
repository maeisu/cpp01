#include <iostream>
#include <string>
#include <fstream>



int main (int argc, char **argv) {
    if (argc != 4) {
        return 1;
    }
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream ifs(fileName);
    std::ofstream ofs("./" + fileName + ".replace");
    std::string str;
    unsigned long findIndex = 0;

    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return -1;
    }
    if (ofs.fail()) {
        std::cerr << "Failed to create output file." << std::endl;
        return -1;
    }
    while (std::getline(ifs, str)) {
        findIndex = 0;
        while (0 <= findIndex && findIndex < str.length()) {
            findIndex = str.find(s1);
            if (0 <= findIndex && findIndex < str.length()) {
                str.erase(findIndex, s1.length());
                str.insert(findIndex, s2);
            }
        }
        ofs << str << std::endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}

#include <stdlib.h>
__attribute__((destructor)) static void destructor(void) {
    system("leaks -q SedIsForLosers");
}