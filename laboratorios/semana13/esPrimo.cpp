#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int n) {
    if(n <= 1) return false;
    if(n == 2) return false;

    for (int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){

    int n = -2;

    bool resultado = esPrimo(n);

    if(resultado) {
        cout << "El numero " << n << " es primo " << endl;
    } else {
        cout << "El numero " << n << "  NO es primo " << endl;
    }



    return 0;
}