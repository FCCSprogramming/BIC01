/*
Implementa una función recursiva que calcule la potencia de un número ab, donde
a y b son enteros positivos.
Ejemplo: potencia(2, 5) = 32

2*2*2*2*2 = 2^4 * 2
*/

#include <iostream>
using namespace std;

int potenciaRecursiva(int b , int e) {
    //Caso base 
    if(e == 0) 
        return 1;

    return b * potenciaRecursiva(b, e-1);
}

int main(){

    cout << potenciaRecursiva(2,10) <<endl;

    return 0;
}