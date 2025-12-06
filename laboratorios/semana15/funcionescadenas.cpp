#include <iostream>

//Cadenas al estilo C
#include <cstring> // strlen, strcpy, strcat, strcmp

//#include <string> // Cadenas al estilo C++

using namespace std;

int main() {

    // --- 1. strlen ---
    char nombre[] = "Andre";
    cout << "1. strlen(nombre) = " << strlen(nombre) << "\n"; 
    // Longitud = 5 (no cuenta el carácter nulo)

    // --- 2. strcpy ---
    char a[50];
    char b[] = "Hola";

    strcpy(a, b);  // copia "Hola" a a[]
    cout << "2. strcpy(a, b) -> a = " << a << "\n";

    // --- 3. strcat ---
    char saludo[50] = "Hola";
    char extra[] = " Mundo";

    strcat(saludo, extra); // concatena
    cout << "3. strcat(saludo, extra) -> " << saludo << "\n";

    // --- 4. strcmp ---
    char s1[] = "Casa";
    char s2[] = "Casa";
    char s3[] = "Perro";

    cout << "4. strcmp(s1, s2) = " << strcmp(s1, s2) << " (son iguales)\n";
    cout << "   strcmp(s1, s3) = " << strcmp(s1, s3) << " (s1 < s3)\n";
    cout << "   strcmp(s3, s1) = " << strcmp(s3, s1) << " (s3 > s1)\n";

    return 0;
}