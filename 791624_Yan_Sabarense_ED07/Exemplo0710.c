#include "io.h"

/**
 searchWord - Procurar palavra em arquivo.
 @return true, se encontrar; false, caso contrario
 @param fileName - nome do arquivo
 @param word - palavra a procurar
*/

bool searchWord(chars fileName, chars word)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);
    // tentar ler a primeira
    strcpy(linha, IO_fread(arquivo));
    // repetir enquanto houver dados
    while (!feof(arquivo) && strcmp(word, linha) != 0)
    {
        // tentar ler o proximo
        strcpy(linha, IO_fread(arquivo));
    } // fim repetir
      // fechar arquivo (RECOMENDAVEL para leitura)
    fclose(arquivo);

    // retornar resultado
    return (strcmp(word, linha) == 0);
} // fim searchdWord ( )
/**
 Method10.
*/
void method10()
{
    // identificar
    IO_id("EXEMPLO0710 - Method10 - v0.0");
    // procurar palavra
    IO_printf("Procurar (\"%s\") = %d\n", "pqr", searchWord("DADOS4.TXT", "pqr"));
    IO_printf("Procurar (\"%s\") = %d\n", "pqs", searchWord("DADOS4.TXT", "pqs"));
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method10 ( )

int main(){
    method10();
}
