#include "./io.h" 

int main(){

    double lado = 0;
    lado = IO_readdouble("Digite o valor do lado do cubo:");

    double volume = ((lado*4) * lado * lado);

    IO_printf("O volume do solido com quatro vezes a medida do lado e: %lf", volume);
}

