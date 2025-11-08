#include <iostream>
using namespace std;

int main(){

    int arr[] = {2,6,3,8,4,9,1,9,3,0,1,-3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int tam = size(arr); // válido a partir del Standard C++17


    // Búsqueda lineal
    int clave = 9;
    int ind = -1;

    for (int i = 0; i < n; ++i) { // recorremos el arreglo
        if(arr[i] == clave) {
            ind = i;
        }
    }

    if(ind == -1) {
        cout << "El elemento no se encuentra en el arreglo" << endl;
    } else {
        cout << "El elemento " << clave << " se encuentra en la posición: " << ind << endl;
    }

    
   

    return 0;
}