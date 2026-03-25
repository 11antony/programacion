#include <iostream>
#include <algorithm> // para usar sort
using namespace std;
int main() {
    int a, b, c;
    cout << "Ingrese tres enteros distintos de cero: ";
    cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0) {
        cout << "Los lados deben ser distintos de cero." << endl;
        return 0;
    }
    int lados[3] = {a, b, c};
    sort(lados, lados + 3);
    if (lados[2]*lados[2] == lados[0]*lados[0] + lados[1]*lados[1]) {
        cout << "Sí, pueden ser los lados de un triángulo recto." << endl;
    } else {
        cout << "No, no forman un triángulo recto." << endl;
    }
    return 0;
}
