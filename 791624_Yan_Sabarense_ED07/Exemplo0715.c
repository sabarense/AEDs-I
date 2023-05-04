#include "io.h"
#include <math.h>

/**
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param valor - quantidade de valores
*/

void writeInts(chars fileName, int valor, int expoente)
{
    // definir dados
    FILE *arquivo = fopen(fileName, "wt");
    int count = 0;
    // repetir para a quantidade de dados
    for(int i = 0; i < valor; i++){
        fprintf(arquivo, "1/%2.lf\n", pow(expoente,count));
        count += 2;
    }
    // fim repetir
    // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim writeInts ( )


int main(){

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);
    
    int expoente = 0;

    printf("Digite um expoente: ");
    scanf("%i", &expoente);

    writeInts("DADOS9.TXT", valor, expoente);

}