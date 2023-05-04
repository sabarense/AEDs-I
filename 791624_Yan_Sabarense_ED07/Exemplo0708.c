#include "io.h"

/**
 appendText - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void appendText(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "at");
    chars linha = IO_new_chars(STR_SIZE);
    // repetir ate' desejar parar
    IO_println("Gravar linhas (para terminar, entrar com \"PARAR\"):\n");
    do
    {
        // ler do teclado
        strcpy(linha, IO_readln(""));
        // gravar valor
        IO_fprintln(arquivo, linha);
    } while (strcmp("PARAR", linha) != 0);
    // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim appendText ( )
/**
 Method08.
*/
void method08()
{
    // identificar
    IO_id("EXEMPLO0710 - Method08 - v0.0");
    // executar o metodo auxiliar
    appendText("DADOS4.TXT");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method08 ( )

int main()
{
    method08();
}