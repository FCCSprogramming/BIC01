/*
2. Escribir un programa que calcule los valores máximo y mínimo
y sus respectivas posiciones dentro de una matriz dada por el usuario
*/

#include <iostream>
using namespace std;

int main(){
    const int filas = 2;
    const int columnas = 3;

    int matriz[filas][columnas] = {{1,6,-8},
                        {3,5,0}};

    int maxMatriz = matriz[0][0]; // asumimos un valor inicial
    int minMatriz = matriz[0][0];

    int posFilaMax = 0, posColMax = 0;
    int posFilaMin = 0, posColMin = 0;

    //  recorremos la matriz y actualizar las variables maxMatriz, minMatriz,
    for (int i = 0; i < filas; ++i) { // recorremos filas
        for (int j = 0; j < columnas; ++j) { // recorremos columnas
            // Actualizar maxMatriz
            if (matriz[i][j] > maxMatriz) {
                maxMatriz = matriz[i][j];
                posFilaMax = i;
                posColMax = j;
            }

            // Actualizar minMatriz
            if (matriz[i][j] < minMatriz) {
                minMatriz = matriz[i][j];
                posFilaMin = i;
                posColMin = j;
            }
        }
    }
    

    return 0;
}
