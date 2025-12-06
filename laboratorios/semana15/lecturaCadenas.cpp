#include <iostream>
using namespace std;

int main(){
    char frase[50];
    cout << "Ingrese una frase: ";
    
    cin.getline(frase,50,'@');
    
    cout << "Ud ingreso: " << frase <<endl;

    return 0;
}