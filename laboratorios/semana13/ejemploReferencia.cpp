#include <iostream>
using namespace std;

void suma(int arr[], int n, int & sumaTotal){
    for(int i = 0; i < n; ++i) {
        sumaTotal += arr[i];
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};

    int sumT = 0;

    suma(arr, 5, sumT);

    cout << "El valor de la suma es: " << sumT <<endl;



    return 0;
}