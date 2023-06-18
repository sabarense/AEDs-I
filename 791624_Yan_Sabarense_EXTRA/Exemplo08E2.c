#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** findWords(FILE *file, int *count)
{
    char **words = (char**) malloc(100 * sizeof(char*)); // Aloca espaço para o array de palavras
    char word[100];
    *count = 0; // Inicializa o contador de palavras

    while (fgets(word, sizeof(word), file) && *count < 100) {
        int length = strlen(word);
        if (word[0] != 'c' && word[0] != 'C' && word[length - 2] != 'c' && word[length - 2] != 'C') {
            words[*count] = (char*) malloc(length * sizeof(char)); // Aloca espaço para a palavra
            strcpy(words[*count], word); // Copia a palavra para o array
            (*count)++;
        }
    }

    return words;
}

void printFirstTenWords(char **words, int count)
{
    printf("As dez primeiras palavras que não começam ou terminam com 'c' ou 'C':\n");

    for (int i = 0; i < count && i < 10; i++) {
        printf("%s", words[i]); // Mostra a palavra na tela
    }
}

int main()
{
    FILE *file = fopen("PALAVRAS.TXT", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int count;
    char **words = findWords(file, &count);
    printFirstTenWords(words, count);

    for (int i = 0; i < count; i++) {
        free(words[i]); // Libera a memória alocada para cada palavra
    }
    free(words); // Libera a memória alocada para o array de palavras

    fclose(file); // Fecha o arquivo

    return 0;
}
