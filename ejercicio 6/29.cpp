#include <iostream>
using namespace std;
int main() {
    double e = 1.0;
    long long factorial = 1;
    for (int i = 1; i <= 10; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }
    cout << "Aproximación de e = " << e << endl;
    return 0;
}
