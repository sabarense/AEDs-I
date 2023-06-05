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

    for (int i = 5; i * 5 >= 15; i--)
    {   
        int aux = i * 5;
        // gravar valor
        if(aux % 2 != 0 ){
            fprintf(arquivo, "%d\n", aux);
        }else{
            valor = valor + 1;
        }
    } // fim repetir
      // fechar arquivo (INDISPENSAVEL para gravacao)
    fclose(arquivo);
} // fim writeInts ( )

int leInteiro(){

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    return valor;
}

int main(){

    int valorLido = leInteiro();
    writeInts("DADOS6.TXT", valorLido);

}