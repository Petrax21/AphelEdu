#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

struct User {
    std::string name;
    std::string surname;
    std::string phone;
    int age;
};

void writeFixedLengthText(const User& user, const std::string& filename) {
    std::ofstream file(filename, std::ios::app);
    file << std::setw(20) << std::left << user.name.substr(0, 20)
         << std::setw(25) << std::left << user.surname.substr(0, 25)
         << std::setw(14) << std::left << user.phone.substr(0, 14)
         << std::setw(3) << std::setfill('0') << std::right << user.age << std::endl;
    file.close();
}

void writeDelimitedText(const User& user, const std::string& filename) {
    std::ofstream file(filename, std::ios::app);
    file << user.name << ";" << user.surname << ";"
         << user.phone << ";" << std::setw(3) << std::setfill('0') << std::right << user.age << std::endl;
    file.close();
}

void readFixedLengthText(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std::cout << std::setw(20) << std::left << "Adı"
              << std::setw(25) << std::left << "Soyadı"
              << std::setw(14) << std::left << "Telefon"
              << std::setw(3) << std::left << "Yaş" << std::endl;
    while (std::getline(file, line)) {
        if (line.size() >= 62) {
            std::cout << line.substr(0, 20) << " "
                      << line.substr(20, 25) << " "
                      << line.substr(45, 14) << " "
                      << std::stoi(line.substr(59, 3)) << std::endl;
        }
    }
    file.close();
}

void readDelimitedText(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std::cout << std::setw(20) << std::left << "Adı"
              << std::setw(25) << std::left << "Soyadı"
              << std::setw(14) << std::left << "Telefon"
              << std::setw(3) << std::left << "Yaş" << std::endl;
    while (std::getline(file, line)) {
        std::replace(line.begin(), line.end(), ';', ' ');
        std::istringstream iss(line);
        std::string name, surname, phone, age;
        iss >> name >> surname >> phone >> age;
        std::cout << std::setw(20) << std::left << name
                  << std::setw(25) << std::left << surname
                  << std::setw(14) << std::left << phone
                  << std::stoi(age) << std::endl;
    }
    file.close();
}

int main() {
    std::vector<User> users;
    std::string filename = "/home/mustafa/Downloads/abc/test12/mustafa.txt";

    while (true) {
        std::cout << "1. Kullanıcı Ekle\n2. Yazdır\nSeçiminiz: ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            User user;
            std::cout << "Adı: ";
            std::cin >> user.name;
            std::cout << "Soyadı: ";
            std::cin >> user.surname;
            std::cout << "Telefon: ";
            std::cin >> user.phone;
            std::cout << "Yaş: ";
            std::cin >> user.age;

            std::cout << "1. Fixed Length Text\n2. Delimited Text\nSeçiminiz: ";
            int writeChoice;
            std::cin >> writeChoice;

            if (writeChoice == 1) {
                writeFixedLengthText(user, filename);
            } else if (writeChoice == 2) {
                writeDelimitedText(user, filename);
            } else {
                std::cout << "Geçersiz seçim." << std::endl;
            }
        } else if (choice == 2) {
            std::cout << "1. Fixed Length Text\n2. Delimited Text\nSeçiminiz: ";
            int readChoice;
            std::cin >> readChoice;

            if (readChoice == 1) {
                readFixedLengthText(filename);
            } else if (readChoice == 2) {
                readDelimitedText(filename);
            } else {
                std::cout << "Geçersiz seçim." << std::endl;
            }
        } else {
            std::cout << "Geçersiz seçim." << std::endl;
        }
    }

    return 0;
}
