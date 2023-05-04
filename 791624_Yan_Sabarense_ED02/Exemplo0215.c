#include "io.h"

int main(){

    IO_id("Exemplo0215");
    int numero = 0;
    numero = IO_readint("Digite um valor inteiro: ");
    if((10 <= numero && numero <= 25) && (15 <= numero && numero <= 60)){
        IO_printf("Valor (%i) pertence ao intervalo fechado [10:25], e pertence ao intervalo fechado [15:60]", numero);
    }
    else if(10 <= numero && numero <= 25){
        IO_printf("Valor (%i) pertence ao intervalo fechado [10:25]", numero);
    }else if(15 <= numero && numero <= 60){
        IO_printf("Valor (%i) pertence ao intervalo fechado [15:60]", numero);
    }else{
        IO_printf("Valor (%i) nao pertence a nenhum dos intervalos", numero);
    }
    return(0);
}

