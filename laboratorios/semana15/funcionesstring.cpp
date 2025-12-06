#include <iostream>
#include <string>

using namespace std;

int main() {

    // --- 1. size() ---
    string nombre = "Andre";
    cout << "1. nombre.size() = " << nombre.size() << "\n";
    // Longitud = 5

    // --- 2. substr(i, n) ---
    string palabra = "Programacion";
    string sub = palabra.substr(0, 7); // "Programa"
    cout << "2. palabra.substr(0,7) -> " << sub << "\n";

    // --- 3. find(x) ---
    string texto = "Hola Mundo";
    size_t pos = texto.find("Mundo");

    if (pos != string::npos)
        cout << "3. 'Mundo' encontrado en posicion: " << pos << "\n";
    else
        cout << "3. No encontrado\n";

    // --- 4. append(x) ---
    string saludo = "Hola";
    saludo.append(" a todos");
    cout << "4. saludo.append(...) -> " << saludo << "\n";

    // --- 5. Operador + ---
    string a = "C++ ";
    string b = "moderno";
    string c = a + b;
    cout << "5. a + b -> " << c << "\n";

    // --- 6. compare(t) ---
    string s1 = "Casa";
    string s2 = "Casa";
    string s3 = "Perro";

    cout << "6. s1.compare(s2) = " << s1.compare(s2) << " (iguales)\n";
    cout << "   s1.compare(s3) = " << s1.compare(s3) << " (s1 < s3)\n";
    cout << "   s3.compare(s1) = " << s3.compare(s1) << " (s3 > s1)\n";

    return 0;
}