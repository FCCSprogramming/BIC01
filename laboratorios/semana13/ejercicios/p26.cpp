/*
26 Implementar una función que determine si una matriz dada es diagonal. 
una matriz cuadrada es diagonal si sus elementos fuera de la diagonal
principal son todos cero.
*/

#include <iostream>
using namespace std;

bool esDiagonal(int matriz[][3], int n) {
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i != j && matriz[i][j] != 0){
                return false;
            }
        }
    }

    return true;

}

int main(){
    const int TAM = 3;

    int matriz[TAM][TAM] = {1,0,0,0,3,0,0,0,0};

    cout << esDiagonal(matriz, 3);



    return 0;
}