#include <iostream>
using namespace std;

// uso de switch
int main(){
    int opcion;
    cout << "SEleccione una opcion: " << endl;
    cout << "1. Jugar " << endl;
    cout << "2. Ver puntajes " << endl;
    cout << "3. Salir " << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Iniciando juego ..." <<endl;
            // implementar un juego simple
            break;
        case 2:
            cout<< "Mostrando puntajes..." <<endl;
            // implementar lista de puntajes
            break;
        case 3: 
            cout << "Saliendo del programa..."  <<endl;
            break;
        default:
            cout << "Opcion ingresada es inválida" <<endl;
            break;
    }

    // EJERCICIO: Reescriba este ejemplo utilizando if-else

    return 0;
}