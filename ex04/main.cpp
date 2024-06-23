#include <iostream>
#include <string>
#include <fstream>

void ft_replace(std::string fileName, std::string s1, std::string s2) {
    std::ifstream ifs(fileName);
    std::ofstream ofs("./" + fileName + ".replace");
    std::string str;
    unsigned long findIndex = 0;

    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return;
    }
    if (ofs.fail()) {
        std::cerr << "Failed to create output file." << std::endl;
        return ;
    }
    while (std::getline(ifs, str)) {
        findIndex = 0;
        while ((findIndex = str.find(s1, findIndex)) != std::string::npos) {
            if (0 <= findIndex && findIndex < str.length()) {
                str.erase(findIndex, s1.length());
                str.insert(findIndex, s2);
            }
            findIndex++;
        }
        ofs << str << std::endl;
    }
    ifs.close();
    ofs.close();
}

int main (int argc, char **argv) {
    if (argc != 4) {
        return 1;
    }
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    ft_replace(fileName, s1, s2);
    
    return 0;
}

#include <stdlib.h>
__attribute__((destructor)) static void destructor(void) {
    system("leaks -q SedIsForLosers");
}