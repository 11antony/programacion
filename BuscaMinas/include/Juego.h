#ifndef JUEGO_H
#define JUEGO_H

#include "Tablero.h"

// definición de la clase juego
// esta clase controla la lógica principal del juego buscaminas
class Juego
{
private:
    // objeto tablero donde se desarrolla el juego
    Tablero tablero;

    // cantidad de minas que tendrá el tablero
    int cantidadMinas;

    // genera un número aleatorio dentro de un rango
    int aleatorio_en_rango(int minimo, int maximo);

    // genera una fila aleatoria
    int filaAleatoria();

    // genera una columna aleatoria
    int columnaAleatoria();

public:
    // constructor de la clase juego
    // recibe un tablero y la cantidad de minas
    Juego(Tablero tablero, int cantidadMinas);

    // coloca las minas en posiciones aleatorias
    void colocarMinasAleatoriamente();

    // solicita al usuario la fila donde desea jugar
    int solicitarFilaUsuario();

    // solicita al usuario la columna donde desea jugar
    int solicitarColumnaUsuario();

    // verifica si el jugador ha ganado
    bool jugadorGana();

    // inicia el juego y controla la partida
    void iniciar();
};

#endif // JUEGO_H
