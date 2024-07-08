#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>

int main() {
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";
    if (!std::filesystem::exists(folderPath)) {
        std::filesystem::create_directory(folderPath);
    } else {
        std::filesystem::remove_all(folderPath);
        std::filesystem::create_directory(folderPath);
    }

    std::string filePath = folderPath + "/mustafa.txt";
    std::ofstream file(filePath);

    std::string name, surname, phone;

    std::cout << "Adınızı girin: ";
    std::cin >> name;

    std::cout << "Soyadınızı girin: ";
    std::cin >> surname;

    std::cout << "Telefon numaranızı girin: ";
    std::cin >> phone;

    file << "Adı: " << name << std::endl;
    file << "Soyadı: " << surname << std::endl;
    file << "Telefon Numarası: " << phone << std::endl;

    file.close();

    return 0;
}
