#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> notlar;
    int secim;
    std::string notText;
    int delIndex;

    do {
        std::cout << "1. Not Ekle\n2. Notları Listele\n3. Not Sil\n4. Çıkış\nSeçiminiz: ";
        std::cin >> secim;
        std::cin.ignore();

        switch (secim) {
            case 1:
                std::cout << "Notu girin: ";
            std::getline(std::cin, notText);
            notlar.push_back(notText);
            std::cout << "\n";
            break;
            case 2:
                std::cout << "\nNotlar:\n";
            for (size_t i = 0; i < notlar.size(); ++i) {
                std::cout << i + 1 << ". " << notlar[i] << std::endl;
            }
            std::cout << "\n";
            break;
            case 3:
                std::cout << "Silmek istediğiniz notun numarasını girin: ";
            std::cin >> delIndex;
            std::cin.ignore();
            if (delIndex > 0 && delIndex <= notlar.size()) {
                notlar.erase(notlar.begin() + delIndex - 1);
                std::cout << "Not silindi.\n";
            } else {
                std::cout << "Geçersiz numara.\n";
            }
            std::cout << "\n";
            break;
            case 4:
                std::cout << "Çıkış yapılıyor...\n";
            break;
            default:
                std::cout << "Geçersiz seçenek.\n";
            std::cout << "\n";
            break;
        }
    } while (secim != 4);

    return 0;
}