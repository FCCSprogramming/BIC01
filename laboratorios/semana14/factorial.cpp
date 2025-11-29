#include <iostream>
using namespace std;

/*
4! = 4*3*2*1*0 = 4*3!
3! = 3*2*1*0
2! = 2*1*0
1! = 1*0
0! = 1  // case base

n! = n * (n-1)!
*/

int factR(int n) {
    cout << "Llamada f(" << n << ")" << endl; 
    // caso base
    if(n == 0) {
        cout << "Caso base -> retorna 1" <<endl; 
        return 1;
    } 

    int resultado = n*factR(n-1);
    
    cout << " Retorna f(" << n << ")" << resultado << endl;

    return resultado;
}
    



int main(){
    //cout << factR(5) <<endl;
    //cout << factR(0) <<endl;
    cout << factR(-2) <<endl;

    return 0;
}