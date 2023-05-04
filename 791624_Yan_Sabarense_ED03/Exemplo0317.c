#include "io.h"

int main(){
    
    IO_id("Exemplo317");

    int a = 0;
    int b = 0;
    int n = 0;
    int x = 0;
    int count = 0;

    a = IO_readint("Digite o limite inferior do intervalo [a:b]: ");
    b = IO_readint("Digite o limite superior do intervalo [a:b]: ");
    n = IO_readint("Digite a quantidade de valores a serem testados: ");

    for(int i = 0; i < n; i++){
        IO_printf("Digite o %i valor: ", i + 1);
        scanf("%i", &x);   

        if(x >= a && x <= b && x % 3 == 0) {
            count++;
        } 
    }
    IO_printf("Existem %i valores lidos que sao multiplos de 3 e pertencem ao intervalo [%i:%i]\n", count, a, b);

    IO_pause("Apertar ENTER para continuar");
} 