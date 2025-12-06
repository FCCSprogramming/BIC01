/*
Escribir un programa que, al recibir como dato un arreglo bidimensional de tipo cadena
de caracteres, intercambie las filas del arreglo: la última con la primera, la penúltima
con la segunda y así sucesivamente
*/

#include<iostream>
#include <cstring> //strcpy();
using namespace std;


int main() {

	char c[5][30] = {
		      "Primera cadena",
		      "Segunda cadena",
		      "tercera cadena",
		      "Cuarta cadena",
         	      "Primera cadenaaaaaaaaaaaaaaaa"};

	int n = 5;

	// Procedemos a intercambiar las cadenas
	for (int i = 0; i < n/2; ++i) {
		char temp[30];
		strcpy(temp,c[i]);
		strcpy(c[i],c[n-1-i]);
		strcpy(c[n-1-i], temp);
	
	}


	// Imprimir el resultado

	for(int i = 0; i < n; ++i) {
	cout << c[i] <<endl;
	}

	

	
	return 0;
}