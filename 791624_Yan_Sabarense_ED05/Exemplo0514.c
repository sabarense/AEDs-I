#include <io.h>
#include <stdio.h>

void numCrescenteDenominador(int quantidade){

    const int numerador = 1;

    printf("Os primeiros %i numeros sao:\n", quantidade);
    for(int i = 1; i <= quantidade; i++){
        printf("Numeros = [%i/%i]\n", numerador, i * 6);
    }

}


int main(){

    int quantidade = 0;
    
    do{
        printf("Digite um valor maior que zero:\n");
        scanf("%i", &quantidade);
        if(quantidade<=0){
            printf("ERRO. Digite um valor maior que zero.\n");
        }
    }while(quantidade<=0);

    numCrescenteDenominador(quantidade);

    return(0);
}
