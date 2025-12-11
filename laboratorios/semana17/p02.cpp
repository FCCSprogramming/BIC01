#include <iostream>
#include <cstring>
using namespace std;

// Invertir cadena
// Hola   ----> aloH
void invertirCadena(char original[], char destino[], int inicio, int fin) {
    //Caso Base
    if (inicio > fin)
        return;

    destino[inicio] = original[fin];
    destino[fin] = original[inicio];
    
    // Caso recursivo
    invertirCadena(original, destino, inicio + 1, fin -1);

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

    cout << "\n REPORTE FINAL \n";

    cout << "Frase original\n";
    cout << frase << endl;

    char destino[200];

    int len = strlen(frase);
    invertirCadena(frase,destino, 0, 3);

    cout << "Frase invertida " << destino << endl;

    return 0;
}