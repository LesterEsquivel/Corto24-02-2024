#include <iostream>
#include <cmath>

using namespace std;
// bucle while
int main() {
    int N_natural = 0;
    int contador = 1;
    while (contador <= 10) {
        N_natural += 1;
        double cuadrado = pow(N_natural, 2);
        cout << N_natural << " al cuadrado es: " << cuadrado << "\n";
        contador += 1;
    }
