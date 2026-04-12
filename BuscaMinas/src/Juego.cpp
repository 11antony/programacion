#include <fstream>
#include <unistd.h>

// función que genera un número aleatorio dentro de un rango
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// genera una fila aleatoria dentro del tablero
int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

// genera una columna aleatoria dentro del tablero
int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// constructor de la clase juego
// recibe el tablero y la cantidad de minas
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;

    // coloca las minas de forma aleatoria al iniciar el juego
    this->colocarMinasAleatoriamente();
}

// coloca las minas en posiciones aleatorias del tablero
void Juego::colocarMinasAleatoriamente()
{
    int x, y;
    int minasColocadas = 0;

    // se repite hasta colocar todas las minas
    while (minasColocadas < this->cantidadMinas)
    {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();

        // solo incrementa si logra colocar una mina en una posición válida
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

// solicita al usuario una fila
int Juego::solicitarFilaUsuario()
{
    int fila = 0;
    cout << "ingresa la fila en la que desea jugar: ";
    cin >> fila;

    // se resta 1 para ajustar a índices de arreglo (empiezan en 0)
    return fila - 1;
}

// solicita al usuario una columna
int Juego::solicitarColumnaUsuario()
{
    int columna = 0;
    cout << "ingresa la columna en la que desea jugar: ";
    cin >> columna;

    // se resta 1 para ajustar a índices de arreglo
    return columna - 1;
}

// verifica si el jugador ha ganado
bool Juego::jugadorGana()
{
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();

    // si no quedan celdas por descubrir, el jugador gana
    if (conteo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// método principal del juego
// controla el flujo de la partida
void Juego::iniciar()
{
    int fila, columna;

    // ciclo principal del juego
    while (true)
    {
        // muestra el tablero
        this->tablero.imprimir();

        // solicita jugada al usuario
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();

        // intenta descubrir la celda
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        // si descubre una mina, pierde
        if (!respuestaAUsuario)
        {
            cout << "perdiste el juego\n";

            // activa modo desarrollador para mostrar todas las minas
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }

        // verifica si el jugador gana
        if (this->jugadorGana())
        {
            cout << "ganaste el juego\n";

            // muestra el tablero completo
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}
