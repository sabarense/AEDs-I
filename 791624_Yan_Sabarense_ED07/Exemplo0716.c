#include "io.h"
#include <math.h>

/**
 copyText - Copiar arquivo texto.
 @param fileOut - nome do arquivo de saida (destino)
 @param fileIn - nome do arquivo de entrada (origem )
*/

void copyText(chars fileOut, chars fileIn)
{
    // definir dados
    FILE *saida = fopen(fileOut, "wt");
    FILE *entrada = fopen(fileIn, "rt");
    int contador = 0;
    // repetir enquanto houver dados
    while (!feof(entrada))
    {
        // contar linha lida
        contador = contador + 1;
        // gravar no destino,
        // EXCEPCIONALMENTE sem a ultima linha, nesse caso
    } // fim repetir
    // fechar arquivos
    fclose(saida);
    fclose(entrada);
} // fim copyText ()

void writeInts(chars fileName, int valor)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "wt");
    int count = 1;
    // repetir para a quantidade de dados
    for (int i = valor; i >= 1; i--) {
        fprintf(arquivo, "1/%i\n", count);
        count *= 6;
    }
    // fechar arquivo
    fclose(arquivo);
}

int main()
{

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    writeInts("RESULTADO06.TXT,DADOS9.TXT", valor);
}