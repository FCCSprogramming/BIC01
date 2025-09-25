/*
ESTRUCTURAS CONDICIONALES: if-else, switch
ESTRUCTURA REPETITIVA: do-while 
// Dato: Notas de un estudiante
// Objetivo: clasificar de acuerdo al rango de su nota
// si nota >= 15 ---> excelente
// Si nota < 15 Y nota >= 13 ---->  bueno
// Si nota <13 Y nota >= 10 --> regular
// Si no desaprobado 

*/

#include <iostream>
using namespace std;

int main(){

    // Ingreso de datos
    double nota;
    cout << "Ingrese su nota: (0 - 20) ";
    cin >> nota;

    if (nota >= 15) {
        cout << "Excelente" << endl;
    } else if(nota >= 13) {
        cout << "Bueno" <<endl;
    } else if (nota >= 10) {
        cout << "Regular" << endl;
    } else {
        cout << "Desaprobado" <<endl;
    }

    //EJERICIO Reescribir el ejemplo anterior utilizando if-else anidadas 
    // if (nota <= 20) {
    //     if(nota >= 15) {

    //     }
    // }

    return 0;
}