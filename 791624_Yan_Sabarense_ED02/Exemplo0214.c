#include "io.h"

int main(){

    IO_id("Exemplo0214");
    int numero = 0;
    numero = IO_readint("Digite um valor inteiro: ");
    if(15 <= numero && numero <= 50){
        IO_printf("Valor (%i) pertence ao intervalo fechado [15:50]", numero);
    }else{
        IO_printf("Valor (%i) nao pertence ao intervalo fechado [15:50]", numero);
    }
    return(0);
}