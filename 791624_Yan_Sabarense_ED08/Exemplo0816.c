#include "io.h"

int lerTamArray(){

    int tamArray = 0;
    do{
        printf("Digite o tamanho do array:\n");
        scanf("%d", &tamArray);
    }while(tamArray < 0);
    return tamArray;
} 

void lerElementosArray(int array[], int tamArray){

    for(int i = 0; i < tamArray; i++){
        do{
            printf("Digite o elemento:\n");
            scanf("%d", &array[i]);
        }while(array[i] < 0);
    }
}

void imprimirArrayEmArquivo(chars fileName, int tamArray, int array[]){
    
    FILE *arquivo = fopen(fileName, "wt");
    fprintf(arquivo, "Tamanho do array: %d\n", tamArray);
    for(int i = 0; i < tamArray; i++){
        fprintf("[%d]\n",array[i]);
    }
    fclose(arquivo);
}

void mediaArray(chars fileName, int array[]){

    FILE *arquivo = fopen(fileName, "rt");
    int i = 0;
    int soma = 0;
    int numeroEncontrado = 0;

    while(!feof(arquivo)){
        fscanf(arquivo,"%d", &array[i]);
        array[i] = numeroEncontrado;
        soma += numeroEncontrado;
        i = i + 1;
    }
    if (i > 0) {
        double media = (double)soma / i;
        printf("Media = %lf", media);
    } else {
        printf("Nenhum numero encontrado no arquivo.");
    }
}


int main(){

    int array[100];
    int tamArray = lerTamArray();
    lerElementosArray(array,tamArray);
    imprimirArrayEmArquivo("DADOS.TXT", tamArray, array);
}
