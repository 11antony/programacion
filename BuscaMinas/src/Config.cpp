#include <iostream>
#include <unistd.h>
#include "Config.h"

using namespace std;

// constructor de la clase config
// inicializa los valores del juego
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}

// menú de configuración del juego
// permite modificar los valores actuales
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;

    do
    {
        system("cls"); // limpia la pantalla

        // muestra la configuración actual
        cout << "\n\n\t\tconfiguracion actual - menu -" << endl;
        cout << "\t\t-----------------------------"<< endl;
        cout << "\t\t1. filas del tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. columnas del tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. minas del tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. modo del juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. vidas del jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. regresar al menu general" << endl;
        cout << "\n\t\tingrese una opcion: ";
        cin >> opciones;

        // si no elige salir, pide el nuevo valor
        if (opciones != 6)
        {
            cout << "\n\tingrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }

        // control de opciones
        switch (opciones)
        {
        case 1:
        {
            // modifica filas del tablero
            this->setfilasTablero(valorIngresado);
            cout << "filas del tablero actualizadas" << endl;
            break;
        }

        case 2:
        {
            // modifica columnas del tablero
            this->setcolumnasTablero(valorIngresado);
            cout << "columnas del tablero actualizadas" << endl;
            break;
        }

        case 3:
        {
            // modifica cantidad de minas
            this->setminasTablero(valorIngresado);
            cout << "minas del tablero actualizadas" << endl;
            break;
        }

        case 4:
        {
            // modifica modo desarrollador
            this->setmodoDesarrolladorTablero(valorIngresado);
            cout << "modo del juego actualizado" << endl;
            break;
        }

        case 5:
        {
            // modifica vidas del jugador
            this->setvidasTablero(valorIngresado);
            cout << "vidas del juego actualizadas" << endl;
            break;
        }

        case 6:
            // salir del menú
            repetir = false;
            break;
        }

        system("pause"); // pausa antes de repetir

    } while (repetir);
}

// getter de filas del tablero
int Config::getfilasTablero()
{
    return this->filasTablero;
}

// setter de filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero = filasTablero;
}

// getter de columnas del tablero
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}

// setter de columnas del tablero
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero = columnasTablero;
}

// getter de minas
int Config::getminasTablero()
{
    return this->minasTablero;
}

// setter de minas
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero = minasTablero;
}

// getter de modo desarrollador
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}

// setter de modo desarrollador
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
}

// getter de vidas
int Config::getvidasTablero()
{
    return this->vidasTablero;
}

// setter de vidas
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero = vidasTablero;
}
