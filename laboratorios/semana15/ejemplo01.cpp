#include <iostream>
#include <string>
using namespace std;

int main(){

    int arr[4] = {1,2,3,4};
    cout << arr[i] << endl; 

    string conteo = "mañana";

    char nombre2[10];
    char apellidos[20];
    cout << "Ingrese su nombre: " <<endl;
    cin >> nombre2; 

    //limpiar el buffer
    cin.ignore();
    cout << "Ingrese sus apellidos: " <<endl;
    cin.getline(apellidos, 20);



    // Cadena al estilo C
    char nombre[20] = "Aristóteles";// {'J','u','a','n','\0'}
    cout << nombre <<endl;



    // Cadenas al estilo C++

    string nombre1 = "Aristóteles";
    cout << nombre1 <<endl;

    // Arreglo de cadenas C
    char nombres[3][20]; // = {"Patrick","Juan","Pedro"};

    for(int i = 0; i < 3; ++i) {
        cout << "Intrese el alumno " << i + 1 << ": ";
        // cin >>nombres[i];
        cin.getline(nombres[i],20);
    }

    for(int i = 0; i < 3; ++i) {
        cout << "Alumno " << i + 1 << ": ";
        cout << nombres[i] <<endl;
    }

    
    //  Arreglo de Cadenas C++
    string alumnos[3];// = {"Arnaldo","Juan","Carlos Diaz"};
    for(int i = 0; i < 3; ++i) {
        cout << "Ingrese el alumno " << i + 1 << ": ";
        // cin >>nombres[i];
        getline(cin,alumnos[i]); // note la diferencia con cadenas al estilo C
    }

     for(int i = 0; i < 3; ++i) {
        cout << "Alumno " << i + 1 << ": ";
        cout << alumnos[i] <<endl;
    }

 

    return 0;
}