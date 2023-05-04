#include "./io.h" 

int main(){

    double raio = 0;
    raio = IO_readdouble("Digite um valor para o raio de um circulo:");

    const PI = 3.14;
    double area = PI * pow(raio/2,2);
    IO_printf("Area de um circulo com metado do raio: %lf", area);
}

//dificuldade em usar a constante equivalente a PI (M_PI), então criei uma constante com o valor de pi.