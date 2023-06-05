#include "io.h"

bool ehAlfanumerico(char str[STR_SIZE]){

    bool result = false;
    if ( (str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')){
        result = true;
    }
    return (result);
}

int main(){

    char palavra[80];
    int quantidade = 0;
    int count = 0;
    int qtdAlfanumericos = 0;
    
    printf("Digite a quantidade de palavras a serem lidas: ");
    scanf("%d", &quantidade);
    getchar();

    do{
        printf("Digite a palavra: ");
        gets(palavra);
        int tamanho = strlen(palavra);
        for(int i = 0 ; i < tamanho; i++ ){
            if(ehAlfanumerico(palavra[i])){
                qtdAlfanumericos++;
            }
        }
        count++;
    }while(quantidade > count);

    printf("Existem %d alfanumericos", qtdAlfanumericos);
}