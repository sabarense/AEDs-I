/*
 Exemplo0302 - v0.0. - __ / __ / _____
 Author: ________________________
*/
// dependencias
#include "io.h" // para definicoes proprias
/**
 Method00 - nao faz nada.
*/
void method00()
{
    // nao faz nada
} // fim method00 ( )
/**
 Method01 - Repeticao com teste no inicio.
*/
void method01()
{
    // definir dado
    int x = 0;
    // identificar
    IO_id("EXEMPLO0301 - Method01 - v0.0");
    // ler do teclado o valor inicial
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    while (x > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));
        // passar ao proximo valor
        x = x - 1;
    } // fim repetir
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )

/**
 Method02 - Repeticao com teste no inicio.
*/

void method02()
{
    // definir dado
    int x = 0;
    int y = 0;
    // identificar
    IO_id("EXEMPLO0302 - Method02 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    y = x; // copiar o valor lido (e' melhor)
    while (y > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));
        // passar ao proximo valor
        y = y - 1;
    } // fim repetir
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXEMPLO0302 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;
        case 2:
            method02();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
                               IO_concat(IO_toString_d(x), ")")));
        } // fim escolher
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  a.) 0
  b.) 1
  c.) 5
  d.) -5
  ---------------------------------------------- historico
  Versao Data Modificacao
   0.1 __/__ esboco
  ---------------------------------------------- testes
  Versao Teste
   0.1 01. ( OK ) identificacao de programa
  */