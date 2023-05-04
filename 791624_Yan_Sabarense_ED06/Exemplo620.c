#include <stdio.h>

int fibonacci(int n) {

    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int termoPar(int n) {

    int fib = fibonacci(n);

    if (fib % 2 == 0) {
        return fib;
    } else {
        return termoPar(n+1);
    }
}

int main() {

    int n;
    printf("Digite o valor de n: ");
    scanf("%i", &n);

    printf("O %i termo par da serie de Fibonacci é %i\n", n, termoPar(1 + (n-1)*3));

    return 0;
}

