#include <iostream>
using namespace std;

int fiboRecursivo(int n) {
	// Caso base
	if(n <= 1)
		return n;

	// Caso recursivo
	return fiboRecursivo(n-1) + fiboRecursivo(n-2);

}


int main() {
	cout << fiboRecursivo(5) <<endl;
	cout << fiboRecursivo(2) << endl;
	return 0;
}
