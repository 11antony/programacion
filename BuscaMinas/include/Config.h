#ifndef CONFIG_H
#define CONFIG_H

// definición de la clase config
// esta clase se encarga de almacenar y modificar la configuración del juego
class Config
{
    public:
        // constructor
        // inicializa los valores del tablero y del juego
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

        // getter de filas del tablero
        int getfilasTablero();

        // setter de filas del tablero
        int setfilasTablero(int filasTablero);

        // getter de columnas del tablero
        int getcolumnasTablero();

        // setter de columnas del tablero
        int setcolumnasTablero(int columnasTablero);

        // getter de minas
        int getminasTablero();

        // setter de minas
        int setminasTablero(int minasTablero);

        // getter de modo desarrollador
        bool getmodoDesarrolladorTablero();

        // setter de modo desarrollador
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

        // getter de vidas
        int getvidasTablero();

        // setter de vidas
        int setvidasTablero(int vidasTablero);

        // muestra el menú de configuración
        void menuConfiguracion();

    protected:
        // no se están usando atributos protegidos

    private:
        // atributos privados que almacenan la configuración del juego
        int filasTablero;              // número de filas del tablero
        int columnasTablero;           // número de columnas del tablero
        int minasTablero;              // cantidad de minas
        bool modoDesarrolladorTablero; // activa o desactiva modo desarrollador
        int vidasTablero;              // vidas del jugador
};

#endif // CONFIG_H
