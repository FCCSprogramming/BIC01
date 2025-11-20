#include <iostream>
using namespace std;
// Función que calcula el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

int main() {
    int numero = 7;
    cout << "El cuadrado de " << numero << " es " << cuadrado(numero) << "\n";
    
    return 0;
}
