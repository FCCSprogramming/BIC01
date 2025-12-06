#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 256; ++i) {
        cout << setw(3) << i << " -> " << (char)i << endl;
    }
}