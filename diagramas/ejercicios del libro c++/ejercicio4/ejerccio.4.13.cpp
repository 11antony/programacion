#include <iostream>
using namespace std;
int main() {
    float km, litros;
    float total_km = 0;
    float total_litros = 0;
    cout << "Ingrese los kilometros (0 para terminar): ";
    cin >> km;
    while (km != 0) {
        cout << "Ingrese los litros usados: ";
        cin >> litros;
        total_km += km;
        total_litros += litros;
        cout << "Ingrese los kilometros (0 para terminar): ";
        cin >> km;
    }
    if (total_litros != 0) {
        cout << "Kilometros por litro total: "
             << total_km / total_litros << endl;
    } else {
        cout << "No se ingresaron datos." << endl;
    }
    return 0;
}
