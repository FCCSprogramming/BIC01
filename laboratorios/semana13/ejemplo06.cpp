#include <iostream>
using namespace std;

void transponer(int m[][3], int filas) {
    cout << "Matriz transpuesta:" << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < filas; i++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    transponer(matriz, 2);

    return 0;
}