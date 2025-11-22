/*
6. Un número entero n se dice que es perfecto si la suma de sus divisores
incluyendo 1 y excluyéndose él coincide consigo mismo.

Escribir una función que decida si un número
es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6.
*/

#include <iostream>
using namespace std;

bool esPerfecto(int n) {
    int sumaDiv = 0;

    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sumaDiv += i;
        }
    }

    if(n == sumaDiv) {
        return true;
    }

    return false;

}

int main(){

    int n = 6;

    if (esPerfecto(n)) {
        cout << "El número es perfecto " << endl;
    } else {
        cout << "No es perfecto " << endl;
    }


    return 0;
}