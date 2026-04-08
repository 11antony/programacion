#include <iostream>
#include <cstdlib>
//Este programa permite comprobar el funcionamiento de estructuras secuenciales, condicionales y ciclos
//Febrero 2025 daguilae
using namespace std;

int main()
{
    //Variables operadores
    int operadorUno=0;
    int operadorDos=0;
    float resultadoCalculadora;
    int opcionSeleccionada;
    char salidaMenu;
    //inicia el ciclo
    do
    {
        system("cls");
        //Ingreso de datos
        opcionSeleccionada=0;
        resultadoCalculadora=0;
        cout << "Calculadora" << endl;
        //Menu de opciones en calculadora
        cout << "1. Suma (+)" << endl;
        cout << "2. Resta (-)" << endl;
        cout << "3. Multiplicacion (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Residuo (%) " << endl;
        cout << "   Opcion: ";
        cin >> opcionSeleccionada;
        // Estructuras condicionales
        if (opcionSeleccionada>=1 && opcionSeleccionada<=5)
        {
            cout << "Ingrese Operador 1" << endl;
            cin >> operadorUno;
            cout << "Ingrese Operador 2" << endl;
            cin >> operadorDos;
        }
        switch  (opcionSeleccionada)
        {
            case 1:
                resultadoCalculadora = operadorUno + operadorDos;
                break;
            case 2:
                resultadoCalculadora = operadorUno - operadorDos;
                break;
            case 3:
                resultadoCalculadora = operadorUno * operadorDos;
                break;
            case 4:
                if (operadorDos != 0 )
                    resultadoCalculadora = operadorUno / operadorDos;
                else
                    resultadoCalculadora = 0;
                break;
            case 5:
                resultadoCalculadora = operadorUno % operadorDos;
                break;
            default:
                cout << "Error opcion seleccionada" << endl;
        }
        cout << "El resultado de su calculo es: " << resultadoCalculadora << endl;
        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');
    return 0;
}
