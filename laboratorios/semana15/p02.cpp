/* Escribir un programa que al recibir como datos una 
cadena de caracteres y un carácter, determine cuántas 
veces se encuentra el carácter en la cadena */

#include<iostream>
using namespace std;

int main() { 

	
	
	string s; 

	cout << "Ingrese una cadena: ";

	getline(cin,s);

	char ch;
	cout << "Ingrese el caracter a contar: ";
	cin >> ch;

	//Ahora contamos los caracteres
	int cont = 0;
	int len = s.size();

	for(int i = 0; i < len; ++i) {
		if (s[i] == ch){
			cont++;
		}
	}

	cout << "El caracter" << ch << " aparece " << cont << " veces" <<endl;
	return 0;
}

