// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	string anadir;
	string calculadora;
	float cantidad;
	string formulas;
	float numero_dos;
	float numero_tres;
	float numero_uno;
	float total;
	float total_inicial;
	cout << "¡¡BUENVENIDO!!" << endl;
	cout << "calculadora" << endl;
	do {
		cout << "escribe el primer numero" << endl;
		cin >> numero_uno;
		cout << "escribe el segundo numero" << endl;
		cin >> numero_dos;
		cout << "que operacion desas aser o si deseas salir escriba finalizar" << endl;
		cin >> formulas;
		if (formulas=="suma") {
			total = numero_uno+numero_dos;
			cout << total << endl;
		}
		if (formulas=="resta") {
			total = numero_uno-numero_dos;
			cout << total << endl;
		}
		if (formulas=="multiplicacion") {
			total = numero_uno*numero_dos;
			cout << total << endl;
		}
		if (formulas=="division") {
			total = numero_uno/numero_dos;
			cout << total << endl;
		}
		total_inicial = total;
		cout << "escriba añadir algo mas o si deseas salir escriba finalizar" << endl;
		cin >> calculadora;
		if (calculadora=="añadir") {
			do {
				cout << "escriba la cantidad deseada" << endl;
				cin >> numero_tres;
				cout << "que operacion deseas hacer" << endl;
				cin >> anadir;
				if (anadir=="suma") {
					cantidad = numero_tres+total_inicial;
					cout << cantidad << endl;
				}
				if (anadir=="resta") {
					cantidad = numero_tres-total_inicial;
					cout << cantidad << endl;
				}
				if (anadir=="multiplicacion") {
					cantidad = numero_tres*total_inicial;
					cout << cantidad << endl;
				}
				if (anadir=="division") {
					cantidad = numero_tres/total_inicial;
					cout << cantidad << endl;
				}
			} while (calculadora!="finalizar");
		}
	} while (calculadora!="finalizar");
	cout << "grasias por utilizalo" << endl;
	return 0;
}

