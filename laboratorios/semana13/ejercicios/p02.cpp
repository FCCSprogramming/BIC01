/*
2. Escribir una función lógica de dos argumentos enteros, que devuelva true si uno divide
al otro y false en caso contrario.
*/

#include <iostream>
using namespace std;

bool divide(int a, int b) {
    if(b !=0 && a % b == 0){  // b divide a a
        return true;
    }  

    if (a != 0 && b % a == 0){ // a divide a b
        return true;
    }

    return false;
}


// Casos prueba
void prueba(int a, int b) {
    if(divide(a,b)) {
        cout <<"(" << a << ", " << b <<"): " <<  "Un numero divide al otro" <<endl;
    } else {
        cout <<"(" << a << ", " << b <<"): "<< "falso" <<endl;
    }
}


int main(){
    prueba(5,7);
    prueba(0,0);
    prueba(2,2);
    prueba(3,6);
    prueba(8,1);

    return 0;
}