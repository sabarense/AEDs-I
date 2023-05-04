#include "io.h"

/**
 readDoubles - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readDoubles(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    int x = 0;
    int y = 1;
    double z = 0.0;
    // tentar ler a quantidade de dados
    fscanf(arquivo, "%d", &x);
    // repetir enquanto houver dados e
    // quantidade nao tiver sido alcancada
    while (!feof(arquivo) && y <= x)
    {
        // tentar ler
        fscanf(arquivo, "%lf", &z);
        // mostrar valor
        printf("%2d: %lf\n", y, z);
        // passar ao proximo
        y = y + 1;
    } // fim repetir
      // fechar arquivo (RECOMENDAVEL para leitura)
    fclose(arquivo);
} // fim readDoubles ( )
/**
 Method04.
*/
void method04()
{
    // identificar
    IO_id("EXEMPLO0710 - Method04 - v0.0");
    // executar o metodo auxiliar
    readDoubles("DADOS2.TXT");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04 ( )

int main(){

    method04();
}