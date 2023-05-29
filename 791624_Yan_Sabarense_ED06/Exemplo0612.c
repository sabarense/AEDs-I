#include "io.h"

void recurs(int par, int valor)
{
    if(valor > 0)
    {
        printf("Sequencia = %d\n", par*valor);
        recurs(par, valor-1);
    }
}

void metodoRecursivo(int valor){

    recurs(6, valor);
}

int main(){

    int valor = 0;
    do{
        printf("Digite um valor inteiro:\n");
        scanf("%i", &valor);
    }while(valor<=0);

    metodoRecursivo(valor);
    
}