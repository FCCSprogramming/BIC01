#include <iostream>
using namespace std;

// Función que calcula la potencia con exponente opcional
int potencia(int base, int exponente = 2) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
        resultado *= base;
    return resultado;
}

int main() {
    cout << potencia(5) << endl;      // Usa exponente por defecto (2)
    cout << potencia(5, 4) << endl;   // Exponente específico
    return 0;
}