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
        fprintf(arquivo,"[%d]\n",array[i]);
    }
    fclose(arquivo);
}

int lerArquivo(chars fileName, int arranjo[], int tamArray1){

    FILE *arquivo = fopen(fileName, "rt");
    int i = 0;
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    while(!feof(arquivo) && i < tamArray1){
        fscanf(arquivo,"%d", &arranjo[i]);
        i = i + 1;
    }
    fclose(arquivo);
}

int decrescente(int arranjo1[]){

    size_t tam1 = (&arranjo1)[1] - arranjo1;

    for(int i = 0; i < tam1; i++){
        if(arranjo1[i] < arranjo1[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    
    int array1[100];
   
    int tamArray1 = lerTamArray();
   
    lerElementosArray(array1,tamArray1);

    imprimirArrayEmArquivo("DADOS1.TXT", tamArray1, array1);
    
    int arranjo1 = lerArquivo("DADOS1.TXT", array1, tamArray1);

    bool resposta = decrescente(arranjo1);

    if (resposta) {
        printf("O arranjo está em ordem decrescente.\n");
    } else {
        printf("O arranjo não está em ordem decrescente.\n");
    }
   
}