#include <iostream>
using namespace std;
// Función que calcula el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

// Función que calcula la potencia con exponente opcional
int potencia(int base, int exponente = 2) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
        resultado *= base;
    return resultado;
}

int main() {
    int numero = 7;
    cout << "El cuadrado de " << numero << " es " << cuadrado(numero) << "\n\n";
    
    return 0;
}
