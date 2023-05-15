#include "io.h"

void readNegativeDoubleMatrix(int linhas, int colunas, double matriz[][colunas]) {

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", (i+1), (j+1));
            scanf("%lf", &matriz[i][j]);
            if (matriz[i][j] >= 0) {
                printf("ERRO: valor nao negativo!\n");
                j--; // Volta para a coluna anterior
            } else {
                matriz[i][j];
            }
        }
    }
}    
void printDoubleMatrix(int linhas, int colunas, double matriz[][colunas]){

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("[%lf]", matriz[i][j]);
        }
        printf("\n");
    }
}    

int main(){

    double matriz[10][10];
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

    readNegativeDoubleMatrix(linhas, colunas, matriz);

    printf("Matriz:\n");
    printDoubleMatrix(linhas, colunas, matriz);
   
    return 0;
}
