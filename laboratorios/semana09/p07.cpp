/*
Crea un programa que genere un arreglo de 10 números aleatorios entre 1 y 100, luego
lo muestre, lo ordene de menor a mayor y muestre el resultado final.
*/

#include <iostream>
#include <cstdlib> //srand() rand()
#include <ctime> // time()
using namespace std;

// Ejemplo de funcion
// void imprimirArreglo(int arr[], int n) {
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main(){
    int aleatorios[10];

    srand(time(0)); // semilla aleatorio
    for(int i = 0 ; i < 10; ++i) {
        aleatorios[i] = 1 + rand() % 100;
    }

    cout << "Arreglo original:\n ";
    for (int i = 0; i < 10; ++i) {
        cout << aleatorios[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (aleatorios[j] > aleatorios[j + 1]) {
                swap(aleatorios[j], aleatorios[j + 1]);
            }
        }
    }

    cout << "Arreglo ordenado:\n ";
    for (int i = 0; i < 10; ++i) {
        cout << aleatorios[i] << " ";
    }
    cout << endl;

    return 0;
}