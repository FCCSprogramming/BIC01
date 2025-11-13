#include <iostream>
using namespace std;

// Prototipos de funciones
void imprimirMatriz(int matriz[3][3],int n, int m);
int sumaDiagonal(int matriz[3][3], int n);
int sumaDiagSec(int matriz[3][3], int n);
void imprimirArreglo(int arr[], int n);
void burbuja(int arr[], int n);





int main(){
    int matriz[3][3]={2,5,7,
                      9,7,4,
                      9,10,11};

    int arr[6] = {4,8,2,9,4,-4};


    // Imprimir matriz
    imprimirMatriz(matriz,3,3);

    // Suma de la diagonal
    cout << "La suma de la diagonal es: " << sumaDiagonal(matriz, 3) <<endl;
    
    // suma de la diagonal secundaria
    cout << "La suma de la diagonal secundaria es: " << sumaDiagSec(matriz, 3) <<endl;


    cout <<"\nArreglo original\n";
    imprimirArreglo(arr, 6);

    cout << "\nOrdenando el arreglo\n";
    burbuja(arr, 6);

    cout << "\nArreglo ordenado en forma creciente\n";
    imprimirArreglo(arr,6);
    // Ordenamiento burbuja en el arreglo

    
    


    return 0;
}

// Definición de una función
void imprimirMatriz(int matriz[3][3],int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Funcion suma de la diagonal

int sumaDiagonal(int matriz[3][3], int n) {
    int suma = 0;
    for (int i = 0; i < 3; ++i) {
        suma = suma + matriz[i][i];
    } 
    return suma;
}

int sumaDiagSec(int matriz[3][3], int n) {
    int sumaDiagSec = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagSec = sumaDiagSec + matriz[i][n - 1 - i];
    }
    return sumaDiagSec;
}

void imprimirArreglo(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// función ordenamiento burbuja
void burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}