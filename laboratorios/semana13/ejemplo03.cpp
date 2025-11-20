#include <iostream>
using namespace std;

void duplicar(int x) {
    x *= 2;
    cout << "[Dentro] x = " << x << endl;
}

int main() {
    int n = 10;
    duplicar(n);
    cout << "[Fuera] n = " << n << endl; // No cambia
    return 0;
}