#include <io.h>
#include <stdio.h>

void somaValores(int valor){

    int denominador = 0;
    double somaFracao = 0;
    int count = 0;
    int numerador = 1;
    int parPositivo = 6;

    while(count<valor){
        if((parPositivo % 2 == 0) && (parPositivo % 5 != 0 )){
            denominador = denominador + parPositivo;
            count = count + 1;
            somaFracao = somaFracao + (double)numerador/denominador;  
            printf("[%i]/[%i]\n",numerador, denominador);
        }
        parPositivo++;
    }
    printf("Soma = %lf", somaFracao);    
}


int main(){

    int valor = 0;

    do{
        printf("Digite um valor maior que zero:\n");
        scanf("%i",&valor);
        if(valor<=0){
            printf("ERRO. Digite um valor maior que zero.\n");
        }
    }while(valor<=0);

    somaValores(valor);

    return(0);
}