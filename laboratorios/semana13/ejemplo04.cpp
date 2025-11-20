#include <iostream>
using namespace std;

void normalizar(double &x) {
    if (x < 0) x = -x;
}

int main() {
    double valor = -12.7;
    normalizar(valor);
    cout << "Valor normalizado: " << valor << endl; // Cambia
    return 0;
}