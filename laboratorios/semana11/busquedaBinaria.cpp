#include <iostream>
using namespace std;


int main(){

    int arr[] = {1, 2, 4, 7, 8, 9, 11, 17, 19, 23, 30, 34};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int clave = 23;
    int indice  = -1;

    int inicio = 0;
    int fin = n-1;   // (inicio + fin) / 2   <> calcula el cociente entero
    int medio;

    // Búsqueda Binaria

    while(inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (arr[medio] == clave) {
            indice = medio;
            break;
        } else if(arr[medio] < clave) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    



    
    return 0;
}