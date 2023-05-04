#include "io.h"

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
    chars linha = IO_new_chars(STR_SIZE);
    int contador = 0;
    // ler da origem
    strcpy(linha, IO_freadln(entrada));
    // repetir enquanto houver dados
    while (!feof(entrada))
    {
        // contar linha lida
        contador = contador + 1;
        // gravar no destino,
        // EXCEPCIONALMENTE sem a ultima linha, nesse caso
        if (strcmp("PARAR", linha) != 0)
        {
            IO_fprintln(saida, linha);
        } // fim se
        // ler da origem
        strcpy(linha, IO_freadln(entrada));
    } // fim repetir
      // informar total de linhas copiadas
    IO_printf("Lines read = %d\n", contador);
    // fechar arquivos
    fclose(saida);
    fclose(entrada);
} // fim copyText ()

void method07()
{
    // identificar
    IO_id("EXEMPLO0710 - Method07 - v0.0");
    // executar o metodo auxiliar
    copyText ( "DADOS4.TXT", "DADOS3.TXT" );
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method06 ( )

int main(){
    method07();
}