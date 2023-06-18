#include <stdio.h>

double calculateFunction(double x, int n)
{
    if (n == 0) {
        return 1; // Caso base: quando n é zero, retorna 1
    } else {
        double term = pow(x, (2 * n) + 1); // Calcula o termo atual
        return term + calculateFunction(x, n - 1); // Soma o termo atual com o valor da função para n-1
    }
}

int main()
{
    double x;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double result = calculateFunction(x, n);
    printf("O resultado da função f(x, n) é: %lf\n", result);

    return 0;
}
