#include "io.h"

/**
 readInts - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readInts(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    int x = 0;
    // tentar ler o primeiro
    fscanf(arquivo, "%d", &x);
    // repetir enquanto houver dados
    while (!feof(arquivo))
    {
        // mostrar valor
        printf("%d\n", x);
        // tentar ler o proximo
        fscanf(arquivo, "%d", &x);
    } // fim repetir
      // fechar arquivo (RECOMENDAVEL para leitura)
    fclose(arquivo);
} // fim readInts ( )
/**
 Method02.
*/
void method02()
{
    // identificar
    IO_id("EXEMPLO0702 - Method02 - v0.0");
    // executar o metodo auxiliar
    readInts("DADOS1.TXT");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )

int main()
{

    method02();
}