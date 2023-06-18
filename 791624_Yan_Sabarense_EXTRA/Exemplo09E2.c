#include <stdio.h>
#include <stdlib.h>

void createMatrix(int rows, int columns)
{
    int matrix[rows][columns];

    // Preenche a matriz com os elementos
    int currentElement = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j % 2 == 0) {
                matrix[i][j] = currentElement;
            } else {
                matrix[i][j] = currentElement * 2;
            }
            currentElement++;
        }
    }

    // Grava a matriz em um arquivo
    FILE *file = fopen("MATRIZ.TXT", "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            fprintf(file, "%d ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
}

int main()
{
    int rows, columns;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &rows);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &columns);

    createMatrix(rows, columns);

    return 0;
}
