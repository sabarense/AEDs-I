#include "io.h"

/**
 readText - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
*/
void readText(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);
    // tentar ler o primeiro
    strcpy(linha, IO_freadln(arquivo));
    // repetir enquanto houver dados
    while (!feof(arquivo) &&
           strcmp("PARAR", linha) != 0)
    {
        // mostrar valor
        printf("%s\n", linha);
        // tentar ler o proximo
        strcpy(linha, IO_freadln(arquivo));
    } // fim repetir
      // fechar arquivo (RECOMENDAVEL para leitura)
    fclose(arquivo);
} // fim readText ( )
/**
 Method06.
*/
void method06()
{
    // identificar
    IO_id("EXEMPLO0710 - Method06 - v0.0");
    // executar o metodo auxiliar
    readText("DADOS3.TXT");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method06 ( )

int main(){
    method06();
}
