#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(){

    char valor1, valor2, valor3;

    printf("Digite os tres valores literais (caracteres): ");
    scanf(" %c %c %c", &valor1, &valor2, &valor3);

    if ((valor1 > valor2 && valor1 < valor3) || (valor1 < valor2 && valor1 > valor3)) {
        printf("O primeiro valor esta entre os outros dois.\n");
    } else if (valor1 == valor2 || valor1 == valor3) {
        printf("O primeiro valor e igual a um dos outros dois.\n");
    } else {
        printf("O primeiro valor nao esta entre os outros dois e nem e igual a um deles.\n");
    }
}
