#include "io.h"

void lerArrayArquivo(chars fileName, int array[]){

    FILE *arquivo = fopen(fileName, "rt");
    int i = 0;
    int menor = 0;
    while(!feof(arquivo)){
        fscanf(arquivo,"%d", &array[i]);
        if(array[i] % 2 == 0 && array[i] < menor){
            menor = array[i];
            printf("Menor par encontrado: [%i]\n", menor);
        }
        i = i + 1;
    }
    fclose(arquivo);
}

int main(){

    int array[100];
    lerArrayArquivo("DADOS.TXT",array);
    
}
