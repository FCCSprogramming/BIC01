/*
Switch con menú interactivo. Crea un programa con el siguiente menú de opera-
ciones matemáticas:
1: Calcular el factorial de un número (usar ciclo).
2: Verificar si un número es primo.
3: Calcular el máximo común divisor (MCD) de dos números.
El usuario elige una opción con un switch, y el programa ejecuta la operación corres-
pondiente


// voy a proceder en 3 partes

// implementar el menu de opciones OK

// implementar las funcionalidades 1 OK, 2 OK, ,3 TAREA 1


// implementar interacción con el usuario TAREA 2
*/

#include <iostream>
using namespace std;

int main(){
    int opcion;
    cout << "-------Menú de opciones -------\n";
    cout << "1. Calcular el factorial de un número\n";
    cout << "2. verificar si un número es primo\n";
    cout << "3 . Calacular el MCD\n";

    cout << "Elija una opción\n";
    cin >> opcion;



    switch (opcion) {
        case 1:
        {
            //Implementación del factorial
            int n;
            cout << "Ingrese un numero: ";
            cin >> n;

            int factorial = 1;
            int i = 1;

            do {
                factorial *=i; // factorial = factorial * i;
                i++; // i = i +1;
            } while (i <= n);

            cout << "El facotorial de " << n << " es " << factorial <<endl;
        }
            break;
        case 2:
        {   //Implementación del número primo
            int n;
            cout << "Ingrese un numero ";
            cin >> n;
            bool esPrimo = true;
            if( n == 1) {
                esPrimo = false;
            }else {
                int i = 2;
                do {
                    if (n % i == 0) {
                        esPrimo = false;
                        break;
                    }
                    i++;

                } while (i < n);

            }

            if (esPrimo) {
                cout << "el numero " << n << " es primo" <<endl;
            } else {
                cout << "EL numero " << n << " no es primo " <<endl;
            }

        }
            break;
        case 3:
            //Implementación del MCD EJERCICIO 
        default:
            // caso de error
            cout << "Opción inválida\n";
            break;
    }


    return 0;
}

