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
 // ejercicio 2
    
        int numero, i, resto;
    cout << "Este programa muestra los divisores de un numero." << endl;
    cout << "ingrese un numero: ";
    cin >> numero;
    cout << "sus divisores son: ";
    for(i = 1; i <= numero; i = i+1){
        resto = numero % i;
        if (resto == 0){
            cout << i << " ";
        }
    }
