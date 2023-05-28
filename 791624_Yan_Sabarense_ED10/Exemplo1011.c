#include "io.h"

int gerarRandomInt(int inferior, int superior){
        
    return (rand() % (superior - inferior + 1)) + inferior;
}

int lerQtd(){

    int n = 0;
    printf("Digite a qtd de elementos a serem gerados:\n");
    scanf("%d", &n);
    return n;
}

int main(){

    int inferior = 0;
    int superior = 0;

    do{
        printf("Digite o limite inferior:\n");
        scanf("%d", &inferior);
        getchar();

        printf("Digite o limite superior:\n");
        scanf("%d", &superior);
        getchar();
    }while(inferior >= superior);

    int quantidade = lerQtd();
    gerarRandomInt(inferior, superior);

    printf("Numeros gerados:\n");
    for (int i = 0; i < quantidade; i++) {
        int numero = gerarRandomInt(inferior, superior);
        printf("[%d]", numero);
    }
}