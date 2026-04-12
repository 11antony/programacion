#include <iostream>   // librería para entrada y salida de datos
#include <unistd.h>   // librería para usar getpid()
#include "Juego.h"    // clase que contiene la lógica del juego
#include "Config.h"   // clase que maneja la configuración del juego

using namespace std;

int main()
{
    // configuración inicial del juego
    // se definen valores constantes que determinan cómo inicia el juego
    const int FILASTABLERO = 5;            // número de filas del tablero
    const int COLUMNASTABLERO = 5;         // número de columnas del tablero
    const int MINASENTABLERO = 3;          // cantidad de minas en el tablero
    const bool MODODESARROLLADOR = true;   // modo especial para mostrar minas
    const int VIDASTABLERO = 3;            // número de vidas del jugador

    // creación del objeto configuración
    // almacena todos los valores del juego
    Config configuracionJuego(
        FILASTABLERO,
        COLUMNASTABLERO,
        MINASENTABLERO,
        MODODESARROLLADOR,
        VIDASTABLERO
    );

    // creación del objeto juego
    // se inicializa con un tablero basado en la configuración
    Juego juego(
        Tablero(
            configuracionJuego.getfilasTablero(),
            configuracionJuego.getcolumnasTablero(),
            configuracionJuego.getmodoDesarrolladorTablero()
        ),
        configuracionJuego.getminasTablero()
    );

    // inicialización de números aleatorios
    // permite que las minas cambien de posición en cada ejecución
    srand(getpid());

    int opciones;        // variable para almacenar la opción del usuario
    bool repetir = true; // controla el ciclo del menú

    // ciclo principal del menú
    do
    {
        system("cls"); // limpia la pantalla

        // menú de opciones
        cout << "\n\n\t\tbusca minas - menu -" << endl;
        cout << "\t\t----------------------" << endl;
        cout << "\t\t1. configuracion del juego" << endl;
        cout << "\t\t2. iniciar el juego" << endl;
        cout << "\t\t3. salir del juego" << endl;
        cout << "\n\t\tingrese una opcion: ";
        cin >> opciones;

        // control de opciones con switch
        switch (opciones)
        {
        case 1:
        {
            // abre el menú de configuración
            configuracionJuego.menuConfiguracion();
            break;
        }

        case 2:
        {
            // crea un nuevo juego con la configuración actual
            Juego juegoTemporal(
                Tablero(
                    configuracionJuego.getfilasTablero(),
                    configuracionJuego.getcolumnasTablero(),
                    configuracionJuego.getmodoDesarrolladorTablero()
                ),
                configuracionJuego.getminasTablero()
            );

            // inicia el juego
            juegoTemporal.iniciar();

            // pausa antes de regresar al menú
            system("pause");
            break;
        }

        case 3:
            // termina el programa
            repetir = false;
            break;

        default:
            // opción inválida
            cout << "opcion no valida. intente de nuevo." << endl;
            system("pause");
            break;
        }

    } while (repetir);

    // limpieza final de pantalla
    system("cls");

    return 0;
}
