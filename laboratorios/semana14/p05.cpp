/*
Escribe una función recursiva que sume los dígitos de un número entero positivo.
Ejemplo: sumaDigitos(1234) = 10
*/


// 123      4
// 12    3      4
// 1     2     3   4

#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    // Caso base
    if (n < 10) {
        return n;
    }
    
    // Caso recursivo
    return  (n % 10) + sumaDigitos(n/10);
}



int main(){

    cout << "La suma de dígitos de  "<< 1234 << " es: " << sumaDigitos(1234) <<endl;
    cout << sumaDigitos(12345) <<endl;

    return 0;
}   