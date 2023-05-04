#include "io.h"

int main(){
    
    IO_id("Exemplo312");

    char palavra[STR_SIZE];
    int tamanho = 0;
    int maiusculas = 0;
    
    IO_println("Entrar com uma palavra: ");
    scanf("%s", palavra);
    getchar();
    
    tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++){
        if ('A' <= palavra[i] && palavra[i] <= 'Z'){
            IO_printf("%d: [%c]\n", i, palavra[i]);
            maiusculas++;
        }
    }
    IO_printf("Existem %i letras maiusculas", maiusculas);
   
    IO_pause("Apertar ENTER para continuar");
} 