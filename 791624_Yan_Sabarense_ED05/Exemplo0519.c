#include <io.h>
#include <stdio.h>
#include <math.h>

void adicaoNaturais(int valor){

    int i = 6;
    int expoente = 2;
    int count = 0;
    int soma = 0;

    while(count < valor){
        soma = soma + pow(i, expoente);
        printf("Numero %i elevado a %i\n",i,expoente);
        i = i + 1;
        count = count + 1;
    }
    printf("Soma dos numeros elevados a %i = %i",expoente, soma);
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