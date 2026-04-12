#include <iostream>
using namespace std;
int main() {
    cout << "Número\tCuadrado\tCubo" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t" << i * i << "\t\t" << i * i * i << endl;
    }
    return 0;
}
