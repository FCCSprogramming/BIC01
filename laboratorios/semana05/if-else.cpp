/*
ESTRUCTURAS CONDICIONALES: if-else, switch
ESTRUCTURA REPE;
TITIVA: do-while 

Ejemplo ilustrativo

Dato: Nota de un estudiante
Objetivo: clasificar de acuerdo al rango de su nota
Si nota >= 15 ---> excelente
Si nota < 15 Y nota >= 13 ---->  bueno
Si nota <13 Y nota >= 10 --> regular
Si no desaprobado 
*/

#include <iostream> // para entrada y salida de datos
using namespace std;
int main() {
    // ingreso de datos
    double nota;
    cout << "Ingrese la nota: ";
    cin >> nota;

    // Procesamiento 

    

    if (nota >= 15) {
        cout << "Excelente" <<endl;
    } else if (nota >= 13) {
        cout << "Bueno" <<endl;
    } else if (nota >= 10) {
        cout << "Regular" <<endl;
    } else {
        cout << "Desaprobado" << endl;
    }

    return 0;
}


