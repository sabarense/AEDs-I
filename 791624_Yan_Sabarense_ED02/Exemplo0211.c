#include "io.h"

int main(){

    IO_id("Exemplo0211");
    int numero = 0;
    numero = IO_readint("Digite um valor inteiro: ");
    if(numero == 0){
        IO_printf("O numero %i e par", numero);
    }else if(numero % 2 == 0){
        IO_printf("O numero %i e par", numero);    
    }else{
        IO_printf("O numero %i e impar", numero);
    }
    return(0);
}