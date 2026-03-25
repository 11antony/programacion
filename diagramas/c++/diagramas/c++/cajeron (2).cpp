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
	int cantidad_retiros;
	float comision;
	int decision;
	int depositos_cheque;
	int depositos_efectivo;
	float inicial;
	float maximo;
	float minimo;
	float monto;
	string nombre;
	float promedio;
	float saldo;
	int tipo;
	depositos_efectivo = 0;
	depositos_cheque = 0;
	cantidad_retiros = 0;
	promedio = 0;
	minimo = 0;
	maximo = 0;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su saldo inicial: " << endl;
	cin >> inicial;
	saldo = inicial;
	do {
		cout << "Usuario: " << nombre << endl;
		cout << "Saldo actual: " << saldo << endl;
		cout << "¿Qué movimiento desea hacer?" << endl;
		cout << "1. Depositar" << endl;
		cout << "2. Retirar" << endl;
		cout << "0. Salir" << endl;
		cin >> decision;
		if (decision==1) {
			cout << "Tipo de depósito:" << endl;
			cout << "1. Efectivo" << endl;
			cout << "2. Cheque (1% comisión)" << endl;
			cin >> tipo;
			if (tipo==1) {
				cout << "Ingrese el monto a depositar: " << endl;
				cin >> monto;
				saldo = saldo+monto;
				depositos_efectivo = depositos_efectivo+1;
				if (minimo==0 || monto<minimo) {
					minimo = monto;
				}
			} else {
				if (tipo==2) {
					cout << "Ingrese el monto a depositar: " << endl;
					cin >> monto;
					comision = monto*0.01;
					saldo = saldo+(monto-comision);
					depositos_cheque = depositos_cheque+1;
					if (minimo==0 || monto<minimo) {
						minimo = monto;
					}
				}
			}
		}
		if (decision==2) {
			cout << "Ingrese el monto a retirar: " << endl;
			cin >> monto;
			if (monto<=saldo) {
				saldo = saldo-monto;
				cantidad_retiros = cantidad_retiros+1;
				promedio = promedio+monto;
				if (monto>maximo) {
					maximo = monto;
				}
			} else {
				cout << "Saldo insuficiente." << endl;
			}
		}
	} while (decision==0);
	if (cantidad_retiros>0) {
		promedio = promedio/cantidad_retiros;
	}
	cout << "a) Nombre: " << nombre << endl;
	cout << "b) Saldo inicial: " << inicial << endl;
	cout << "c) Saldo final: " << saldo << endl;
	cout << "d) Depósitos:" << endl;
	cout << "   - Efectivo: " << depositos_efectivo << endl;
	cout << "   - Cheque: " << depositos_cheque << endl;
	cout << "e) Promedio de retiros: " << promedio << endl;
	cout << "f) Depósito mínimo: " << minimo << endl;
	cout << "   Retiro máximo: " << maximo << endl;
	return 0;
}

