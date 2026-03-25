#include <iostream>
using namespace std;
int main() {
    float ventas;
    float salario;
    cout << "Ingrese las ventas (-1 para terminar): ";
    cin >> ventas;
    while (ventas != -1) {
        salario = 200 + (ventas * 0.09);

        cout << "El salario del vendedor es: $" << salario << endl;

        cout << "Ingrese las ventas (-1 para terminar): ";
        cin >> ventas;
    }
    return 0;
}
