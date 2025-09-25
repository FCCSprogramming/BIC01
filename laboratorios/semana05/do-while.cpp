#include <iostream>
using namespace std;

int main(){

    double nota;
    char continuar;

    do {
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

        cout << "Desea continuar ?: s /n: ";
        cin >> continuar; 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}