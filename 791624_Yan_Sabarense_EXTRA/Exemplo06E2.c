#include <stdio.h>

int calculateFactorial(int n)
{
    if (n == 0 || n == 1) {
        return 1; // Caso base: fatorial de 0 e 1 é 1
    } else {
        return n * calculateFactorial(n - 1); // Chamada recursiva para calcular o fatorial
    }
}

double calculateE(int n)
{
    if (n == 0) {
        return 1; // Caso base: quando n é zero, retorna 1
    } else {
        int numerator = (2 * n) + 1; // Numerador do termo atual
        int denominator = calculateFactorial(n); // Denominador do termo atual (chamada à função fatorial)
        double term = (double)numerator / denominator; // Calcula o termo atual
        return term + calculateE(n - 1); // Soma o termo atual com o valor de E para n-1
    }
}

int main()
{
    int n;

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    double result = calculateE(n);
    printf("O resultado de e é: %lf\n", result);

    return 0;
}
