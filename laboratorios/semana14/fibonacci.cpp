#include <iostream>
using namespace std;

/*
0 1 // casos base
1
2
3
5
*/

// memoizacion: Optimizar implementacion recursivas
/*
fibo(5) = fibo(4) + fibo(3)
fibo(4) = fibo(3) + fibo(2)
fibo(3) = fibo(2) + fibo(1)
fibo(2) = fibo(1) + fibo(0)
*/

int fiboR(int n) {
    if(n <= 1){
        return n;
    }

    return fiboR(n-1) + fiboR(n-2);
}


int main(){

    return 0;
}