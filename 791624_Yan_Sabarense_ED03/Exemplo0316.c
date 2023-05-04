#include "io.h"

int main(){
    
    IO_id("Exemplo316");

    char cadeiaCaractere[STR_SIZE];
    int tamanho = 0;
    int maiusculas = 0;
    int minusculas = 0;
   
    int simbolo = 0;
    
    IO_println("Entrar com uma cadeia de caracteres: ");
    scanf("%s", cadeiaCaractere);
    getchar();
    
    tamanho = strlen(cadeiaCaractere);
    for (int i = 0; i < tamanho; i++){
        if ('A' <= cadeiaCaractere[i] && cadeiaCaractere[i] <= 'Z'){
            maiusculas++;
        }else if('a' <= cadeiaCaractere[i] && cadeiaCaractere[i] <= 'z'){
            minusculas++;    
        }else{
            IO_printf("%d: [%c]\n", i, cadeiaCaractere[i]);
            simbolo++;
        }
    }
    IO_printf("Existem %i letras maiusculas\n", maiusculas);
    IO_printf("Existem %i letras minusculas\n", minusculas);
    IO_printf("Existem %i simbolos", simbolo);
   
    IO_pause("Apertar ENTER para continuar");
} 