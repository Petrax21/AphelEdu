#include <iostream>
using namespace std;

int Health{150};
int hasar{};

void TakeDamage(int Damage){
    cout << Damage << " Hasar" << " Verildi";
    Health -= Damage;
    cout << " - Health: " << Health << '\n';
}

int main(){

    TakeDamage(20);
    TakeDamage(50);
    TakeDamage(70);

    int Number{1};
    do {
        cout << Number << ", ";
        ++Number;
    } while (Number <= 10);
}