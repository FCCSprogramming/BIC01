/*
3 Almacena los primeros 50 números de Fibonacci en un arreglo y muéstralos en orden
inverso
*/

#include <iostream>
#include <iomanip>// manipuladores de flujo setprecision() fixed
using namespace std;

int main(){

    long long fibonacci[50] = {1,1};

    for(int i = 2; i < 50; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i -2];
    }

    for(int i = 0; i <50; ++i) {
        cout << fibonacci[49 - i] << " ";
    }
    cout << endl;

    return 0;
}