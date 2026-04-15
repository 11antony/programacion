#include <iostream>
#include <time.h>
#include "ventas.h"
using namespace std;
//ANTONY MARCELO YLLESCAS FIGUEROA
//9959 25 6813
int main()
{
    srand(time(NULL));

    float ventas[EMPRESAS][ANIOS];
    string empresas[EMPRESAS] = {"Totto","Walmart","Bimbo","Pepsi","CocaCola"};

    llenarMatriz(ventas);
    imprimirMatriz(ventas, empresas);

    return 0;
}
