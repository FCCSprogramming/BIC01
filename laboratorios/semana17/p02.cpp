#include <iostream>
#include <cstring>
using namespace std;


// Invertir cadena
// Ingreso: Hola  
//            Ha
//            aloH 
// Salida : aloH

// 1. PRIMERA FORMA: usando arreglo de caracteres
void invertirCadena(char destino[], int inicio, int fin) {
    // CASO BASE
    if (inicio >= fin) {
        return;
    }
    swap(destino[fin], destino[inicio]);
    // destino[inicio] = original[fin];
    // destino[fin] = original[inicio];

    //CASO RECURSIVO
    invertirCadena(destino,inicio + 1, fin - 1);

}

// 2: SEGUNDA FORMA, usando string

// hola
string invertir(string  s) {
    // CASO BASE
    if (s.size() <= 1) {
        return s;
    }

    // CASO RECURSIVO
    return invertir(s.substr(1)) + s[0]; 
}









void modificarFrase(char cad[]){
    bool nuevaPalabra = true;
    for(int i = 0; cad[i] != '\0'; ++i) {
       if (cad[i] == ' '){
        nuevaPalabra = true;
       } else {
        if (nuevaPalabra) {
            char c = tolower(cad[i]);
            bool esVocal = (c == 'a') ||(c == 'e') ||(c == 'i')|| (c == 'o') ||(c == 'a');
            if (!esVocal) {
                //reemplazar palabra por XXX

                //COMPLETAR

            }
        }
       } 
    }
}





int main(){


    char frase[200];
    
    cout << "Ingrese una cadena: ";
    cin.getline(frase, 200);

    string cad = "Hola Mundo";


    cout << "\n REPORTE FINAL \n";

    cout << "Frase original\n";
    cout << frase << endl;

    cout << "Frase original\n";
    cout << cad <<endl;



    char destino[200];
    strcpy(destino,frase); //agregar el encabezado <cstring>

    int len = strlen(frase);
    invertirCadena(destino, 0, len-1);
    cout << "Frase invertida:  " << destino << endl;

    cout << "string invertido: " << invertir(cad) << endl;

    return 0;
}

