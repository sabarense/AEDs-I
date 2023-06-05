#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(){

    char valor1, valor2, valor3;

    printf("Digite os tres valores literais (caracteres): ");
    scanf(" %c %c %c", &valor1, &valor2, &valor3);

    if ((valor2 < valor1 && valor1 < valor3) || (valor3 < valor1 && valor1 < valor2)) {
        printf("O primeiro valor esta dentro do intervalo definido pelos outros dois.\n");
    } else {
        printf("O primeiro valor esta fora do intervalo definido pelos outros dois.\n");
    }
}
