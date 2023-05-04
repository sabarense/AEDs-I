#include "io.h"

int soma_pares(int atual, int n) {

    if (n == 0) {
        return 0; // caso base: soma dos valores pares já terminou
    }

    if (atual % 2 == 0) {
        return atual + soma_pares(atual + 6, n - 1); // se o número atual é par, adiciona à soma e chama a função para o próximo número
    } else {
        return soma_pares(atual + 6, n); // se o número atual é ímpar, chama a função para o próximo número sem adicionar à soma
    }
}

int main(){

    int valor = 0;

    do{
        printf("Digite um valor inteiro:\n");
        scanf("%i", &valor);
    }while(valor<=0);

    printf("Soma dos primeiros %i valores pares positivos comecando em 6: %i\n", valor, soma_pares(6, valor));

    return 0;
}
