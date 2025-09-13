#include <iostream>
using namespace std;

int main() {
    // Ingreso de datos
    float precio, precioIncrementado;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    // proceso de datos
    if(precio < 1500) {
        precioIncrementado = precio + 0.11 * precio;
    } else {
        precioIncrementado = precio + 0.8 * precio;
    }

    cout << "El nuevo precio del producto es: " << precioIncrementado <<endl;

    return 0;
}