/*
1. Escribir una función que convierta una temperatura dada
en grados Celsius a grados Fahrenheit. 
La fórmula de conversión es: F = 9/5 C + 32
*/

#include <iostream>
using namespace std;


double  celsius_Fahrenheit(double celsius) {
    return 9.0/5 * celsius + 32;

    // return:
    // 1. devuelve el control a donde se llamo la funcion
    // 2. devolver un valor
    // 3. puede evaluar expresiones
}

int main(){
    double celsius = 40;
    double resultado = celsius_Fahrenheit(celsius);

    cout << resultado << " grados Fahrenheit" <<endl;

    return 0;
}

