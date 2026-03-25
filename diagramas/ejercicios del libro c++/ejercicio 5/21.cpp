#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 1; i <= 10; i++) {
        suma += i * i;
    }
    cout << "Suma de cuadrados de 1 a 10 = " << suma << endl;
    return 0;
}
