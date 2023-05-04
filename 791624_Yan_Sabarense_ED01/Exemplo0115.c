#include "./io.h" 

int main(){
    double base;
    base = IO_readdouble("Digite um valor para a base do triangulo: ");

    double altura;
    altura = IO_readdouble("Digite um valor para a altura do triangulo: ");
    
    double area =  base * ((altura * 2.0)/2.0) ;
    IO_printf("Area de um triangulo com o dobro da altura: %lf", area);
}