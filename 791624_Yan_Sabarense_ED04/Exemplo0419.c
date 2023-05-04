#include "io.h" 

bool EhAlfanumerico(char str[STR_SIZE]){

    bool result = false;
    if ( ('0' <= str && str <= '9') || ('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')){
        result = true;
    }
    return (result);
}

int main(){

    IO_id("Exemplo0413");

    char palavra[STR_SIZE];
    char novaPalavra[STR_SIZE];
    char simbolo = '_';

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    
    printf("Simbolos alfanumericos encontrados:\n");
    for(int i = 0; i < tamanho; i++){
        simbolo = palavra[i];
        if(EhAlfanumerico(simbolo)){
            printf("[%c]\n", simbolo);
            char str[2];
            str[0] = simbolo;
            str[1] = '\0';
            strcat(novaPalavra, str);
        }
    }

    printf("Nova palavra = [%s]", novaPalavra);
    IO_pause("Aperte ENTER para finalizar.");

}