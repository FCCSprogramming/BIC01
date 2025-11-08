#include <iostream>
using namespace std;


int main(){

    int matriz[2][3] ={{1,2,3},
                       {4,5,6}};
    
    // IMPRIMIR  MATRIZ
    for (int i = 0; i < 2; ++i) {  //recorremos filas
        for(int j = 0; j < 3; ++j) { //recorremos columnas
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}