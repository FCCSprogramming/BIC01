/*
4. Crea un programa que permita decidir si dos arreglos son idénticos. Deberás comparar
elemento por elemento y mostrar un veredicto final.También debe manejar el caso en
el que los arreglos tengan tamaño diferentes
*/

#include <iostream>
using namespace std;

int main(){

    int arr1[] = {2,5,7};
    int arr2[] = {4,5,7};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    if (n1 != n2) {
        cout << "Los arreglos son diferentes " <<endl;
    } else {
        bool esIgual = true;
        for(int i = 0; i < n1; ++i) {
            if (arr1[i] != arr2[i]) { // comparamos los elementos
                esIgual = false;
                break;
            }
        }

        if (esIgual) {
            cout << " Los arreglo son iguales" <<endl;
        } else {
            cout << "los arreglos son diferentes" <<endl;
        }

    }


    return 0;
}