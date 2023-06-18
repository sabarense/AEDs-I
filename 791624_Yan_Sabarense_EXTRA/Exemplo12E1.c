#include <stdbool.h>
#include <stdio.h>

bool verificarCaracteristica(int matriz[][9], int linhas)
{
    int numero = 1;

    for (int i = 0; i < linhas; i++) {
        int elementos = i + 1;
        for (int j = 0; j < elementos; j++) {
            if (matriz[i][j] != numero) {
                return false;
            }
            numero++;
        }
    }

    return true;
}

int main()
{
    int matriz[][9] = {
        {1, 2, 3, 4},
        {1, 2, 3, 5, 6, 7, 8},
        {1, 2, 4, 5, 6, 9, 10, 11, 12},
        {3, 4, 7, 8, 9, 13, 14, 15, 16}
    };

    int linhas = sizeof(matriz) / sizeof(matriz[0]);

    if (verificarCaracteristica(matriz, linhas)) {
        printf("A matriz possui a característica.\n");
    } else {
        printf("A matriz não possui a característica.\n");
    }

    return 0;
}
