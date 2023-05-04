#include "./io.h"

int main(){

    double comprimento = 0;
    comprimento = IO_readdouble("Digite o valor do comprimento do paralelepipedo:");

    double largura = 0;
    largura = IO_readdouble("Digite o valor da largura do paralelepipedo:");

    double altura = 0;
    altura = IO_readdouble("Digite o valor da altura do paralelepipedo:");

    double volume = ((altura/0.2) * (largura/0.2) * (comprimento/0.2));

    IO_printf("O volume do solido com um quinto desses valores e de: %lf", volume);

}

//duvida se o resultado esta correto