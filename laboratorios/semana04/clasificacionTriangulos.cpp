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
// se ley� otra variable con >>.

// Solicite al usuario las longitudes de los lados de un tri�ngulo
// Implenete un algoritmo que permita clasificar los tri�ngulos como
// EQUIL�TERO
// ESOSCELES
// ESCALENO
// previamente debe validar que las longitudes definan un tri�ngulo
// Adem�s diga si el tri�ngulo es Rect�ngulo, obtusangulo o acutangulo
int main() {
	float a;
	float b;
	float c;
	float cat;
	float cat1;
	float cat2;
	float hip;
	cout << "Ingrese las longitudes del tri�ngulo: " << endl;
	cin >> a >> b >> c;
	if ((a<b+c) && (b<a+c) && (c<a+b)) {
		if ((a==b) && (b==c)) {
			cout << "El tri�ngulo es equil�tero" << endl;
		} else {
			if ((a==b) || (a==c) || (b==c)) {
				cout << "El tri�ngulo es esosceles" << endl;
			} else {
				cout << "Es tri�ngulo es escaleno" << endl;
			}
		}
		// Clasificando por �ngulos
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
			cout << "El tri�ngulo es rect�ngulo" << endl;
		} else {
			if ((pow(hip,2)>pow(cat,2)+pow(cat2,2))) {
				cout << "El tri�ngulo es obtus�ngulo" << endl;
			} else {
				cout << "El tri�ngulo es acut�ngulo" << endl;
			}
		}
	} else {
		cout << "Las longitudes no definen un tri�ngulo" << endl;
	}
	return 0;
}

