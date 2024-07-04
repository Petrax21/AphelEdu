#include <iostream>
using namespace std;


float myFunction(int x, float y);



int main() {
    auto result = myFunction(5, 7);

    cout << "Sonuç:" << result << endl;





    return 0;
}

float myFunction(int x, float y) {
    return x * y;
}