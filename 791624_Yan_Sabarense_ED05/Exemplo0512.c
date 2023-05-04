#include <io.h>
#include <stdio.h>

void multiploSeisPar(int quantidade){

    printf("Os primeiros %i pares multiplos de 6 sao:\n", quantidade);
    
    for(int i = 1; i <= quantidade; i++){
        printf("Numeros = [%i]\n",i*12);
        
    }
}

int main(){

    int quantidade = 0;
    do{
        printf("Digite um valor inteiro maior que zero:\n");
        scanf("%i", &quantidade);
        if(quantidade <= 0){
            printf("ERRO. Digite um valor maior que zero.\n");
        }
    }while(quantidade <= 0);

    multiploSeisPar(quantidade);

    return (0);
}