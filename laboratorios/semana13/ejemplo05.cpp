#include <iostream>
using namespace std;

void incrementarTodos(int arr[], int tam) {
    for (int i = 0; i < tam; i++)
        arr[i]++;
}

int main() {
    int datos[] = {3, 6, 9, 12};

    incrementarTodos(datos, 4);

    cout << "Arreglo modificado: ";
    for (int x : datos) cout << x << " ";
    return 0;
}