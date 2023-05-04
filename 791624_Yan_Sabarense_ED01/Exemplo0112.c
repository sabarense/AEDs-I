#include "./io.h" 

int main(){
    int lado;
    lado = IO_readint("Digite um valor para o lado do quadrado:  ");
    double area = (lado * lado);
    double perimetro = (lado/(double)2) * (double)4;
    IO_printf("Area do quadrado: %lf\n", area);
    IO_printf("Perimetro com a metade do tamanho do lado: %lf", perimetro);
}