#include "io.h"

double soma_inversos(int n, int count) {

    if (count > n) {
        return 0; // caso base: soma dos inversos dos n primeiros números pares positivos já foi calculada
    }

    double inverso = 1.0 / (count * 2.0); // calcula o inverso do número atual
    return inverso + soma_inversos(n, count + 1); // retorna a soma do inverso do número atual com o resultado da chamada recursiva para o próximo número par
}

int main() {

    int n;
    printf("Digite um valor inteiro positivo: ");
    scanf("%i", &n);

    double resultado = soma_inversos(n, 1); // chama a função recursiva

    printf("A soma dos inversos dos primeiros %i numeros pares a partir de 6 e %.6lf\n", n, resultado);

    return 0;
}
