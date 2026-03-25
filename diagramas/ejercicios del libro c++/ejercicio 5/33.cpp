#include <iostream>
using namespace std;

int main() {
    int filas = 5;
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
