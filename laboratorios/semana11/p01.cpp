/*
1. Escribir un programa que, al recibir como dato un arreglo bidimensional cuadrado de
tipo entero y dimensión 10, imprima la diagonal de dicho arreglo y a continuación
ordene los elementos de dicha diagonal en forma ascendente
*/

#include <iostream>
#include <iomanip> //setw()
#include <cstdlib> // para rand() y srand()
#include <ctime> // para time()
using namespace std;

int main(){

    // Declaramos una matriz de 10 x 10
    int  matriz[10][10];

    // Generamos elementos de forma aleatoria
    srand(time(0)); // actualizamos la semilla en función del tiempo de su PC
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }

    // Mostrando la matriz generada
    cout << "\nLa matriz genera es\n";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << setw(2) << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    // imprimir la Diagonal de la matriz
    cout << "\n\nLa diagonal de ma matriz es:\n ";
    for (int i = 0; i < 10; ++i) {
        cout << matriz[i][i] << " ";
    }
    cout << "\n\n";
    
    // Ordenando los elemento de la diagonal en forma creciente
    for (int i = 0; i < 10 - 1; ++i) { // recorridos
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (matriz[j][j] > matriz[j+1][j+1]) {
                swap(matriz[j][j], matriz[j+1][j+1]);
            }
        }
    }

    // imprimimos la matriz con la diagonal ordenada
    cout << "\nMatriz con la diagonal ordenada\n";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << setw(2) << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}