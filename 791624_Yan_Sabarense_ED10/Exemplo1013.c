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

int comparar(int arranjo1[], int arranjo2[]){

    size_t tam1 = (&arranjo1)[1] - arranjo1;
    size_t tam2 = (&arranjo2)[1] - arranjo2;
    
    if(tam1 != tam2){
        return 0;    
    }

    for (int i = 0; i < tam1; i++) {
        if(arranjo1[i] != arranjo2[i]) {
            return 0;  
        }
    }
    return 1;  // arranjosiguais
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

    int resposta = comparar(arranjo1, arranjo2);

    if(resposta == 1) {
        printf("Os arranjos sao iguais.\n");
    } else {
        printf("Os arranjos sao diferentes.\n");
    }
}