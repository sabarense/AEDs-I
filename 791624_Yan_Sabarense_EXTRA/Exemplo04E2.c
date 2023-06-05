#include "io.h"

int contarDigitos(char str[STR_SIZE]) {

    int contador = 0;
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            contador++;
        }
    }
    return contador;
}

int main(){

    char palavra1[80];
    char palavra2[80];

    printf("Digite a primeira cadeia de caractere: ");
    gets(palavra1);

    printf("Digite a segunda cadeia de caractere: ");
    gets(palavra2);

    int qtdDigitosPalavra1 = contarDigitos(palavra1);
    int qtdDigitosPalavra2 = contarDigitos(palavra2);

    if(qtdDigitosPalavra1 < qtdDigitosPalavra2){
        printf("A primeira sequencia possui a menor quantidade de digitos.\n");    
    }else if(qtdDigitosPalavra2 < qtdDigitosPalavra1){
        printf("A segunda sequencia possui a menor quantidade de digitos.\n");     
    }else{
        printf("As duas sequencias possuem a mesma quantidade de digitos.\n");    
    }
}