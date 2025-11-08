#include <iostream>
using namespace std;


int main(){

    int arr[] = {1, 2, 4, 7, 8, 9, 11, 17, 19, 23, 30, 34};
    

    int n = size(arr); // funciona a partir de C++17

    // Búsqueda Binaria
    int clave = 17;
    int ind = -1;

    int inicio = 0;
    int medio;
    int fin = n-1;

    while (inicio <= fin) {
        medio = (inicio + fin)/2;
        if(arr[medio] == clave) {
            ind = medio;
            break;
        } else if (arr[medio] < clave) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if(ind == -1) {
        cout << "El elemento no se encuentra en el arreglo" << endl;
    } else {
        cout << "El elemento " << clave << " se encuentra en la posición: " << ind << endl;
    }



    
    return 0;
}