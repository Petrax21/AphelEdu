#include <iostream>

int main() {
    float number1, number2;
    char operation;

    std::cout << "Birinci Değeri Girin: ";
    std::cin >> number1;

    std::cout << "İkinci Değeri Girin: ";
    std::cin >> number2;

    std::cout << "İşlemi Girin (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            std::cout << "Cevap: " << number1 + number2 << std::endl;
        break;
        case '-':
            std::cout << "Cevap: " << number1 - number2 << std::endl;
        break;
        case '*':
            std::cout << "Cevap: " << number1 * number2 << std::endl;
        break;
        case '/':
            if (number2 != 0)
                std::cout << "Cevap: " << number1 / number2 << std::endl;
            else
                std::cout << "Bölme işlemi için ikinci sayı 0 olamaz." << std::endl;
        break;
        default:
            std::cout << "Geçersiz işlem." << std::endl;
    }

    return 0;
}
