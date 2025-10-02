/*
Implementar un programa que 
a) Registre las notas de los estudiantes
 use una una variable centinela -1 para terminar el bucle
b) Valide las notas ingresadas (0-20)
c) Usando un contador y un acumulador, calcule el promedio de las notas ingresadas
d) Muestre además la cantidad de aprobados (nota >= 10)
*/

#include <iostream>
using namespace std;

int main(){
    float nota;

    int contadorNotas = 0;
    float sumaNotas = 0.0;
    int aprobados = 0;

    cout << "Ingrese la nota del estudiante: (-1 para terminar) ";
    cin >> nota;



    while (nota != -1) {
        if (nota >= 0 && nota <= 20) {
            cout << "Nota registrada: " << nota << endl;
            sumaNotas = sumaNotas + nota; // sumaNotas += nota;
            contadorNotas++; // contadorNotas = contadorNotas + 1;

            if (nota >= 10) {
                aprobados++;
            }
        } else {
            cout << "Nota inválida, debe estar entre 0 y 20" << endl;
        }
        
        cin >> nota;
    }

    // Calculo del promedio
    if (contadorNotas > 0 ) {
        cout << "Promedio: " <<(sumaNotas/contadorNotas) << endl;// 3/2 == 1
    }

    return 0;
}


/* Ejercicio
Implementar un programa que simule una caja de supermercado que va registrando
productos y calcule el total de la compra
a) Registre productos utilizando una varaible centinela 0 y muestre el precio
b) Valide el precio y calcule el precio total usando un contador
c) Muestre además la cantidad de productos comprados
d) Aplique un descuento de 1% si se comprarón más de 5 productos
*/