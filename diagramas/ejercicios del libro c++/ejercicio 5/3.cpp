#include <iostream>
using namespace std;

int main() {
    int producto = 1;
    for (int i = 1; i <= 10; i++) {
        producto *= i;
    }
    cout << "Producto de 1 a 10 = " << producto << endl;
    return 0;
}
