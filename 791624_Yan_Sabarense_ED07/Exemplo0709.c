#include "io.h"

/**
 readWords - Ler palavras de arquivo.
 @param fileName - nome do arquivo
*/
void readWords(chars fileName)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);
    // tentar ler a primeira
    strcpy(linha, IO_fread(arquivo));
    // repetir enquanto houver dados
    while (!feof(arquivo) && strcmp("PARAR", linha) != 0)
    {
        // mostrar valor
        printf("%s\n", linha);
        // tentar ler o proximo
        strcpy(linha, IO_fread(arquivo));
    } // fim repetir
      // fechar arquivo (RECOMENDAVEL para leitura)
    fclose(arquivo);
} // fim readWords ( )
/**
 Method09.
*/
void method09()
{
    // identificar
    IO_id("EXEMPLO0710 - Method09 - v0.0");
    // executar o metodo auxiliar
    readWords("DADOS4.TXT");
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method09 ( )

int main(){
    method09();
}
