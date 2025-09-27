#include <iostream>
using namespace std;

int main(){

    double nota;
    char continuar;

    cout << "Ingrese la nota ";
    cin >> nota;

    // Validación de datos
    // do {
    //     if(nota < 0 || nota > 20) {
    //         cout << "La nota debe estar entre 0 y 20" <<endl;
    //         cout << "Vuela ingeresar la nota ";
    //         cin >> nota;
    //     }

    // } while (nota < 0 || nota > 20);



    do {
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

        cout << "Desea continuar? (s) ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    

    return 0;
}