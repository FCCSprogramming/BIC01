/*
4. Escribir una función lógica Vocal que determine
 si un carácter es una vocal
*/

#include <iostream>
using namespace std;

bool esVocal(char ch) {

    char c = tolower(ch); // funcion para convertir un caracter a minuscula


    if (c == 'a' || c == 'e' ||c == 'i' || c == 'o' || c == 'u') {
        return true;
    }

    return false;
}

int main(){

    cout << esVocal('A') <<endl;

    return 0;
}