#include "io.h"

void metodoRecursivo(int valor, int parPositivo){

    if (valor == 0){
        return;
    } 
    
    if (parPositivo % 2 == 0) {
        printf("Sequencia = %d\n", parPositivo);
        metodoRecursivo(valor-1, parPositivo+2);
    } else {
        metodoRecursivo(valor, parPositivo+1);
    }
}

int main(){

    IO_id("Exemplo 611");

    int valor = 0;

    do{
        printf("Digite um valor inteiro:\n");
        scanf("%i", &valor);
    }while(valor<=0);

    metodoRecursivo(valor,6);

    return(0);
}