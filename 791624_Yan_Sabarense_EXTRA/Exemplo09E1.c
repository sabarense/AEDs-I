#include <stdio.h>
#include <stdlib.h>

void createMatrix(int rows, int columns)
{
    int matrix[rows][columns];

    // Preenche a matriz com os elementos
    int currentElement = 1;
    int currentRow = 0;
    int currentColumn = 0;
    int direction = 0; // 0 - direita, 1 - baixo, 2 - esquerda, 3 - cima

    while (currentElement <= rows * columns) {
        matrix[currentRow][currentColumn] = currentElement;

        switch (direction) {
            case 0: // Direita
                if (currentColumn + 1 >= columns || matrix[currentRow][currentColumn + 1] != 0) {
                    direction = 1; // Muda para baixo
                    currentRow++;
                } else {
                    currentColumn++;
                }
                break;
            case 1: // Baixo
                if (currentRow + 1 >= rows || matrix[currentRow + 1][currentColumn] != 0) {
                    direction = 2; // Muda para a esquerda
                    currentColumn--;
                } else {
                    currentRow++;
                }
                break;
            case 2: // Esquerda
                if (currentColumn - 1 < 0 || matrix[currentRow][currentColumn - 1] != 0) {
                    direction = 3; // Muda para cima
                    currentRow--;
                } else {
                    currentColumn--;
                }
                break;
            case 3: // Cima
                if (currentRow - 1 < 0 || matrix[currentRow - 1][currentColumn] != 0) {
                    direction = 0; // Muda para a direita
                    currentColumn++;
                } else {
                    currentRow--;
                }
                break;
        }

        currentElement++;
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
