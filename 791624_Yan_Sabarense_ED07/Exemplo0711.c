#include "io.h"

/**
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param valor - quantidade de valores
*/

void writeInts(char* fileName, int valor){
    FILE *arquivo = fopen(fileName, "wt");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for(int i = 6; i < valor; i++){
        if(i % 3 == 0 && i % 2 == 0){
            fprintf(arquivo, "%d ", i);
        }
    }
    fclose(arquivo); 
}

int leInteiro(){

    int valor = 0;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    return valor;
}

int main(){

    int valorLido = leInteiro();
    writeInts("DADOS1.TXT", valorLido);

}