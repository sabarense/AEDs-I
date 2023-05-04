#include "./io.h" 

int main(){ 

    double raio = 0;
    raio = IO_readdouble("Digite um valor para o raio de uma esfera:");

    double diametro = raio * 2;
    const PI = 3.14;
    double volume = 4/3 * PI * pow(raio/0.6,3);

    IO_printf("O valor do volume de uma esfera com tres quintos do raio e: %lf", volume);

}
//duvida sobre o resultado
