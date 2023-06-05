#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(){

    double valor, raio;

    printf("Digite um valor real: ");
    scanf("%lf", &valor);

    raio = sqrt(valor / ( 4 * M_PI));

    printf("O raio de um quarto da area da circunferencia e: %.2lf\n", raio);
    
    return 0;
}