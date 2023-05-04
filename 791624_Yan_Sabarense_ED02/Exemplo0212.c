#include "io.h"

int main(){

    IO_id("Exemplo0212");
    int numero = 0;
    numero = IO_readint("Digite um valor inteiro: ");
    if(numero == 0){
        IO_printf("O numero %i e par\n", numero);
    }else if((numero % 2 == 0) && (numero < -25)){
        IO_printf("O numero %i e par e menor que -25\n", numero);
    }else if((numero % 2 != 0) && (numero > 25)){
        IO_printf("O numero %i e impar e maior que 25\n", numero);    
    }
    return(0);
}