#include <iostream>   
#include <cstdlib>    // Para usar rand() y srand()
#include <ctime>      // Para usar time() y obtener una semilla aleatoria

using namespace std;

int main() {
    // Semilla basada en el tiempo actual para que los números cambien cada vez que ejecutes el programa
    srand(time(0));  // Sin esto, rand() generaría los mismos números cada vez

    // Generar un número aleatorio (entre 0 y RAND_MAX)
    int aleatorio = rand();
    cout << "El valor de RAND_MAX es: " << RAND_MAX << endl;
    cout << "Número aleatorio (entre 0 y RAND_MAX): " << aleatorio << endl;

    // Generar un número aleatorio entre 0 y 9
    int num0_9 = rand() % 10;  // % 10 -> valores posibles: 0 a 9
    cout << "Número aleatorio entre 0 y 9: " << num0_9 << endl;

    // Generar un número aleatorio entre 1 y 100
    int num1_100 = rand() % 100 + 1;
    cout << "Número aleatorio entre 1 y 100: " << num1_100 << endl;

    // Generar un número aleatorio entre un rango personalizado
    int min, max;
    cout << "\nIngresa el valor mínimo del rango: ";
    cin >> min;
    cout << "Ingresa el valor máximo del rango: ";
    cin >> max;

    if (min < max) {
        int personalizado = rand() % (max - min + 1) + min;
        cout << "Número aleatorio entre " << min << " y " << max << ": " << personalizado << endl;
    } else {
        cout << "Error: el valor mínimo debe ser menor que el máximo." << endl;
    }
    
    return 0;
}
