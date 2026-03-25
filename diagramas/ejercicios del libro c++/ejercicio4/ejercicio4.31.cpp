#include <iostream>
using namespace std;
int main() {
    int x = 3;
    int y = 4;
    cout << "Caso 1: (++x + y) = " << (++x + y) << endl;
    x = 3;
    y = 4;
    cout << "Caso 2: (x + ++y) = " << (x + ++y) << endl;
    return 0;
}
