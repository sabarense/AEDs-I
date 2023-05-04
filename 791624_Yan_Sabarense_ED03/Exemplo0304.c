/*
 Exemplo0304 - v0.0. - __ / __ / _____
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

/**
 Method03 - Repeticao com teste no inicio.
*/
void method03()
{
    // definir dado
    int x = 0;
    int y = 0;
    // identificar
    IO_id("EXEMPLO0303 - Method03 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    y = 1; // o valor lido devera' ser preservado
    while (y <= x)
    {
        // mostrar valor atual
        IO_printf("%d\n", y);
        // passar ao proximo valor
        y = y + 1;
    } // fim repetir
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method03 (

/**
 Method04 - Repeticao com teste no inicio e variacao.
*/
void method04()
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;
    // identificar
    IO_id("EXEMPLO0304 - Method04 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    // inicio teste variacao
    for (y = 1; y <= x; y = y + 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");
        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
    } // fim repetir
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04 ( )

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
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio (decrescente)");
        IO_println("2 - repeticao com teste no inicio ( alternativo )");
        IO_println("3 - repeticao com teste no inicio ( crescente )");
        IO_println("4 - repeticao com teste no inicio e variacao ( crescente )");
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
        case 3:
            method03();
            break;
        case 4:
            method04();
        default:
            IO_pause("ERRO: Valor invalido.");

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
  c.) 3
  d.) 5
  e.) -5
  ---------------------------------------------- historico
  Versao Data Modificacao
   0.1 __/__ esboco
  ---------------------------------------------- testes
  Versao Teste
   0.1 01. ( OK ) identificacao de programa
  */