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
	int alambre;
	int anchos;
	int largo;
	int precio;
	int terrenos;
	cout << "cual es el ancho del terreno; " << endl;
	cin >> anchos;
	cout << "cual es el largo del terreno; " << endl;
	cin >> largo;
	terrenos = (anchos*100)+(largo*120);
	alambre = anchos+largo;
	cout << "el precio del terreno es de; Q" << terrenos << " y la cantidad de alambre es de; Q" << alambre << endl;
	return 0;
}

