#include <iostream>
using namespace std;

const int TAM1 = 30;


int main(){

    // Declaracion de un arreglo
    float temperaturas[20];

    // los índices para acceder a los elementos de una arreglo 
    // comienzan en 0
    // cout << temperaturas[0] <<endl;  // puede contener cualquier dato

    // Declarando e inicializando un arreglo
    int notas[5] = {11,9,13,17,5};
    
    // imprimir el arreglo
    for(int i = 0; i < 5; ++i) {
        cout << notas[i] << " ";
    }
    cout<< endl;

    int notasParcial[5];
    cout << "Ingrese las 5 notas del Parcial:\n ";

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese la nota  " << i +1 << ": ";
        cin >> notasParcial[i];
    }


    int notasFinal[] = {13,15,16,11,10,13,12,13,5,7};

    //recuperando el tamaño de notasFinal
    int n = sizeof(notasFinal)/sizeof(notasFinal[0]);

    for (int i = 0 ; i < n; ++i) {
        cout << notasFinal[i]  << " ";
    }
    cout << endl;

    // ERROR 
    int m;
    cout << "Ingrese el tamaño del arreglo";
    cin >> m;
    int indefinido[m];

    // FORMA CORRECTA
    const int TAM = 6;
    int correcto1[TAM];

    int correcto2[TAM1];

    int arr[10] = {1,2,3}; // el compilador completa los demas elementos con ceros

    int arr1[20] = {0}; // inificializa todos los elementos del arreglo en cero

    return 0;
}