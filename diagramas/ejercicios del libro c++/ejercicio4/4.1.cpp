//Hay un ; después del if, lo que rompe la condición.
//Falta cerrar comillas en el else.
if (edad >= 65)
    cout << "Edad es mayor o igual que 65" << endl;
else
    cout << "Edad es menor que 65" << endl;
//El else tiene un ; incorrecto.
//Falta cerrar comillas en el cout.
if (edad >= 65)
    cout << "Edad es mayor o igual que 65" << endl;
else
    cout << "Edad es menor que 65" << endl;
//total no está inicializado (tiene basura).
unsigned int x = 1;
unsigned int total = 0;
while (x <= 10)
{
    total += x;
    x++;
}
//Falta {} → el while solo repite la primera línea.
//x++ queda fuera del ciclo → bucle infinito.
while (x <= 100)
{
    total += x;
    x++;
}
//aumenta entonces nunca deja de ser mayor que 0 → bucle infinito.
while (y > 0)
{
    cout << y << endl;
    y--;  // o --y;
}
