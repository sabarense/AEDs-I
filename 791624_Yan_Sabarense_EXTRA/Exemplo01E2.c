#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {

    double valor, raio, area;

    printf("Digite o valor do volume da esfera: ");
    scanf("%lf", &valor);

    raio = cbrt((valor * 3) / (8 * M_PI));
    area = 4 * M_PI * pow(raio, 2);

    printf("O raio de tres oitavos do volume da esfera e: %.2lf\n", raio);
    printf("A area da superficie da esfera e: %.2lf\n", area);

    return 0;
}