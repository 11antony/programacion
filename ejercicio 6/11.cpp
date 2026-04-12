#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 1; i <= 99; i += 2) {
        suma += i;
    }
    cout << "Suma de enteros impares de 1 a 99 = " << suma << endl;
    return 0;
}
