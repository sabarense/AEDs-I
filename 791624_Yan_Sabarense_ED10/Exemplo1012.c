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
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    int i = 0;
    while(!feof(arquivo) && i < tamArray1){
        fscanf(arquivo,"%d", &arranjo[i]);
        i = i + 1;
    }
    fclose(arquivo);
}

int procurar(int valor, int arranjo[], int tamArray) {
    for (int i = 0; i < tamArray; i++) {
        if (arranjo[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main(){

    int array[100];

    int valor;

    printf("Digite o valor a ser procurado:\n");
    scanf("%d", &valor);    

    int tamArray = lerTamArray();
    lerElementosArray(array,tamArray);
    
    imprimirArrayEmArquivo("DADOS.TXT", tamArray, array);
    int arranjo = lerArquivo("DADOS.TXT", array, tamArray);

    int resposta = procurar(valor, arranjo, tamArray);

    if (resposta == -1) {
        printf("O valor nao foi encontrado no arranjo.\n");
    } else {
        printf("O valor foi encontrado no índice %d do arranjo.\n", resposta);
    }
}