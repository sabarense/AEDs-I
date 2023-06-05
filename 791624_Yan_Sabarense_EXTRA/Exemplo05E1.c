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

void calculaFatorial(int valor){

    int fatorial = 1;
    for (int i = valor; i > 1; i--) {
        fatorial *= i;
    }
    printf("%d! = %d\n", valor, fatorial);        
}

int main(){

    int lerInteiro = leInteiro();
    calculaFatorial(lerInteiro); 

}