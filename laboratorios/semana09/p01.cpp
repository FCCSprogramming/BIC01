/*
Escribe un programa que pida al usuario 5 números reales y luego los
muestre en orden inverso.
*/

#include <iostream>
using namespace std;

int main(){
    const int N = 5;
    double A[N];

    cout << "Ingrese " << N << " numeros reales:\n ";
    
    // Almacenamos los datos en un arreglo
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese el numero  " << i +1 << ": ";
        cin >> A[i];
    }

    //imprimiendo el arreglo 
     for (int i = 0; i < N; ++i) {
        cout << A[N- 1- i] << " ";
    }
    cout << endl;

    return 0;
}