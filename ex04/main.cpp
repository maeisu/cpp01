#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void ft_replace(std::string fileName, std::string s1, std::string s2) {
    std::ifstream ifs(fileName);
    std::string str;
    std::stringstream ss;
    unsigned long findIndex = 0;

    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return;
    }
    std::ofstream ofs("./" + fileName + ".replace");
    if (ofs.fail()) {
        std::cerr << "Failed to create output file." << std::endl;
        return ;
    }
    ss << ifs.rdbuf();
    str = ss.str();
    ifs.close();
    if (s1 == "") {
        ofs << str;
        ofs.flush();
        ofs.close();
        return;
    }
    while ((findIndex = str.find(s1, findIndex)) != std::string::npos) {
        if (0 <= findIndex && findIndex < str.length()) {
            str.erase(findIndex, s1.length());
            str.insert(findIndex, s2);
        }
        findIndex += s2.length();
    }
    ofs << str;
    ofs.flush();
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