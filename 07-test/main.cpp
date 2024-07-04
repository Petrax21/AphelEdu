#include <chrono>
#include <iostream>

int main() {

    int day;

    std::cout << "Birinci Değeri Girin: ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Pazartei";
        break;
        case 2:
            std::cout << "Salı";
        break;
        case 3:
            std::cout << "Çarşamba";
        break;
        case 4:
            std::cout << "Perşembe";
        break;
        case 5:
            std::cout << "Cuma";
        break;
        case 6:
            std::cout << "Cumatesi";
        break;
        case 7:
            std::cout << "Pazar";
        break;
        default:
            std::cout << "Hata";

    }
}