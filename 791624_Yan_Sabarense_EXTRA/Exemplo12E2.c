#include <stdio.h>

void montarMatriz(int matriz[][9], int linhas, int colunas)
{
    int numero = 1;

    for (int i = 0; i < linhas; i++) {
        int elementos = i + 1;
        for (int j = 0; j < elementos; j++) {
            matriz[i][j] = numero;
            numero++;
        }
    }
}

void imprimirMatriz(int matriz[][9], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++) {
        int elementos = i + 1;
        for (int j = 0; j < elementos; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[4][9];
    int linhas = 4;
    int colunas = 9;

    montarMatriz(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}

