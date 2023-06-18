#include <stdio.h>
#include <stdbool.h>

bool identidadeMatriz(int matriz[][3], int size)
{
    int matrizIdentidade[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int produto[3][3] = {0};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                produto[i][j] += matriz[i][k] * matriz[k][j];
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (produto[i][j] != matrizIdentidade[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int matriz[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matriz) / sizeof(matriz[0]);

    bool resultado = identidadeMatriz(matriz, size);

    if (resultado) {
        printf("O produto das matrizes resulta na matriz identidade.\n");
    } else {
        printf("O produto das matrizes NÃO resulta na matriz identidade.\n");
    }

    return 0;
}
