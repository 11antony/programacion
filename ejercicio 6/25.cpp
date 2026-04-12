#include <iostream>
using namespace std;

int main() {
    double suma = 0.0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            suma -= 1.0 / i;
        else
            suma += 1.0 / i;
    }
    cout << "Suma de la serie alternante = " << suma << endl;
    return 0;
}
