#include <iostream>
using namespace std;

int main(){

    for (char filas = 'Z'; filas >= 'A'; --filas) {
        for (char columnas = filas; columnas >= 'A'; --columnas) {
            cout << columnas;
        }
        cout << endl;
        
    }

    return 0;
}