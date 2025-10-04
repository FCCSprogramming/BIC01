/*
Escriba un programa en C++ que calcule el factorial doble de un número entero
positivo ingresado por el usuario. El factorial doble de un número n, denotado como
n!!, se define de la siguiente manera:
n!! =
(
n · (n − 2) · (n − 4) · · · 1, si n es impar
n · (n − 2) · (n − 4) · · · 2, si n es par

Solicitar al usuario que ingrese un número entero positivo.
Validar que el número ingresado sea mayor que cero.
Calcular y mostrar el factorial doble del número
*/

#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Ingrese un número positivo: ";
    cin >> n;

    while (n <= 0) {
        cout << "Error!, el número debe ser positivo" <<endl;
        cout << "Por favor vuelva ingresar el número: \n";
        cin >> n;
    }

    int dobleFactorial = 1;
    if (n % 2 != 0) {
        for(int i = n; i >= 1; i -= 2) {
            dobleFactorial *=i;
        }
    } else {
        for(int i = n; i >= 2; i -= 2) {
            dobleFactorial *=i;
        }
    }

    cout << "El factorial doble de " << n << " es: " << dobleFactorial <<endl;



    return 0;
}