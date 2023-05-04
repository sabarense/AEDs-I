#include "io.h" 


bool ehMaiuscula(char palavra[STR_SIZE]){

    bool result = false;
    if ('A' <= palavra && palavra < 'K'){
        result = true;
    }
    return (result);
}
int main(){

    IO_id("Exemplo0414");

    char palavra[STR_SIZE];
    int maiusculas = 0;
    char simbolo = '_';

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);
    
    for(int i = 0; i < tamanho; i++){
        simbolo = palavra[i];
        if(ehMaiuscula(simbolo)){
            maiusculas = maiusculas +1;
        }
    }

    IO_printf("Existem [%i] letras maiusculas menores que K. ", maiusculas);
    
    IO_pause("Aperte ENTER para finalizar.");
    
}