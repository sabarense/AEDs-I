#include "./io.h" 

int main(){

    double lado = 0;
    lado = IO_readdouble("Digite um valor para o lado do triangulo:");

    double altura = lado/2.0;

    double base = 0;
    base = IO_readdouble("Digite um valor para a base do triangulo:");

    double area = (base * altura) / 2.0;
    double perimetro = (lado/0.16) * 3.0;

    IO_printf("A altura do triangulo equilatero e: %lf\n", altura);
    IO_printf("A area do triangulo equilatero e: %lf\n", area);
    IO_printf("O perimetro do triangulo equilatero com um sexto do lado e: %lf", perimetro);

} 

// fiquei com um pouco de duvida nessa questao, acerca de usar a biblioteca matematica para descobrir a area do triangulo equilatero em si.