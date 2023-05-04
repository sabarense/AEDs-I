#include "io.h"

void print_multiplos_6(int n, int count) {

    if (count == n) {
        return; // caso base: já imprimiu n múltiplos de 6
    }

    if(count == 1){
        printf("%i ", 1);
    }

    printf("%d ", count * 6); // imprime o próximo múltiplo de 6
    print_multiplos_6(n, count + 1); // chama a função recursivamente para imprimir o próximo múltiplo
}

int main(){

    int valor = 0;

    do{
        printf("Digite um valor inteiro:\n");
        scanf("%i", &valor);
    }while(valor<=0);

    print_multiplos_6(valor,1);

    return(0);

}
