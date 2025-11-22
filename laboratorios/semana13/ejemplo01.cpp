#include <iostream>
using namespace std;
// Función que calcula el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

// Funcion con retorno void
void saludo() {
    cout << "Funciones y parámetros" <<endl;
    // return; // el compilador coloca de forma implícita
}

int main() {
    int numero = 7;
    cout << "El cuadrado de " << numero << " es " << cuadrado(numero) << "\n";
    
    return 0;
}
