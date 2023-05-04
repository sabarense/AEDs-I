#include <io.h>
#include <stdio.h>
#include <stdbool.h>

void multiploSeis(int n){

    int multiplo = 0;
    printf("Os primeiros %i multiplos de 6 sao:\n", n);

    for(int i = 0; i<n; i++){
        multiplo = multiplo + 6;
        printf("Numeros = [%i]\n", multiplo);
    }
}

int main(){

    int n = 0;

    do{
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%i", &n);
        if(n <= 0){
            printf("ERRO. Tente um valor maior que zero\n");
        }

    }while(n <= 0);

    multiploSeis(n);

    return(0);

}