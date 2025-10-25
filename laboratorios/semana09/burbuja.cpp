#include <iostream>
using namespace std;

int main(){

    int arreglo[] = {17,23,5,11};

    int n = sizeof(arreglo)/sizeof(arreglo[0]);

    cout << "Arreglo original: \n";
    for (int i = 0 ; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    //Algoritmo Burbuja (bubbleSort)
    for(int i = 0; i < n - 1; ++i) { //pasadas en el arreglo
        for (int j = 0; j < n - 1 - i; ++j) { // comparaciones
            if(arreglo[j] > arreglo[j+1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }

    }

    cout << "Arreglo ordenado en forma creciente: \n";
    for (int i = 0 ; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;


    return 0;
}