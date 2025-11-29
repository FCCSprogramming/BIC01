#include <iostream>
using namespace std;

int s(int n) {
    if (n == 0) return 0;

    return n + s(n-1);
}



void cuentaRegresiva(int n) {
    if (n == 0) {               // Caso base
        //cout << "" << endl;
        return;
    }

    cout << n << endl;          // Impresión antes de la llamada
    cuentaRegresiva(n - 1);     // Caso recursivo
    cout << n-1 <<endl;
}

    int main(){
    cout <<s(3) <<endl;
    cuentaRegresiva(5);

    return 0;
}