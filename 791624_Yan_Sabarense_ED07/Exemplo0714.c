#include "io.h"

/**
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param valor - quantidade de valores
*/

void writeInts(chars fileName, int valor)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "wt");
    // repetir para a quantidade de dados
    int soma = pow(6, valor - 1);

    for (int i = valor; i >= 1; i--)
    {
        printf("1/%d\n", soma);
        if (i == 1)
        {
            printf("1\n");
        }
        soma /= 6;
    }
    // fim repetir
    // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim writeInts ( )


int main()
{

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    writeInts("DADOS8.TXT", valor);
}