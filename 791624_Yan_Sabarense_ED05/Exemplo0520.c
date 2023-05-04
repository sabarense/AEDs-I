#include "io.h"

void somaInversos(int quantidade){

    int denominador = 6;
    double soma = 0;
    double fracao = 0;
    for(int i = 0; i < quantidade; i++){
        fracao = 1.0/denominador;
        soma += fracao;
        printf("Adicionando 1/%d = %lf, soma parcial = %lf\n", denominador, fracao, soma);
        denominador++;
    }
    printf("Soma = %lf", soma);
}

int main(){
    
    int quantidade = 0;
    do{
        printf("Digite uma quantidade maior que zero:\n");
        scanf("%i", &quantidade);
        if(quantidade<=0){
            printf("ERRO. Digite quantidade maior que zero.\n");
        }
    }while(quantidade<=0);

    somaInversos(quantidade);
    return 0;
}
