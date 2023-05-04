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
    int count = 1;
    // repetir para a quantidade de dados
    for(int i = 1; i <= valor; i++){
        fprintf(arquivo, "%i\n", count);
        count *= 6;
    }
    // fim repetir
      // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim writeInts ( )


int main(){

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    writeInts("DADOS7.TXT", valor);

}