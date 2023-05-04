#include "io.h" 


bool ehMaiuscula(char palavra[STR_SIZE]){

    bool result = false;
    if ( ('A' <= palavra && palavra < 'K') ){
        result = true;
    }
    return (result);
}

bool ehMinuscula(char palavra[STR_SIZE]){

    bool result = false;
    if ( ('a' <= palavra && palavra < 'k') ){
        result = true;
    }
    return (result);
}

int main(){

    IO_id("Exemplo0413");

    char palavra[STR_SIZE];
    int maiusculas = 0;
    int minusculas = 0;
    char simbolo = '_';

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);
    
    for(int i = 0; i < tamanho; i++){
        simbolo = palavra[i];
        if(ehMaiuscula(simbolo)){
            maiusculas = maiusculas +1;
        }else if(ehMinuscula(simbolo)){
            minusculas = minusculas +1;
        }
    }

    IO_printf("Existem [%i] letras maiusculas menores que K, e [%i] minusculas menores que K ", maiusculas, minusculas);
    
    IO_pause("Aperte ENTER para finalizar.");
    
}