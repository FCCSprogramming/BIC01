#include <iostream>
#include <cstring>
using namespace std;


void procesar(char frase[], char procesada[]) {
    int pos = 0;
    for (int i = 0; i < strlen(frase) ; ++i) {
        if (frase[i] != '\0' && frase[i] != ' ') {
            procesada[pos] = frase[i];
        }
    }
    procesada[pos] = '\0';
}

int main(){

    char frase[80] = "CUENTAN DE UN SABIO QUE UN DIA";

    char procesada[80];

    procesar(frase, procesada);

    cout <<procesada <<endl;



    return 0;
}