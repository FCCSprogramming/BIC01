/*
1. Escribir una función que tenga un argumento de tipo entero
y que devuelva la letra P si el número es positivo, y
la letra N si es cero o negativo
*/

#include <iostream>
using namespace std;

char positivoNegativo(int n) {
    if (n > 0) {
        return 'P';
    } else {
        return 'N';
    }
}


int main(){

    int m = -6;

    char resultado = positivoNegativo(m);

    cout << resultado << endl;

    return 0;
}