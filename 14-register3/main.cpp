#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
    std::string folderPath = "/home/mustafa/Downloads/abc/test12";
    if (!std::filesystem::exists(folderPath)) {
        std::filesystem::create_directory(folderPath);
    }

    std::string filePath = folderPath + "/mustafa.txt";
    std::ofstream file(filePath, std::ios::app);

    bool continueInput = true;
    while (continueInput) {
        std::string name, surname, phone, age;

        std::cout << "Adınızı girin : ";
        std::cin >> name;

        std::cout << "Soyadınızı girin : ";
        std::cin >> surname;

        std::cout << "Telefon numaranızı girin : ";
        std::cin >> phone;

        std::cout << "Yaşınızı girin : ";
        std::cin >> age;

        file << name << ";" << surname << ";" << phone << ";" << age << std::endl;

        char userResponse;
        std::cout << "Bir kullanıcı daha girmek ister misiniz? (y/n): ";
        std::cin >> userResponse;

        if (userResponse == 'n' || userResponse == 'N') {
            continueInput = false;
        }
    }

    file.close();

    return 0;
}
