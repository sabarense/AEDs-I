#include "io.h" 

int main(){

    IO_id("Exemplo0412");

    char palavra[STR_SIZE];
    int maiusculas = 0;

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if('A' <= palavra[i] && palavra[i] < 'K'){
            maiusculas = maiusculas +1;
        }
    }

    IO_printf("Existem [%i] letras maiusculas menores que K. ", maiusculas);
    
    IO_pause("Aperte ENTER para finalizar.");
    
}