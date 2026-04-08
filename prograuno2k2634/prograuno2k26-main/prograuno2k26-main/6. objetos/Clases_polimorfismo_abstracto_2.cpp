#include <iostream>
using namespace std;
//Definiciòn de clase Abstracta Animal
//Caracteristicas:  No puede ser instanciada; tiene que contar con minimo un mètodo abstracto puro
//En otros lenguajes se les denomina Interfaz
class Animal
{
public:
    virtual void sonidoAnimal()=0;
};

class Cerdo : public Animal
{
public:
    void sonidoAnimal() override
    {
        cout << "El cerdo dice: wee wee " << endl;
    }
};
class Perro : public Animal
{
public:
    void sonidoAnimal() override
    {
        cout << "El perro dice: bow bow " << endl;
    }
};
int main()
{
    Animal miAnimal;
    Cerdo miCerdo;
    Perro miPerro;

    miCerdo.sonidoAnimal();
    miPerro.sonidoAnimal();
    return 0;
}
