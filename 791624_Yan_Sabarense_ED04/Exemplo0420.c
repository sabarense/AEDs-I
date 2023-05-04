#include "io.h"

bool EhAlfanumerico(char str[STR_SIZE]){

    bool result = false;
    if (('0' <= str && str <= '9') || ('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')) {
        result = true;
    }
    return result;
}

int main(){

    printf("Exemplo0413\n");

    char palavra[STR_SIZE];
    int count = 0;
    int quantidade = 0;
    int alfanumerico = 0;

    do{
        printf("Digite uma quantidade de cadeias a serem lidas:\n");
        scanf("%i", &quantidade);
    }while(quantidade<=0);

    do{
        printf("Digite uma sequencia de caracteres:\n");
        scanf("%s", palavra);
        int tamanho = strlen(palavra);
        printf("Simbolos alfanumericos encontrados:\n");
        for(int i = 0; i < tamanho; i++){
            if(EhAlfanumerico(palavra[i])){
                alfanumerico = alfanumerico + 1;
                printf("[%c],", palavra[i]);
            }
        }
        count = count + 1;
    }while(count<quantidade);

    printf("Existem [%i] simbolos alfanumericos\n", alfanumerico);

    return 0;
}
