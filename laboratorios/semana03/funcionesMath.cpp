#include <iostream>
#include <cmath> // Biblioteca de funciones matemáticas
using namespace std;

int main() {
    double num;

    // Calcular raíz cuadrada
    cout << "Ingresa un número para calcular su raíz cuadrada: ";
    cin >> num;
    double raizCuadrada = sqrt(num);
    cout << "Raíz cuadrada de " << num << " = " << raizCuadrada << endl;

    // Calcular potencia
    double base, exponente;
    cout << "\nIngresa la base y el exponente para calcular la potencia: ";
    cin >> base >> exponente;
    double potencia = pow(base, exponente);
    cout << base << " elevado a " << exponente << " = " << potencia << endl;

    // Funciones trigonométricas
    double angulo;
    cout << "\nIngresa un ángulo en radianes: ";
    cin >> angulo;
    cout << "sen(" << angulo << ") = " << sin(angulo) << endl;
    cout << "cos(" << angulo << ") = " << cos(angulo) << endl;
    cout << "tan(" << angulo << ") = " << tan(angulo) << endl;

    // Logaritmos
    cout << "\nIngresa un número para calcular su logaritmo natural y logaritmo base 10: ";
    cin >> num;
    cout << "ln(" << num << ") = " << log(num) << endl;
    cout << "log10(" << num << ") = " << log10(num) << endl;

    // Valor absoluto y redondeos
    cout << "\nIngresa un número decimal para ver funciones de redondeo: ";
    cin >> num;
    cout << "Valor absoluto: " << abs(num) << endl;
    cout << "Redondeo (round): " << round(num) << endl;
    cout << "Redondeo hacia abajo (floor): " << floor(num) << endl;
    cout << "Redondeo hacia arriba (ceil): " << ceil(num) << endl;

    return 0;
}
