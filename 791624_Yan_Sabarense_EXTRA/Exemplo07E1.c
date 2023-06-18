#include <stdio.h>

void saveDivisorsToFile(int number)
{
    FILE *file = fopen("divisores.txt", "w"); // Abre o arquivo em modo de escrita

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(file, "Divisores de %d em ordem decrescente:\n", number);
    for (int i = number; i >= 1; i--) {
        if (number % i == 0) {
            fprintf(file, "%d\n", i); // Grava o divisor no arquivo
        }
    }

    fclose(file); // Fecha o arquivo
}

int main()
{
    int number;

    printf("Digite um valor inteiro: ");
    scanf("%d", &number);

    saveDivisorsToFile(number);

    printf("Divisores salvos no arquivo divisores.txt.\n");

    return 0;
}
