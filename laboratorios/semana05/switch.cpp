#include <iostream>
using namespace std;

/*

*/

// uso de switch
int main(){
    int opcion;
    cout << "Seleccione una opción: " <<endl;
    cout << "1. Jugar " << endl;
    cout << "2. Para ver su puntaje " << endl;
    cout << "3. Salir" <<endl;

    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Iniciando el juego..." <<endl;
            // implementar aquí el juego
            break;
        case 2:
            cout << "Mostrando puntajes..." << endl;
            break;
        case 3:
            cout << "Saliendo del programa..." <<endl;
            break;
        default:
            cout << "Error, opción inválida" <<endl;
            break;
    }

    // EJERCICIO: Implementar este ejemplo, usando if-else


    return 0;
}