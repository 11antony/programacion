#ifndef VENTAS_H
#define VENTAS_H
#include <string>
using namespace std;
#define EMPRESAS 5
#define ANIOS 5
void llenarMatriz(float ventas[EMPRESAS][ANIOS]);
void imprimirMatriz(float ventas[EMPRESAS][ANIOS], string empresas[EMPRESAS]);
class ventas
{
    public:
        ventas();
        virtual ~ventas();

    protected:

    private:
};
#endif
