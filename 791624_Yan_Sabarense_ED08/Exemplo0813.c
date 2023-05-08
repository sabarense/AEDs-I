#include "io.h"

int lerTamArray(){

    int tamArray = 0;
    do{
        printf("Digite o tamanho do array:\n");
        scanf("%d", &tamArray);
    }while(tamArray < 0);
    return tamArray;
} 

void imprimirArrayEmArquivo(chars fileName, int tamArray, int array[]){
    
    FILE *arquivo = fopen(fileName, "wt");
    fprintf(arquivo, "Quantidade de numeros aleatorios: [%d]\n", tamArray);
    for(int i = 0; i < tamArray; i++){
        fprintf(arquivo,"[%d]\n",array[i]);
    }
    fclose(arquivo);
}

int lerLimiteFim(int limiteFim){

    do{
        printf("Digite o limite final:\n");
        scanf("%d", &limiteFim);
    }while(limiteFim < 0);

    return limiteFim;

}
int lerLimiteInicio(int limiteInicio){

    do{
        printf("Digite o limite inicial:\n");
        scanf("%d", &limiteInicio);
    }while(limiteInicio < 0);

    return limiteInicio;
}

int gerarNumeroAleatorio(lerLimiteInicio, lerLimiteFim) {

    return rand() % 100;
}

int main(){

    int array[100];
    int tamArray = lerTamArray();
  
    int limiteInicio = lerLimiteInicio(limiteInicio);
    
    int limiteFim = lerLimiteFim(limiteFim);
    
    
    int numerosGerados[tamArray];

    for (int i = 0; i < tamArray; i++) {
        numerosGerados[i] = gerarNumeroAleatorio(lerLimiteInicio, lerLimiteFim);
    }

    imprimirArrayEmArquivo("DADOS.TXT", tamArray, numerosGerados);

}
