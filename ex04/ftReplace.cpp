#include <iostream>
#include <string>
#include <fstream>

void ftReplace (std::string fileName, std::string s1, std::string s2) {
	if (fileName.length() == 0 || s1.length() == 0 || s2.length() == 0) {
		std::cout << "parameter not enough" << std::endl;
		return;
	}
	std::ofstream newFile;
	std::string newFileName = fileName + ".replace";
	newFile.open(newFileName, std::ios::out);
	newFile.close();
}