#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::string filePath = "/home/mustafa/Downloads/abc/test12/mustafa.txt";
    std::ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string name, surname, phone, age;

        if (std::getline(iss, name, ';') &&
            std::getline(iss, surname, ';') &&
            std::getline(iss, phone, ';') &&
            std::getline(iss, age, ';'))
            {
            std::cout << "Adı: " << name << std::endl;
            std::cout << "Soyadı: " << surname << std::endl;
            std::cout << "Telefon: " << phone << std::endl;
            std::cout << "Yaş: " << age << std::endl;
            }
    }

    inputFile.close();
    return 0;
}