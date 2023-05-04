#include <io.h>
#include <stdio.h>
#include <math.h>

void numCrescenteExpoenteDenominador(double valor){

    const int numerador = 1;
    int expoente = 0;
    printf("Os primeiros %lf valores sao:\n", valor);

    for(int i = 1; i <= valor; i++){
        printf("Numeros = [%i/%lf]\n", numerador, pow(valor,expoente));
        expoente = expoente +1;
    }
}

int main(){

    double valor = 0.0;

    do{
        printf("Digite um valor maior que zero:\n");
        scanf("%lf",&valor);
        if(valor <= 0.0){
            printf("ERRO. Digite um valor maior que zero.\n");
        }
    }while(valor <= 0.0);

    numCrescenteExpoenteDenominador(valor);   
    
    return(0);
}