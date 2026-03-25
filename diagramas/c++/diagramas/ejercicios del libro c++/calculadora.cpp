#include<iostream>
using namespace std;
float suma(float a, float b) {
    return a + b;
}
float resta(float a, float b) {
    return a - b;
}
float multiplicacion(float a, float b) {
    return a * b;
}
float division(float a, float b) {
    if (b == 0) {
        cout << "Error: no se puede dividir entre 0" << endl;
        return 0;
    }
    return a / b;
}
float calcular(string operacion, float a, float b) {
    if (operacion == "suma") {
        return suma(a, b);
    } else if (operacion == "resta") {
        return resta(a, b);
    } else if (operacion == "multiplicacion") {
        return multiplicacion(a, b);
    } else if (operacion == "division") {
        return division(a, b);
    } else {
        cout << "Operacion no valida" << endl;
        return 0;
    }
}
int main() {
    string anadir;
    string calculadora;
    float cantidad;
    string formulas;
    float numero_dos;
    float numero_tres;
    float numero_uno;
    float total;
    float total_inicial;
    cout << "¡¡BUENVENIDO!!" << endl;
    cout << "calculadora" << endl;
    do {
        cout << "escribe el primer numero" << endl;
        cin >> numero_uno;
        cout << "escribe el segundo numero" << endl;
        cin >> numero_dos;
        cout << "que operacion deseas hacer (suma, resta, multiplicacion, division) o escribir finalizar" << endl;
        cin >> formulas;
        if (formulas == "finalizar") break;
        total = calcular(formulas, numero_uno, numero_dos);
        cout << total << endl;
        total_inicial = total;
        cout<< "quieres añadir algo mas o escribir finalizar" << endl;
        cin >> calculadora;
        while (calculadora != "finalizar") {
            cout << "escriba la cantidad deseada" << endl;
            cin >> numero_tres;
            cout << "que operacion deseas hacer" << endl;
            cin >> anadir;
            cantidad = calcular(anadir, total_inicial, numero_tres);
            cout << cantidad << endl;
            total_inicial = cantidad;
            cout << "deseas continuar o finalizar" << endl,
            cin >> calculadora;
        }

    } while (calculadora != "finalizar");
    cout << "gracias por utilizarlo" << endl;
    return 0;
}
