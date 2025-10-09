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
        
        do {
            cout << "Ingrese el tamano del tablero (3 - 15): ";
            cin >> n;
            if (n < 3) {
                cout << "Error, el tamano es menor que 3" <<endl;
                cout << "Intente nuevamente" <<endl;
            } else if (n > 15){
                cout << "El tamano es mayor que 15" <<endl;
                cout << "Intente nuevamente" <<endl;
            }
        } while (n < 3 || n > 15);

        cout << "TABLERO GENERADO" <<endl;
        for (int filas = 1; filas <= n; ++filas) { //para recorrer filas
            for (int cols = 1; cols <= n; ++cols) {
                if (filas % 3 == 0 || cols % 3 == 0) {
                    cout << "# ";
                } else if ((filas + cols) % 2 == 0 ) {
                    cout << "X ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }

    cout << "Desea continuar? (s/n)" <<endl;
    cin >> respuesta;

    } while (respuesta == 's');

    return 0;
}