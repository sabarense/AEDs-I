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
            printf("Digite o elemento (par e positivo):\n");
            scanf("%d", &array[i]);
            if(array[i] < 0 || array[i] % 2 != 0){
                printf("ERRO.Tente um valor par e positivo.\n");
            }
        }while(array[i] < 0 || array[i] % 2 != 0);
    }
}

void imprimirArray(int array[], int tamArray){
    
    printf("O array lido foi:\n");
    for(int i = 0; i < tamArray; i++){
        printf("[%d]\n",array[i]);
    }

}
int main(){

    int array[100];
    int tamArray = lerTamArray();
    lerElementosArray(array,tamArray);
    imprimirArray(array,tamArray);
}
