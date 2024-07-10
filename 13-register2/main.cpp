#include <iostream>
#include <filesystem>
#include <fstream>
#include <iomanip>

int main() {
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";
    if (!std::filesystem::exists(folderPath)) {
        std::filesystem::create_directory(folderPath);
    }

    std::string filePath = folderPath + "/mustafa.txt";
    std::ofstream file(filePath, std::ios::app); //eski kayıtlar silinmesin diye

    std::string name, surname, phone, age;

    std::cout << "Adınızı girin (en fazla 20 karakter): ";
    std::cin >> name;
    if (name.length() > 20) name = name.substr(0, 20);

    std::cout << "Soyadınızı girin (en fazla 25 karakter): ";
    std::cin >> surname;
    if (surname.length() > 25) surname = surname.substr(0, 25);

    std::cout << "Telefon numaranızı girin (en fazla 14 karakter): ";
    std::cin >> phone;
    if (phone.length() > 14) phone = phone.substr(0, 14);

    std::cout << "Yaşınızı girin (en fazla 3 karakter): ";
    std::cin >> age;
    if (age.length() > 3) age = age.substr(0, 3);


    file << std::left << std::setw(20) << name
         << std::left << std::setw(25) << surname
         << std::left << std::setw(14) << phone
         << std::left << std::setw(3) << age << std::endl;

    file.close();

    return 0;
}
