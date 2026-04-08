#include <iostream>
#include "imprime.h"
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "escoje que operacion deseas +, -, /, * :"; cin >> op;
    cout << "elige cantidades : "; cin >> num1 >> num2 ;
    switch(op) {
    case '+' :
        cout << num1 << "+" << num2 << "=" << num1 + num2;
             break;
            case '-' :
        cout << num1 << "-" << num2 << "=" << num1 + num2;
         break;
            case '/' :
        cout << num1 << "/" << num2 << "=" << num1 + num2;
         break;
            case '*' :
        cout << num1 << "+" << num2 << "=" << num1 + num2;
         break;
    }
return 0;
 }
