/*
Implementar un programa que muestre la tabla de multiplicar del 7 
a) Pida al usuario la tabla que desea generar
b) valide que la entrada este entre 1 y 12
c) Muestre múltiples tablas
*/

#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i <= 12; ++i) {
        cout << i << " x "  << 7 << " = " << i*7 <<endl;
    }

    return 0;
}


/* Ejercicio
Implementar un programa que sume los número pares entre 1 y 100
a) cuente cuántos pares hay
b) Modidique para que el usuario defina el rango de pares
c) Muestre el progreso de los pares sumados y  la suma
d) Calcule el promedio // 
*/

// for (int i = 0; i < n; i += 2) {
//     // código aquí
// }