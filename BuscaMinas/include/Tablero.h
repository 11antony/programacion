#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;

// definición de la clase tablero
// representa el tablero del juego buscaminas
class Tablero
{
    public:
        // constructor vacío
        Tablero();

        // constructor con parámetros
        // inicializa el tamaño del tablero y el modo desarrollador
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        // getter de la altura del tablero (filas)
        int getAlturaTablero();

        // setter de la altura del tablero
        int setAlturaTablero(int alturaTablero);

        // getter del ancho del tablero (columnas)
        int getAnchoTablero();

        // setter del ancho del tablero
        int setAnchoTablero(int anchoTablero);

        // getter del modo desarrollador
        bool getModoDesarrollador();

        // setter del modo desarrollador
        bool setModoDesarrollador(bool modoDesarrollador);

        // imprime la línea separadora del encabezado
        void imprimirSeparadorEncabezado();

        // imprime separadores entre filas
        void imprimirSeparadorFilas();

        // imprime los encabezados del tablero (números de columnas)
        void imprimirEncabezado();

        // imprime todo el tablero en consola
        void imprimir();

        // coloca una mina en la posición indicada
        // retorna true si se colocó correctamente
        bool colocarMina(int x, int y);

        // descubre una celda del tablero
        // retorna false si hay una mina (pierde el jugador)
        bool descubrirMina(int x, int y);

        // cuenta las celdas sin minas que aún no han sido descubiertas
        int contarCeldasSinMinasYSinDescubrir();

    protected:
        // no se utilizan atributos protegidos

    private:
        // dimensiones del tablero
        int alturaTablero, anchoTablero;

        // indica si se muestran las minas (modo desarrollador)
        bool modoDesarrollador;

        // matriz que almacena las celdas del tablero
        vector<vector<Celda> > contenidoTablero;

        // obtiene la representación visual de una celda
        string getRepresentacionMina(int x, int y);

        // calcula cuántas minas hay alrededor de una celda
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
