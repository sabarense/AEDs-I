#include "io.h"

bool naoEhAlfanumerico(char str[80]){

    bool result = false;
    if ( !('0' <= str && str <= '9') && !('A' <= str && str <= 'Z') && !('a' <= str && str <= 'z')){
        result = true;
    }
    return (result);
}

int main(){

    char palavra[80];
    char caracteresNaoAlfanumericos[80];
    int tamanhoPalavra = 0;
    int j = 0;

    IO_println("Digite uma palavra: ");
    gets(palavra);

    tamanhoPalavra = strlen(palavra);    

    for(int i = 0; i < tamanhoPalavra; i++){
        if(naoEhAlfanumerico(palavra[i])){
            caracteresNaoAlfanumericos[j] = palavra[i];
            j++;
        }
    }
    
    printf("Simbolos nao alfanumericos encontrados: ");
    for (int i = 0; i < j; i++) {
        printf("%c", caracteresNaoAlfanumericos[i]);
    }
}