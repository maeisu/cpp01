#include <iostream>
#include <string>
#include <fstream>

int main () {
    std::string fileName = "test";
    std::string s1 = "a";
    std::string s2 = "q";
    std::ifstream ifs(fileName);
    std::ofstream ofs("./" + fileName + ".replace");
    std::string str;
    unsigned long findIndex = 0;

    if (ifs.fail()) {
        std::cerr << "Failed to open file." << std::endl;
        return -1;
    }
    while (std::getline(ifs, str)) {
        std::cout << "#" << str << std::endl;
        findIndex = 0;
        while (0 <= findIndex && findIndex < str.length()) {
            findIndex = str.find(s1);
            if (0 <= findIndex && findIndex < str.length()) {
                str.erase(findIndex, s1.length());
                str.insert(findIndex, s2);
            }
        }
        std::cout << "!" << str << std::endl;
        ofs << str << std::endl;
    }
    return 0;
}