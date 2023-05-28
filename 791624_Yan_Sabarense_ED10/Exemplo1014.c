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

int somar(int arranjo1[],int arranjo2[]){

    size_t tam1 = (&arranjo1)[1] - arranjo1;
    size_t tam2 = (&arranjo2)[1] - arranjo2;

    int soma = 0;

    for(int i = 0; i < tam1; i++){
        soma += arranjo1[i];
    }   

    for(int i = 0; i < tam2; i++){
        soma += arranjo2[i];
    }  

    return soma;
}

int main(){
    

    int array1[100];
    int array2[100];

    int tamArray1 = lerTamArray();
    int tamArray2 = lerTamArray();

    lerElementosArray(array1,tamArray1);
    lerElementosArray(array2,tamArray2);

    imprimirArrayEmArquivo("DADOS1.TXT", tamArray1, array1);
    imprimirArrayEmArquivo("DADOS2.TXT", tamArray2, array2);
    
    int arranjo1 = lerArquivo("DADOS1.TXT", array1, tamArray1);
    int arranjo2 = lerArquivo("DADOS2.TXT", array2, tamArray2);

    int soma = somar(arranjo1, arranjo2);

    printf("Soma = %d", soma);

}