#include <iostream>
using namespace std;

void cuentaRegresiva(int n) {
    if (n == 0) {               // Caso base
        cout << "¡Despegue!" << endl;
        return;
    }

    //cout << n << endl;          // Trabajo antes de la llamada
    cuentaRegresiva(n - 1);     // Caso recursivo
    cout << n << endl;

}

int main() {
    cuentaRegresiva(5);
}