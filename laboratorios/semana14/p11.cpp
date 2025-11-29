/*
Implementa una función recursiva que recorra un vector de enteros e imprima sus
elementos en orden inverso.
Ejemplo: imprimirInverso([1,2,3,4]) → 4 3 2 1
*/

#include <iostream>
using namespace std;

void imprimirInverso(int arr[], int n, int i) {
    //Caso base
    if (i == n)
        return;

    imprimirInverso(arr,n, i+1);
    cout << arr[i] << endl;
}

int main(){
    int arr[5]={2,7,3,9,1};

    imprimirInverso(arr,5,0);
    return 0;
}


