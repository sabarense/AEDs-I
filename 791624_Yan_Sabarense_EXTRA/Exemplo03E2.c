#include "io.h"

bool contemApenasSimbolosNaoLetras(char palavra[STR_SIZE]){

    bool result = true;
    if ((palavra >= 'A' && palavra <= 'Z') || (palavra >= 'a' && palavra <= 'z')){
        result = false;
    }
    return (result);
}

int main(){

    char palavra[80];
    int tamanhoPalavra = 0;

    IO_println("Digite uma palavra: ");
    gets(palavra);

    tamanhoPalavra = strlen(palavra);    

    if (contemApenasSimbolosNaoLetras(palavra)) {
        printf("A sequencia contem apenas simbolos que nao sao letras.\n");
    } else {
        printf("A sequencia nao contem apenas simbolos que nao sao letras.\n");
    }
}