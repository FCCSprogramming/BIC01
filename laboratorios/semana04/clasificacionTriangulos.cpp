// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Solicite al usuario las longitudes de los lados de un triángulo
// Implenete un algoritmo que permita clasificar los triángulos como
// EQUILÁTERO
// ESOSCELES
// ESCALENO
// previamente debe validar que las longitudes definan un triángulo
// Además diga si el triángulo es Rectángulo, obtusangulo o acutangulo
int main() {
	float a;
	float b;
	float c;
	float cat;
	float cat1;
	float cat2;
	float hip;
	cout << "Ingrese las longitudes del triángulo: " << endl;
	cin >> a >> b >> c;
	if ((a<b+c) && (b<a+c) && (c<a+b)) {
		if ((a==b) && (b==c)) {
			cout << "El triángulo es equilátero" << endl;
		} else {
			if ((a==b) || (a==c) || (b==c)) {
				cout << "El triángulo es esosceles" << endl;
			} else {
				cout << "Es triángulo es escaleno" << endl;
			}
		}
		// Clasificando por ángulos
		if ((a>=b) && (a>=c)) {
			hip = a;
			cat1 = b;
			cat2 = c;
		} else {
			if ((b>=a) && (b>=c)) {
				hip = b;
				cat1 = a;
				cat2 = c;
			} else {
				hip = c;
				cat1 = a;
				cat2 = b;
			}
		}
		if ((pow(hip,2)==pow(cat,2)+pow(cat2,2))) {
			cout << "El triángulo es rectángulo" << endl;
		} else {
			if ((pow(hip,2)>pow(cat,2)+pow(cat2,2))) {
				cout << "El triángulo es obtusángulo" << endl;
			} else {
				cout << "El triángulo es acutángulo" << endl;
			}
		}
	} else {
		cout << "Las longitudes no definen un triángulo" << endl;
	}
	return 0;
}

