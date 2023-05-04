#include <stdio.h>
#include <ctype.h> 

int count_uppercase(char str[], int n) {

    if (n == 0) {
        return 0; // caso base: chegou ao final da string
    }

    int count = count_uppercase(str, n-1); // chamada recursiva

    if (isupper(str[n-1])) { // se o último caractere da string é uma letra maiúscula
        count++; // incrementa o contador
    }

    return count;
}

int main() {

    char str[100];

    printf("Digite uma sequencia de caracteres:\n");
    scanf("%s", str);

    int n = strlen(str);
    int count = count_uppercase(str, n);

    printf("A quantidade de maiusculas e: %d\n", count);
    return 0;
}
