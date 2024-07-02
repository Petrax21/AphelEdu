#include <iostream>
using namespace std;

int main() {

    string isim = "Kara";
    char cinsiyet = 'E';
    short yas = 30;
    int maas = 5000;
    long long uzunluk = 175;
    float ortalama = 85.5;
    double agirlik = 70.5;
    bool evliMi = true;

    cout << "İsim: " << isim << endl;
    cout << "Cinsiyet: " << cinsiyet << endl;
    cout << "Yaş: " << yas << endl;
    cout << "Maaş: " << maas << " TL" << endl;
    cout << "Uzunluk: " << uzunluk << " cm" << endl;
    cout << "Ağırlık: " << agirlik << " kg" << endl;
    cout << "Ortalama: " << ortalama << endl;
    cout << "Evli mi: " << (evliMi ? "Evet" : "Hayır") << endl;

    return 0;
}
