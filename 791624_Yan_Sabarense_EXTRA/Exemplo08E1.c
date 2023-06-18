#include <stdio.h>
#include <stdlib.h>

int* calculateDivisors(int number, int *count)
{
    int *divisors = (int*) malloc(number * sizeof(int)); // Aloca espaço para o array de divisores

    *count = 0; // Inicializa o contador de divisores

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            divisors[*count] = i; // Armazena o divisor no array
            (*count)++;
        }
    }

    return divisors;
}

void printAndSaveDivisors(int number, int *divisors, int count)
{
    FILE *file = fopen("DIVISORES.TXT", "w"); // Abre o arquivo em modo de escrita

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(file, "Divisores de %d:\n", number);
    printf("Divisores de %d:\n", number);

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n", divisors[i]); // Grava o divisor no arquivo
        printf("%d\n", divisors[i]); // Mostra o divisor na tela
    }

    fclose(file); // Fecha o arquivo
    free(divisors); // Libera a memória alocada para o array
}

int main()
{
    int number;
    int count;
    int *divisors;

    printf("Digite um valor inteiro: ");
    scanf("%d", &number);

    divisors = calculateDivisors(number, &count);
    printAndSaveDivisors(number, divisors, count);

    return 0;
}
