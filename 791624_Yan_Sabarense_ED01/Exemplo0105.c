/*
 Exemplo0105 - v0.0. - __ / __ / _____
 Author: Yan Sabarensey

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0105 exemplo0105.c
 Windows: gcc -o exemplo0105 exemplo0105.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0105
 Windows: exemplo0105
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    // definir dado
    char x[80] = "abc"; // definir variavel com tamanho e valor inicial
    char *px = &x[0];   // definir alternativa para acesso via endereco
                        // identificar
    printf("%s\n", "EXEMPLO0105 - Programa - v0.0");
    printf("%s\n", "Autor: Yan Sabarense");
    printf("\n"); // mudar de linha
                  // mostrar valor inicial
    printf("%s%s\n", "x = ", x);
    // OBS.: O formato para caracteres -> %s
    // ler do teclado
    printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", x);
    // OBS.: Nao devera' ser usado o endereco dessa vez !
    // O tamanho do valor NAO devera' ultrapassar 80 símbolos.
    getchar(); // OBS.: Limpar a entrada de dados
               // mostrar valor lido
    printf("%s%s\n", "x = ", x);
    // ler do teclado (forma alternativa para acesso via endereco)
    printf("Entrar com outra cadeia de caracteres: ");
    scanf("%s", px);
    getchar(); // OBS.: Limpar a entrada de dados
               // mostrar valor lido (forma alternativa para acesso via endereco)
    printf("%s%s\n", "x = ", px);
    // encerrar
    printf("\n\nApertar ENTER para terminar.\n");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
} // fim main( )
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  a.) def
  b.) d e f
  c.) d_e_f
  ---------------------------------------------- historico
  Versao Data Modificacao
   0.1 __/__ esboco
  ---------------------------------------------- testes
  Versao Teste
   0.1 01. ( OK ) identificacao de programa
  */