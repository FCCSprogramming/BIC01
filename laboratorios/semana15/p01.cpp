/*
Escribir un programa que al recibir como dato una cadena de caracteres lo escriba en
forma inversa
*/
#include<iostream>
#include <cstring> // strlen(), strcmp(), strcat() 
using namespace std;

int main(){

	char cad[50] = "Bienvenidos a BIC01";

	int len = strlen(cad);

	for(int i = len - 1; i>=0; --i) {
		cout << cad[i]; 

	}

	


	return 0;
}