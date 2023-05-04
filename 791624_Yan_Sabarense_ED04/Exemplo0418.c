#include "io.h" 

bool naoEhAlfanumerico(char str[STR_SIZE]){

    bool result = false;
    if ( !('0' <= str && str <= '9') && !('A' <= str && str <= 'Z') && !('a' <= str && str <= 'z')){
        result = true;
    }
    return (result);
}

int main(){

    IO_id("Exemplo0413");

    char palavra[STR_SIZE];
    char simbolo = '_';

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);
    
    printf("Simbolos nao alfanumericos encontrados:\n");
    for(int i = 0; i < tamanho; i++){
        simbolo = palavra[i];
        if(naoEhAlfanumerico(simbolo)){
            printf("[%c]\n", palavra[i]);
        }
    }

    IO_pause("Aperte ENTER para finalizar.");

}