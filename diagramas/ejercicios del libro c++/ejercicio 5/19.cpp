#include <iostream>
using namespace std;

int main() {
    double suma = 0.0;
    for (int i = 1; i <= 10; i++) {
        suma += 1.0 / i;
    }
    cout << "Suma de la serie 1 + 1/2 + ... + 1/10 = " << suma << endl;
    return 0;
}
