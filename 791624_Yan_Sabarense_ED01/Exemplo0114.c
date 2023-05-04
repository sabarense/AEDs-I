#include "./io.h" 

int main(){
    int ladoA;
    ladoA = IO_readint("Digite um valor para o lado do retangulo:  ");

    int ladoB;
    ladoB = IO_readint("Digite outro valor para o lado do retangulo:  ");

    double area = (ladoA * ladoB);
    double perimetro = (ladoA/0.25) * 2.0 + (ladoB/0.25) * 2.0;

    IO_printf("Area = %lf\n", area);
    IO_printf("Perimetro com um quarto do tamanho do lado = %lf", perimetro);
}