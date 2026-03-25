#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define ANIOS 5
#define EMPRESAS 5

void llenarMatriz(float ventas[EMPRESAS][ANIOS]);
void imprimirMatriz(float ventas[EMPRESAS][ANIOS], string empresas[EMPRESAS]);

int main()
{
    srand(time(NULL));

    float ventas[EMPRESAS][ANIOS];

    string empresas[EMPRESAS] = {
        "Totto",
        "Walmart",
        "Bimbo",
        "Pepsi",
        "CocaCola"
    };

    llenarMatriz(ventas);
    imprimirMatriz(ventas, empresas);

    return 0;
}

void llenarMatriz(float ventas[EMPRESAS][ANIOS])
{
    for(int i=0;i<EMPRESAS;i++)
    {
        for(int j=0;j<ANIOS;j++)
        {
            ventas[i][j] = rand()%9000 + 1000;
        }
    }
}

void imprimirMatriz(float ventas[EMPRESAS][ANIOS], string empresas[EMPRESAS])
{
    cout<<"VENTAS DE EMPRESAS POR 5 ANIOS\n\n";

    cout<<setw(12)<<"Empresa";

    for(int j=0;j<ANIOS;j++)
    {
        cout<<setw(10)<<"Anio "<<j+1;
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
