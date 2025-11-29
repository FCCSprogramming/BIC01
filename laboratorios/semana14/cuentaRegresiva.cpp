#include <iostream>
using namespace std;

// Ingreso: 3

// Salida 3 2 1 

// n == 0 caso base

void cuentaRegresiva(int n) {

    // Caso BASE
    if (n == 0) {               
        cout << "Caso base" << endl;
        return;
    }

    cout << n << endl;          // Impresión antes de la llamada

    // Caso RECURSIVO
    cuentaRegresiva(n - 1);     // Caso recursivo
    cout << n << endl;

}

int main() {
    cuentaRegresiva(9);
}