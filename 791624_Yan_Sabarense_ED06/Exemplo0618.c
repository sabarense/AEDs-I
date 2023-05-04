#include <stdio.h>

int contar_impares(char *string) {
    if (*string == '\0') {
        return 0; // caso base: chegou ao fim da string
    }
    int digito = *string - '0'; // converte o caractere em um inteiro
    if (digito % 2 == 1) {
        return 1 + contar_impares(string + 1); // incrementa o contador e chama a função recursivamente para o próximo caractere
    } else {
        return contar_impares(string + 1); // chama a função recursivamente para o próximo caractere
    }
}

int main() {

    char string[100];

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", string);

    int impares = contar_impares(string);
    
    printf("A cadeia \"%s\" contem %d digitos com valores impares.\n", string, impares);

    return 0;

}
