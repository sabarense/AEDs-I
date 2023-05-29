#include <io.h>
#include <stdio.h>

void somaValores(int valor){

    int soma = 0;
    int count = 0;
    int parPositivo = 6;

    while(count<valor){
        if((parPositivo % 2 == 0) && (parPositivo % 5 != 0 )){
            soma = soma + parPositivo;
            count = count + 1;
            printf("Numero a ser acrescentado na soma = %i\n", parPositivo);
        }
        parPositivo++;
    }
    
    printf("Soma = %i", soma);    
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