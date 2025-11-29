#include <iostream>
using namespace std;

long long factorialRecursivo(int n) {
	// Caso base 
	if (n <= 0) {
	   return 1;
	}

	// Caso recursivo
	return n * factorialRecursivo(n-1);

}

int main() {
	
	cout << factorialRecursivo(5) << "\n";
	cout << factorialRecursivo(-2) << "\n";
	cout << factorialRecursivo(8) << "\n";

	 return 0;
}