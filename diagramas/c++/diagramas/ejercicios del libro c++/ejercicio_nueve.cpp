// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
using SIN_TIPO = string;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	SIN_TIPO variable_dos;
	SIN_TIPO variable_tres;
	SIN_TIPO variable_uno;
	cout << "ponga 3 variables" << endl;
	// decarar lo que pide el programa que aga el usuario
	cin >> variable_uno;
	cin >> variable_dos;
	cin >> variable_tres;
	cout << "la primera variable: " << variable_uno << " variable dos: " << variable_dos << " variable tres: " << variable_tres << endl;
	return 0;
}

