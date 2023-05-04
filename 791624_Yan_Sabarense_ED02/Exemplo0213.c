#include "io.h"

int main(){

    IO_id("Exemplo0213");
    int numero = 0;
    numero = IO_readint("Digite um valor inteiro: ");
    if(20 < numero && numero < 45){
        IO_printf("Valor (%i) pertence ao intervalo aberto [20:45]", numero);
    }else{
        IO_printf("Valor (%i) nao pertence ao intervalo aberto [20:45]", numero);
    }
    return(0);
}