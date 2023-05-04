#include "io.h" 

bool ehDigitoImpar(char str[STR_SIZE]){

    bool result = false;
    if ( ('0' <= str && str <= '9') && (int)str % 2 != 0 ){
        result = true;
    }
    return (result);
}

int main(){

    IO_id("Exemplo0413");

    char palavra[STR_SIZE];
    int digito = 0;
    char simbolo = '_';

    IO_println("Digite uma sequencia de caracteres: ");
    scanf("%s", palavra);
    getchar();

    int tamanho = strlen(palavra);
    
    for(int i = 0; i < tamanho; i++){
        simbolo = palavra[i];
        if(ehDigitoImpar(simbolo)){
            digito = digito +1;
        }
    }

    IO_printf("Existem [%i] digitos impares na cadeia de caracteres ", digito);
    
    IO_pause("Aperte ENTER para finalizar.");
    
    
}