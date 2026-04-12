#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;

    long long resultado = 1;
    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }

    cout << base << "^" << exponente << " = " << resultado << endl;
    return 0;
}
