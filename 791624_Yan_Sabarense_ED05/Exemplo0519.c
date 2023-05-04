#include <io.h>
#include <stdio.h>
#include <math.h>

void adicaoNaturais(int valor){

    int i = 6;
    int expoente = 2;
    int count = 0;
    int soma = 0;

    while(count < valor){
        i = pow(i, expoente);
        soma = soma + i;
        count = count + 1;
        i = i + 1;
    }

    printf("Valor do i = %i\n", i);
    printf("Soma = %i", soma);
}


int main(){

    int valor = 0;
    do{
        printf("Digite um valor maior que zero:\n");
        scanf("%i", &valor);
        if(valor<=0){
            printf("ERRO. Digite valor maior que zero.\n");
        }
    }while(valor<=0);

    adicaoNaturais(valor);
    
    return(0);
}