#include <iostream>
using namespace std;

int main(){

    int arr[] = {2,6,3,8,4,9,1,9,3,0,1,-3};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    // Búsqueda lineal
    int clave = 11;
    int indice = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == clave) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        cout << "El elemento " << clave << " no se encuentra en el arreglo\n";
    } else {
        cout << "El elemento " << clave << " se encuentra en la posición " << indice << endl;
    }

    return 0;
}