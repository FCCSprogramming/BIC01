#include <iostream> 
using namespace std;

int main() {
    // Declaración de variables
    // = SIGNIFICA ASIGNACIÓN (a la variable a le asigno el valor  10)

    int a = 10; // Variables enteras
    int b = 3; 

    float x = 5.5; // Variables de punto flotante
    double y = 2.0; 

    bool flag = true;         // Variable booleana


    // Operadores Aritméticos
    cout << "Operadores Aritméticos:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (división entera)" << endl; // cuando a y b son enteros
    cout << "a % b = " << (a % b) << " (módulo)" << endl; // resto de la división entera
    cout << "x / y = " << (x / y) << " (división con decimales)" << endl; // al menos x o y deben ser de punto flotante

    // Operadores Relacionales
    cout << "\nOperadores Relacionales:" << endl;
    cout << "a == b: " << (a == b) << endl;   // operador de igualdad
    cout << "a != b: " << (a != b) << endl;  // diferente de 
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Operadores Lógicos
    cout << "\nOperadores Lógicos:" << endl;
    cout << "flag && (a > b): " << (flag && (a > b)) << endl;
    cout << "flag || (a < b): " << (flag || (a < b)) << endl;
    cout << "!flag: " << (!flag) << endl;

    // Operadores de asignación abreviados
    cout << "\nOperadores de Asignación abreviados:" << endl;
    int c = a; // asignación normal
    cout << "c = " << c << endl;
    c += b;  // equivale a: c = c + b
    cout << "c += b -> c = " << c << endl;
    c -= b;  // equivale a: c = c - b
    cout << "c -= b -> c = " << c << endl;
    c *= b;  // equivale a: c = c * b
    cout << "c *= b -> c = " << c << endl;
    c /= b;  // equivale a: c = c / b
    cout << "c /= b -> c = " << c << endl;
    c %= b;  // equivale a: c = c % b
    cout << "c %= b -> c = " << c << endl;

    // Operadores de incremento y decremento
    cout << "\nOperadores de Incremento y Decremento:" << endl;
    cout << "a = " << a << endl;
    cout << "a++ = " << a++ << " (post-incremento)" << endl;
    cout << "Ahora a = " << a << endl;
    cout << "++a = " << ++a << " (pre-incremento)" << endl;
    cout << "a-- = " << a-- << " (post-decremento)" << endl;
    cout << "Ahora a = " << a << endl;
    cout << "--a = " << --a << " (pre-decremento)" << endl;

    return 0;
}
