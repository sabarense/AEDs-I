#include <stdio.h>

void multiploNoveImpar(int quantidade){

    printf("Os primeiros %i valores impares multiplos de nove sao:\n", quantidade);
    int arr[quantidade];
    int i = 1;
    for (i = quantidade - 1; i >= 0 ; i--) {
        arr[i] = (2 * i + 1) * 9; 
        printf("%i ", arr[i]);
    }
}

int main(){

    int quantidade = 0;

    do{
        printf("Digite um valor maior que zero:\n");
        scanf("%i", &quantidade);
        if(quantidade <= 0){
            printf("ERRO. Digite um valor maior que zero.\n");
        }
    }while(quantidade <= 0);

    multiploNoveImpar(quantidade);

    return 0;
}