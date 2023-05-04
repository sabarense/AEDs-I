#include "io.h"

int main(){
    
    IO_id("Exemplo319");

    double a = 0;
    double b = 0;
    int n = 0;
    int x = 0;
    int count = 0;

    a = IO_readdouble("Digite o limite inferior do intervalo [a:b]: ");

    do{
        b = IO_readdouble("Digite o limite superior do intervalo [a:b]: ");
    }while(a > b);
   
    n = IO_readint("Digite a quantidade de valores a serem testados: ");

    double *vetor;

    vetor = (double*) malloc(n * sizeof(double));
    
    // inicializando posicoes do vetor
    for(int i = 0; i < n; i++){       
        vetor[i] = 0.0;
    }

    //inserindo no vetor a quantidade de valores caso atenda a condicional
    for(int i = 0; i < n; i++){

        IO_printf("Digite o %i valor: ", i + 1);
        x = IO_readdouble(""); 

        if(x >= a && x <= b && (int)x % 2 != 0) {
            count++;
            vetor[i] = x;
        }
    }

    IO_printf("Existem %i valores lidos cujas partes inteiras sao par e que pertencem ao intervalo [%lf:%lf]\n", count, a, b);

    //lendo valores preenchidos do vetor
    for(int j = 0; j < n; j++){
        if(vetor[j] != 0.0){
            IO_printf("Posicao [ %i ] = [ %lf ]\n", j , vetor[j]);
        }
    }

    IO_pause("Apertar ENTER para continuar");
} 