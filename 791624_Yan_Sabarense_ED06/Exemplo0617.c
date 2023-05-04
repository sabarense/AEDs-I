#include <stdio.h>
#include <string.h>

void imprimir_caracteres(char *str, int indice) {
    if (indice >= strlen(str)) {
        return; // caso base: chegou ao final da string
    }
    printf("%c\n", str[indice]); // imprime o caractere na posição atual
    imprimir_caracteres(str, indice + 1); // chama a função recursivamente para imprimir o próximo caractere
}

int main() {

    char str[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", str);
    
    imprimir_caracteres(str, 0);
    return 0;
}

