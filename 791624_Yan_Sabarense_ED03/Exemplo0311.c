#include "io.h"

int main(){
    
    IO_id("Exemplo311");
    
    int tamanho = 0;
    char palavra[STR_SIZE];

    IO_println("Entrar com uma palavra: ");
    scanf("%s", palavra);
    getchar();

    tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++){
        if ('A' <= palavra[i] && palavra[i] <= 'Z'){
            IO_printf("%d: [%c]\n", i, palavra[i]);
        }
    }
    IO_pause("Apertar ENTER para continuar");
}