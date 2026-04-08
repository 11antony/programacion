#include <iostream>
#include <cstdlib> // para system
#include "Config.h"
using namespace std;

// Constructor
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}

// Menu de configuración
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;

    do
    {
        system("cls"); // usa "clear" si estás en Linux

        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> "
             << (this->getmodoDesarrolladorTablero() ? "Activado" : "Desactivado") << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        // Validación básica
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida..." << endl;
            system("pause");
            continue;
        }

        if (opciones != 6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Entrada invalida..." << endl;
                system("pause");
                continue;
            }
        }

        switch (opciones)
        {
            case 1:
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;

            case 2:
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;

            case 3:
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;

            case 4:
                this->setmodoDesarrolladorTablero(valorIngresado == 1);
                cout << "Modo del Juego actualizado" << endl;
                break;

            case 5:
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;

            case 6:
                repetir = false;
                break;

            default:
                cout << "Opcion no valida..." << endl;
                break;
        }

        system("pause");

    } while (repetir);
}

// GETTERS
int Config::getfilasTablero()
{
    return this->filasTablero;
}

int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}

int Config::getminasTablero()
{
    return this->minasTablero;
}

bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}

int Config::getvidasTablero()
{
    return this->vidasTablero;
}

// SETTERS (ahora void)
void Config::setfilasTablero(int filasTablero)
{
    this->filasTablero = filasTablero;
}

void Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero = columnasTablero;
}

void Config::setminasTablero(int minasTablero)
{
    this->minasTablero = minasTablero;
}

void Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
}

void Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero = vidasTablero;
}
