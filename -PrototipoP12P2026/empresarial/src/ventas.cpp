#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "ventas.h"

using namespace std;

void llenarMatriz(float ventas[EMPRESAS][ANIOS])
{
    for(int i=0;i<EMPRESAS;i++)
    {
        for(int j=0;j<ANIOS;j++)
        {
            ventas[i][j] = rand()%7000 + 1000;
        }
    }
}

void imprimirMatriz(float ventas[EMPRESAS][ANIOS], string empresas[EMPRESAS])
{
    cout<<"VENTAS DE EMPRESAS POR 5 CICLOS\n\n";
    cout<<setw(12)<<"Empresa";

    for(int j=0;j<ANIOS;j++)
    {
        cout<<setw(10)<<("Ciclo " + to_string(j+1));
    }

    cout<<setw(12)<<"Total"<<endl;

    for(int i=0;i<EMPRESAS;i++)
    {
        float total=0;
        cout<<setw(12)<<empresas[i];

        for(int j=0;j<ANIOS;j++)
        {
            cout<<setw(10)<<ventas[i][j];
            total+=ventas[i][j];
        }

        cout<<setw(12)<<total<<endl;
    }
}
