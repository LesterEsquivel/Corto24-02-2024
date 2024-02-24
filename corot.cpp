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
    // ejercicio 3
    int calificacion;
    cout << "Ingrese una calificacion numerica (0-100): ";
    cin >> calificacion;

    if (calificacion >= 90 && calificacion <= 100) {
        cout << "La calificacion es: A" << endl;
    } else if (calificacion >= 80 && calificacion <= 89) {
        cout << "La calificacion es: B" << endl;
    } else if (calificacion >= 70 && calificacion <= 79) {
        cout << "La calificacion es: C" << endl;
    } else if (calificacion >= 60 && calificacion <= 69) {
        cout << "La calificacion es: D" << endl;
    } else if (calificacion >= 0 && calificacion <= 59) {
        cout << "La calificacion es: F" << endl;
    } else {
        cout << "Calificacion invalida. Por favor, ingrese un numero entre 0 y 100." << endl;
    }
    return 0;
}
