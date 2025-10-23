#include <iostream>
using namespace std;

int main(){
    //Algoritmo burbuja
    //int a[]; //ERROR
    int arreglo[] = {17,23,5,11};

    int n = sizeof(arreglo)/sizeof(arreglo[0]);

    //Arreglo original
    cout << "Arreglo original: " <<endl;
    for (int i = 0; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < n - 1; ++i) { //numero pasadas
        for (int j = 0; j < n - 1  - i; ++j) { // comparaciones
            if (arreglo[j] > arreglo[j+1]) { // intercambiar
                int temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }

    //Arreglo ordenado
    cout << "Arreglo ordenado en forma creciente: " <<endl;
    for (int i = 0; i < n; ++i) {
        cout << arreglo[i] << " ";
    }


    

    return 0;
}