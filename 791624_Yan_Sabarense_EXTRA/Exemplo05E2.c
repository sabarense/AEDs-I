#include "io.h"

int leInteiro(){

    int n = 0;
    do{
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("ERRO.Digite um valor inteiro maior que 0. ");
        }
    }while(n <= 0);
    return n;
}

void calculaExpressaoFatorial(int valor){

    double resultado = 1.0;
    double fatorial = 1.0;

    for (int i = 2; i <= valor; i++) {
        fatorial *= i - 1;
        resultado *= (1.0 + (double)i / fatorial);
    }
    printf("O resultado da expressao f(%d) = %.4lf\n", valor, resultado);     
}

int main(){

    int lerInteiro = leInteiro();
    calculaExpressaoFatorial(lerInteiro); 

}