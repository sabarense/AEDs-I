#include "io.h"

int main(){

    IO_id("Exemplo0217");
    int valorA = 0;
    valorA = IO_readint("Digite um valor inteiro: ");

    int valorB = 0;
    valorB = IO_readint("Digite outro valor inteiro: ");

    if( (valorA % 2 == 0 && valorA < 0) && (valorB % 2 != 0 && valorB > 0) ){
        IO_printf("O primeiro valor (%i) e par e negativo, e o segundo valor (%i) e impar e positivo.", valorA,valorB);
    }else{
        IO_printf("Os valores digitados nao seguem a regra estabelecida.");    
    }
    
    return(0);
}