/*
Diseñe un programa que simule un tablero cuadrado de tamaño 
n×n, donde cada celda puede contener un símbolo 
según las siguientes reglas:
Si la suma de los índices (i + j) es par, colocar el carácter 'X'.
Si es impar, colocar el carácter 'O'.
Si alguno de los índices es múltiplo de 3, colocar '#' en esa posición.

Pedir al usuario el valor de n (entre 3 y 15).
validar si el tamaño mostrando mensajes distintos para:
Caso válido (dentro del rango).
Caso menor que 3.
Caso mayor que 15.

Si es válido, generar el tablero y mostrarlo.
Al finalizar, preguntar (con do-while) si desea generar otro tablero.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    char respuesta;
    
    do {
        // Validar n
        do {
             cout << "ingrese el tamano del tablero (emtre 3 y 15): ";
            cin >> n;
            if (n < 3) {
                cout << "Error, el valor es menor que 3"<<endl;
                cout << "Vuelva a ingresar el valor de n"<<endl;
            } else if ( n > 15) {
                cout << "Error, el valor es mayor que 3"<<endl;
                cout << "Vuelva a ingresar el valor de n"<<endl;
            } 
        } while (n < 3 || n > 15);

        cout << "TABLERO GENERADO" <<endl;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                //Si la suma de los índices (i + j) es par, colocar el carácter 'X'.
                if (i % 3 == 0 || j % 3 == 0) {
                    cout << "# ";
                } else if ((i + j) % 2 == 0) {
                    cout << "X ";
                } else {
                    cout << "O ";
                }
            }
            cout << endl;
        }

        cout << "¿Desea continuar?" <<endl;
        cin >> respuesta;
    } while (respuesta == 's');
 
    return 0;
}