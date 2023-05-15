#include "io.h"

void readDoubleMatrix(int linhas, int colunas, double matriz[][colunas]) {

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}    

void fprintDoubleMatrix(chars fileName, int linha, int coluna, double matriz[][coluna]){

    FILE* arquivo = fopen (fileName, "wt");

    fprintf(arquivo,"%d\n", linha);
    fprintf(arquivo,"%d\n", coluna);        

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            fprintf(arquivo,"%.2lf\n", matriz[i][j]);
        }
    }
    fclose(arquivo);
}

int main(){

    double matriz[10][10];
    int linhas, colunas;

    do{
        printf("Digite o numero de linhas da matriz: ");
        scanf("%d", &linhas);
        printf("Digite o numero de colunas da matriz: ");
        scanf("%d", &colunas);

        if(linhas <= 0 || colunas <= 0){
            printf("ERRO: dimensoes invalidas!\n");
        }
    }while(linhas <= 0 || colunas <= 0);

    readDoubleMatrix(linhas, colunas, matriz);

    fprintDoubleMatrix("MATRIZ_01.TXT", linhas, colunas, matriz);

    return 0;
}
