#include "io.h"

int main(){

    IO_id("Exemplo0218");
    double valorA = 0;
    valorA = IO_readdouble("Digite o primeiro valor real: ");

    double valorB = 0;
    valorB = IO_readdouble("Digite o segundo valor real: ");

    if((valorB < valorA)){
        IO_printf("O segundo valor (%lf) e menor que o primeiro (%lf) ", valorB, valorA);
    }else if((valorB == valorA)){
        IO_printf("O segundo valor (%lf) e igual ao primeiro (%lf) ", valorB, valorA);
    }else if((valorB > valorA)){
        IO_printf("O segundo valor (%lf) e maior que o primeiro (%lf) ", valorB, valorA);
    }
    
    return(0);
}