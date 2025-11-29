/*
Escribir una función recursiva que permita calcular la suma de los n primeros números
naturales
*/


// suma  = 1 + 2 + 3 + 4 + 5

#include <iostream>

int sumaRecursiva(int n) {
    // Caso base
    if (n == 0) 
        return 0;
    
    return n + sumaRecursiva(n-1);
}

using namespace std;

int main() {

    cout << sumaRecursiva(20) <<endl;
    cout << sumaRecursiva(5) << endl;



    
    return 0;
}