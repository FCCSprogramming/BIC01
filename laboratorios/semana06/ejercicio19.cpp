/*
Realice un programa que obtenga y escriba los términos así como la suma de ellos de
la siguiente sucesión: 2, 7, 10, 15, 18, 23, . . . , 2500.
*/


#include <iostream>
using namespace std;

int main(){

    int inicio = 2;
    int suma = 0;
    bool caso = true;

    while (inicio <= 2500) {
        cout << inicio <<endl;
        suma += inicio;
    
        if (caso)
            inicio += 5;
        else 
            inicio += 3;


        caso = !caso;
    }

    cout << "La suma es: " << suma <<endl; 

    return 0;
}


    // operador ternario
        //inicio += caso ? 5 : 3; 

        