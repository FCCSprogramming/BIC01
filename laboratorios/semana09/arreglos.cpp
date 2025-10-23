#include <iostream>
using namespace std;

int main(){
    // declaracion de un arreglo
    int notas[15] = {14, 8, 9};
    int ceros[10] = {0}; // inicializando todos los elementos con 0

    //Inicializando elementos 
    // notas[0] = 14;
    // notas[1] = 8;
    // notas[2] = 9;

    //Imprimiendo los elementos del arreglo
    cout << notas[0] <<endl;
    for (int i = 0; i < 15; ++i) {
        cout << notas[i] << " ";
    }

    // Solicitando datos al usuario
    cout << "Ingrese lo elementos del arreglo: " <<endl;
    for (int i = 0; i < 15; ++i) {
        cin >>notas[i];
    }

    return 0;
}