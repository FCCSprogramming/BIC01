/*
Dado las edades de 15 personas, escribir un programa que nos permita calcular
La moda: es el dato que aparece con mayor frecuencia
La mediana: es la dato que aparece en la posición central de un conjunto de datos
ordenado
*/

#include <iostream>
using namespace std;

int main(){
    int A[] = {7,13,17,12,9,13,2,2,7,5,7,7};
    int n = sizeof(A)/sizeof(A[0]);


    //moda
    int moda = A[0];
    int maxRepeticiones = 0;
    for (int i = 0; i < n; ++i) {
        int contador = 0;
        for (int j = 0; j < n; ++j) {
            if(A[j] == A[i]) {
                contador++;
            }   
        }
        if(contador > maxRepeticiones) {
            maxRepeticiones = contador;
            moda = A[i];
        }
    }
    cout << "La moda es: " << moda <<endl;


    // Mediana
    double mediana =0.0;
    //ordenando el arreglo
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }

    //A = [1,2,3] n = 3 --->  A[n/2]
    // A = [1,2,3,4] n = 4 --> A[]
     if(n%2 == 1) {
        mediana = A[n/2];
    } else {
        mediana = (A[n/2 - 1] + A[n/2])/2.0;
    }
    

    return 0;
}