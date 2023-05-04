#include "./io.h" 

int main(){

    int ladoA;
    ladoA = IO_readint("Digite um valor para o lado do retangulo:  ");

    int ladoB;
    ladoB = IO_readint("Digite outro valor para o lado do retangulo:  ");

    double area = (ladoA * ladoB) * (double)3;
    IO_printf("Tres vezes a area = %lf", area);
}