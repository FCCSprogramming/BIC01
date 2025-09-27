/*
If-else anidado Escribe un programa que reciba tres números y determine si pueden
ser longitudes de los lados de un triángulo. En caso afirmativo, clasifica el triángulo
como equilátero, isósceles o escaleno
*/
// Código fuente , tiene extensión .cpp

#include <iostream>
using namespace std;

int main(){
    //declarando variables:
    double a;
    double b;
    double c;

    cout << "Ingrese la primera longitud: ";
    cin >> a;

    cout << "Ingrese la segunda longitud: ";
    cin >> b;

    cout << "Ingrese la tercera longitud: ";
    cin >> c;

    if (a + b > c and a + c > b and  b +  c > a) {
        if (a == b and b == c) {
            cout << "El triángulo es equilátero" <<endl;
        } else if (a == b or b == c or a == c) {
            cout << "El triángulo es isosceles" <<endl;
        } else {
            cout << "El triángulo es escaleno" <<endl;
        }
    } else {
        cout << "Las longirudes no definen un triángulo" <<endl;
    }


    return 0;
}