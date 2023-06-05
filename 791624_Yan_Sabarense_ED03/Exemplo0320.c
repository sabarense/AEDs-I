#include "io.h"

int main(){
    
    IO_id("Exemplo320");

    double a = 0;
    double b = 0;
    int n = 0;
    int x = 0;
    int count = 0;

    do{
        a = IO_readdouble("Digite um valor real maior que 0 e menor que 1: ");
        b = IO_readdouble("Digite outro valor real maior que 0 e menor que 1: ");
    }while( a && b > 0 && a && b < 1);
    
    n = IO_readint("Digite a quantidade de valores a serem testados: ");

    for(int i = 0; i < n; i++){

        IO_printf("Digite o %i valor: ", i + 1);
        x = IO_readdouble(""); 

        if(x >= a && x <= b) {
            count++;
        }
    }

    IO_pause("Apertar ENTER para continuar");
}

