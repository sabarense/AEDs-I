#include "io.h"
#include <math.h>

int main(){ 

    IO_id("Teste");

    double valorA = 0.0;
    valorA = IO_readdouble("Digite o primeiro valor real: ");

    double valorB = 0.0;
    valorB = IO_readdouble("Digite o segundo valor real: ");
    

    double valorC = 0.0;
    valorC = IO_readdouble("Digite o terceiro valor real: ");

    if(valorB != valorC){
        if( (valorB <= valorA && valorA <= valorC) || (valorC <= valorB && valorC <= valorA) ){
            IO_printf("O primeiro valor (%lf) esta entre os outros dois, quando esses forem diferentes entre si.",valorA);
        }else{
            IO_printf("O primeiro valor (%lf) nao esta entre os outros dois, quando esses forem diferentes entre si.",valorA);        
        }    
    }else{
        IO_printf("Os valores nao sao diferentes entre si.");
    }
    return(0);
}