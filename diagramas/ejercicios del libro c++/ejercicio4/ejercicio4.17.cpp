#include <iostream>
using namespace std;
int main() {
    int contador = 1;
    int numero;
    int mayor;
    cout << "Ingrese el numero 1: ";
    cin >> numero;
    mayor = numero;  // El primero es el mayor inicial
    while (contador < 10) {
        cout << "Ingrese el numero " << contador + 1 << ": ";
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
        contador++;
    }
    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}
