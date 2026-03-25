#include <iostream>
using namespace std;

int main() {
    double pi = 0.0;
    int terminos = 10000;
    for (int i = 0; i < terminos; i++) {
        if (i % 2 == 0)
            pi += 4.0 / (2 * i + 1);
        else
            pi -= 4.0 / (2 * i + 1);
    }
    cout << "Aproximación de pi = " << pi << endl;
    return 0;
}
