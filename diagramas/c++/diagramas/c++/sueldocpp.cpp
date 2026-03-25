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
	int cantidad;
	float hora;
	int sueldo;
	cout << "escribe la cantidad de tu sueldo" << endl;
	cin >> sueldo;
	if (hora<=1000 || hora<=1) {
		cout << "son las " << hora << " de la medio dia" << endl;
	}
	if (hora<1000 || hora>1) {
		cantidad = (hora*0.5);
		cout << " su sueldo es de " << cantidad << endl;
	}
	if (hora>=10000 || hora<=19999) {
		cantidad = (hora*1);
		cout << " su sueldo es de " << cantidad << endl;
	}
	if (hora>=20000 || hora<=29999) {
		cantidad = (hora*2);
		cout << " su sueldo es de " << cantidad << endl;
	}
	if (hora>=30000) {
		cantidad = (hora*2.50);
		cout << " su sueldo es de " << cantidad << endl;
	}
	return 0;
}

