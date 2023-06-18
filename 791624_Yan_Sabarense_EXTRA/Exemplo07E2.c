#include <stdio.h>
#include <ctype.h>

int countWordsStartingWithC()
{
    FILE *file = fopen("palavras.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    char word[100];
    int count = 0;

    while (fgets(word, sizeof(word), file)) {
        if (toupper(word[0]) == 'C') { // Verifica se a palavra começa com 'c' ou 'C'
            count++;
        }
    }

    fclose(file); // Fecha o arquivo

    return count;
}

int main()
{
    int count = countWordsStartingWithC();

    printf("O arquivo contém %d palavras que começam com 'c' ou 'C'.\n", count);

    return 0;
}
