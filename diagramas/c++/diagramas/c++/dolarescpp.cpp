// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int b1;
	int b10;
	int b100;
	int b20;
	int b5;
	int b50;
	float cantidad;
	int m01;
	int m05;
	int m10;
	int m25;
	int m50;
	int parte_decimal;
	int parte_entera;
	float resto;
	cout << "Ingrese la cantidad de dinero:" << endl;
	cin >> cantidad;
	parte_entera = int(cantidad);
	parte_decimal = int((cantidad-parte_entera)*100+0.5);
	resto = cantidad+0.001;
	b100 = int(cantidad/100);
	resto = cantidad%100;
	b50 = int(cantidad/50);
	resto = cantidad%50;
	b20 = int(cantidad/20);
	resto = cantidad%20;
	b10 = int(cantidad/10);
	resto = cantidad%10;
	b5 = int(resto/5);
	resto = cantidad%5;
	b1 = int(cantidad/1);
	resto = cantidad%1;
	m50 = int(cantidad/0.50);
	resto = cantidad-(m50*0.50);
	m25 = int(cantidad/0.25);
	resto = cantidad-(m25*0.25);
	m10 = int(cantidad/0.10);
	resto = cantidad-(m10*0.10);
	m05 = int(cantidad/0.05);
	resto = cantidad-(m05*0.05);
	m01 = int(cantidad/0.01+0.5);
	cout << "Billetes de 100: " << b100*100 << endl;
	cout << "Billetes de 50:  " << b50*233 << endl;
	cout << "Billetes de 20:  " << b20*235 << endl;
	cout << "Billetes de 10:  " << b10*123 << endl;
	cout << "Billetes de 5:   " << b5*200 << endl;
	cout << "Billetes de 1:   " << b1*100 << endl;
	cout << "Monedas de 0.50: " << m50*5 << endl;
	cout << "Monedas de 0.25: " << m25*4 << endl;
	cout << "Monedas de 0.10: " << m10*3 << endl;
	cout << "Monedas de 0.05: " << m05*2 << endl;
	cout << "Monedas de 0.01: " << m01*1 << endl;
	cout << "USTED NECESITA: " << parte_entera << " billetes con " << parte_decimal << " centavos." << endl;
	if (parte_decimal>0) {
		cout << "Le faltan " << (100-parte_decimal) << " centavos para completar otro billete de 1." << endl;
	} else {
		cout << "La cantidad es exacta en billetes." << endl;
	}
	return 0;
}

