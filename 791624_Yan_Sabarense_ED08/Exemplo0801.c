#include "io.h"

/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void printIntArray(int n, int array[])
{
    // definir dado local
    int x = 0;

    // mostrar valores no arranjo
    for (x = 0; x < n; x = x + 1)
    {
        // mostrar valor
        IO_printf("%2d: %d\n", x, array[x]);
    } // fim repetir
} // printIntArray ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01()
{
    // definir dado
    int array[] = {1, 2, 3, 4, 5};
    // identificar
    IO_id("EXEMPLO0810 - Method01 - v0.0");
    // executar o metodo auxiliar
    printIntArray(5, array);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )

int main(){
    method01();
}
