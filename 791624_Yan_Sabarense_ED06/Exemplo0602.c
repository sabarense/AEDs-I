#include "io.h"

/**
 Method01a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method01a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);
        // passar ao proximo
        method01a(x - 1); // motor da recursividade
    }                     // fim se
} // fim method01a( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01()
{
    // definir dado
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    // identificar
    IO_id("EXEMPLO0601 - Method01 - v0.0");
    // executar o metodo auxiliar
    method01a(5); // motor da recursividade
                  // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )

/**
 Method02a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method02a(int x)
{
    // repetir enquanto valor maior que zero
    if (x > 0)
    {
        // passar ao proximo
        method02a(x - 1); // motor da recursividade
        // mostrar valor
        IO_printf("%s%d\n", "Valor = ", x);
    } // fim se
} // fim method02a( )
/**
 Method02.
*/
void method02()
{
    // identificar
    IO_id("EXEMPLO0602 - Method02 - v0.0");
    // executar o metodo auxiliar
    method02a(5); // motor da recursividade
                  // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )

int main(){

    method02();
}


