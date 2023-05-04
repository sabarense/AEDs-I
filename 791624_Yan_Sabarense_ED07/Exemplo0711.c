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
    
    // repetir para a quantidade de dados

    for (int i = 2; i < valor+2; i++)
    {   
        int aux = i * 3;
        // gravar valor
        if(aux % 2 == 0 ){
            fprintf(arquivo, "%d\n", aux);
        }else{
            valor = valor + 1;
        }
    } // fim repetir
      // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim writeInts ( )


int main(){

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    writeInts("DADOS5.TXT", valor);

    
}