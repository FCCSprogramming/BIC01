// FUNCIONES EN C++
#include <iostream>
using namespace std;

// Prototipos
int max3(int x, int y, int z);
int max2(int x, int y);
int max10(int arr[], int n);
int sumaDiag(int matriz[][3], int n);
int sumaDiagSec(int matriz[3][3], int n);

void imprimirArreglo(int arr[], int n);
void burbuja(int arr[], int n);
int busquedaLineal(int arr[], int n, int key);
int buquedaBinaria(int arr[], int n, int key);



int main(){
    // Determinar el máximo de 3 números enteros
    int a, b , c;
    cout << "Ingrese 3 números enteros: ";
    cin >> a >> b >> c;

    int resultado1 = max3(a,b,c);

    int resultado2 = max2(max2(a,b),c);

    cout << "El máximo es: " << resultado1 <<endl;
    cout << "El máximo es: " << resultado2 <<endl;

    int numeros[10] = {3,7,0,1,13,15,15,-5,9,1};

    cout << " Imprimiendo el erreglo\n";


    cout << "El maximo es: " << max10(numeros,10);

    // Matrices y funciones
    int matriz[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9}; 
    
    // suma diag
    cout << "La suma de la diagonal es: " << sumaDiag(matriz,3) <<endl;
    cout << "La suma de la diagonal secundaria es: " << sumaDiagSec(matriz,3)<<endl;
    return 0;
}


// Definición de la función max3
int max3(int x, int y, int z) {
    int max = x;
    if(y > max) max = y;
    if(z > max) max = z;

    return max;
}

int max2(int x, int y) {
    int max = x;
    if (y > max) max = y;
    return max;
}


// Maximo de 10 numeros
int max10(int arr[10], int n) {
    int max = arr[0];

    for(int i = 1; i < n; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

//Funcion sumar elementos de la diagonal
int sumaDiag(int matriz[3][3], int n) {
    int sumaDiag = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiag = sumaDiag + matriz[i][i];
    }

    return sumaDiag;
}

// Funcion para sumar elementos de la diagonal secundaria
int sumaDiagSec(int matriz[3][3], int n) {
    int sumaDiagSec = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagSec = sumaDiagSec + matriz[i][n-1-i];
    }

    return sumaDiagSec;
}


void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

// Funcion que imprima una matriz

// funcion que ordene un arreglo en forma creciente
void burbuja(int arr[], int n){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    } 
}

// Funcion busqueda lineal
int busquedaLineal(int arr[], int n, int key) {
    int indice = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            indice = i;
            break;
        }
    }
    return indice;
}
// funcion busqueda binaria

int buquedaBinaria(int arr[], int n, int key) {
    int indice =  -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            indice = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return indice;

}
