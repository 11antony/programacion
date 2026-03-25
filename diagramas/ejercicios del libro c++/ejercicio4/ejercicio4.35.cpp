#include <iostream>
#include <string>
using namespace std;
class Cuenta {
private:
    unsigned int numeroCuenta;
    string primerNombre;
    string apellido;
    double saldo;
public:
    Cuenta(unsigned int num, string nombre, string ape, double s)
        : numeroCuenta{num}, primerNombre{nombre}, apellido{ape}, saldo{s} {}
    void mostrarCuenta() const {
        cout << "Número de cuenta: " << numeroCuenta << endl;
        cout << "Nombre: " << primerNombre << " " << apellido << endl;
        cout << "Saldo: " << saldo << endl;
    }
};
int main() {
    unsigned int contadorEstudiantes{0};
    double saldoInicial{1000.0};
    Cuenta miCuenta{12345, "Juan", "Perez", 2500.0};

    cout << "Contador de estudiantes: " << contadorEstudiantes << endl;
    cout << "Saldo inicial: " << saldoInicial << endl;
    cout << "\nInformación de la cuenta:" << endl;
    miCuenta.mostrarCuenta();
    return 0;
}
