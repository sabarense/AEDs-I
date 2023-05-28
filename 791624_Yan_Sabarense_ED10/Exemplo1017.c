#include "io.h"

void lerElementoMatriz(int linha, int coluna, int matriz[][coluna]){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }    
    }
}

void imprimirMatrizArquivo(chars fileName, int linha, int coluna, int matriz[][coluna]){
    
    FILE *arquivo = fopen(fileName, "wt");
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; i < coluna; j++){
            fprintf(arquivo,"[%d]\n",matriz[i][j]);
        }
        printf("\n");
    }
    fclose(arquivo);
}

int lerMatrizArquivo(chars fileName, int linha, int coluna, int matriz[][coluna]){

    FILE *arquivo = fopen(fileName, "rt");
    int i = 0;
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    while(!feof(arquivo) && i < coluna){
        fscanf(arquivo,"%d", &matriz[linha][coluna]);
        i = i + 1;
    }
    fclose(arquivo);
}

int zeroMatriz(chars fileName, int linhas, int colunas, int matriz[][colunas]){
    
    FILE *arquivo = fopen(fileName, "rt");
    int i = 0;
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    while(!feof(arquivo) && i < colunas){
        fscanf(arquivo,"%d", &matriz[linha][coluna]);
        if(matriz[linhas][colunas] == 0){
            return true;
        }
        i = i + 1;
    }
    fclose(arquivo);
}    


int main(){
    
    int matriz[10][10];
    int linhas, colunas;

     do{
        printf("Digite o numero de linhas da matriz: ");
        scanf("%d", &linhas);

        printf("Digite o numero de colunas da matriz: ");
        scanf("%d", &colunas);

        if (linhas <= 0 || colunas <= 0){
            printf("ERRO: dimensoes invalidas!\n");
        }
    }while(linhas <= 0 || colunas <= 0);

    lerElementoMatriz(linhas, colunas, matriz);
    imprimirMatrizArquivo("DADOS1.TXT",linhas,colunas,matriz);
    lerMatrizArquivo("DADOS1.TXT", linhas, colunas, matriz);

    int matriz1 = lerMatrizDeArquivo("DADOS1.TXT", linhas, colunas);
    int resposta = zeroMatriz(matriz1);
}