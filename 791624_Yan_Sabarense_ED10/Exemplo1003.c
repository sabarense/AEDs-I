/*
 Exemplo1010 - v0.0. - __ / __ / _____
 Author: ________________________
*/
// dependencias
#include "io.h" // para definicoes proprias
// ----------------------------------------------- definicoes globais
/**
 Definicao de tipo arranjo com inteiros
 baseado em estrutura
*/
typedef struct s_int_Array
{
    int length;
    ints data;
    int ix;
} int_Array;
/**
 Definicao de referencia para arranjo com inteiros
 baseado em estrutura
*/
typedef int_Array *ref_int_Array;
/**
 new_int_Array - Reservar espaco para arranjo com inteiros
 @return referencia para arranjo com inteiros
 @param n - quantidade de datos
*/
ref_int_Array new_int_Array(int n)
{
    // reserva de espaco
    ref_int_Array tmpArray = (ref_int_Array)malloc(sizeof(int_Array));
    // estabelecer valores padroes
    if (tmpArray == NULL)
    {
        IO_printf("\nERRO: Falta espaco.\n");
    }
    else
    {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;
        if (n > 0)
        {
            // guardar a quantidade de dados
            tmpArray->length = n;
            // reservar espaco para os dados
            tmpArray->data = (ints)malloc(n * sizeof(int));
            // definir indicador do primeiro elemento
            tmpArray->ix = 0;
        } // fim se
    }     // fim se
          // retornar referencia para espaco reservado
    return (tmpArray);
} // fim
/**
 free_int_Array - Dispensar espaco para arranjo com inteiros
 @param tmpArray - referencia para grupo de valores inteiros
*/
void free_int_Array(ref_int_Array tmpArray)
{
    // testar se ha' dados, antes de reciclar o espaco
    if (tmpArray != NULL)
    {
        if (tmpArray->data != NULL)
        {
            free(tmpArray->data);
        } // fim se
        free(tmpArray);
    } // fim se
} // fim free_int_Array ( )
// ----------------------------------------------- metodos
/**
 Method00 - nao faz nada.
*/
void method00()
{
    // nao faz nada
} // fim method00 ( )
/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param array - grupo de valores inteiros
*/
void printIntArray(int_Array array)
{
    // mostrar valores no arranjo
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // mostrar valor
            printf("%2d: %d\n", array.ix, array.data[array.ix]);
        } // fim repetir
    }     // fim se
} // printIntArray ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01()
{
    // definir dado
    int_Array array;
    // montar arranjo em estrutura
    array.length = 5;
    array.data = (ints)malloc(array.length * sizeof(int));
    // testar a existência de dados
    if (array.data)
    {
        array.data[0] = 1;
        array.data[1] = 2;
        array.data[2] = 3;
        array.data[3] = 4;
        array.data[4] = 5;
    } // fim se

    // identificar
    IO_id("EXEMPLO1010 - Method01 - v0.0");
    // executar o metodo auxiliar
    printIntArray(array);
    // reciclar o espaco
    if (array.data)
    {
        free(array.data);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method01 ( )

/**
 IO_readintArray - Ler arranjo com valores inteiros.
 @return arranjo com valores lidos
*/
int_Array IO_readintArray()
{
    // definir dados locais
    chars text = IO_new_chars(STR_SIZE);
    static int_Array array;
    // ler a quantidade de dados
    do
    {
        array.length = IO_readint("\nlength = ");
    } while (array.length <= 0);
    // reservar espaco para armazenar
    array.data = IO_new_ints(array.length);
    // testar se ha' espaco
    if (array.data == NULL)
    {
        array.length = 0; // nao ha' espaco
    }
    else
    {
        // ler e guardar valores em arranjo
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // ler valor
            strcpy(text, STR_EMPTY);
            array.data[array.ix] = IO_readint(IO_concat(
                IO_concat(text, IO_toString_d(array.ix)), " : "));
        } // fim repetir
    }     // fim se
          // retornar arranjo
    return (array);
} // IO_readintArray ( )
/**
 Method02.
*/
void method02()
{
    // definir dados
    int_Array array;
    // identificar
    IO_id("EXEMPLO1010 - Method02 - v0.0");
    // ler dados
    array = IO_readintArray();
    // testar a existência de dados
    if (array.data)
    {
        // mostrar dados
        IO_printf("\n");
        printIntArray(array);
        // reciclar o espaco
        free(array.data);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method02 ( )

/**
 fprintIntArray - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
void fprintIntArray(chars fileName, int_Array array)
{
    // definir dados locais
    FILE *arquivo = fopen(fileName, "wt");
    // gravar quantidade de dados
    fprintf(arquivo, "%d\n", array.length);
    // gravar valores no arquivo, se existirem
    if (array.data)
    {
        for (array.ix = 0; array.ix < array.length; array.ix = array.ix + 1)
        {
            // gravar valor
            fprintf(arquivo, "%d\n", array.data[array.ix]);
        } // fim repetir
    }     // fim se

    // fechar arquivo
    fclose(arquivo);
} // fprintIntArray ( )
/**
 Method03.
*/
void method03()
{
    // definir dados
    int_Array array;
    // identificar
    IO_id("EXEMPLO0803 - Method03 - v0.0");
    // ler dados
    array = IO_readintArray();
    // testar a existência de dados
    if (array.data)
    {
        // mostrar e gravar dados
        IO_printf("\n");
        printIntArray(array);
        fprintIntArray("ARRAY1.TXT", array);
        // reciclar o espaco
        free(array.data);
    } // fim se
      // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method03 ( )

int main()
{
    method03();
}