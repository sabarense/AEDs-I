#include "./io.h" 

int main(){
    int x = 2;
    IO_printf("primeiro valor de x = %i\n", x);
    x = IO_readint("Digite um valor para x = ");
    IO_printf("segundo valor de x = %i\n", x);
    float area = (x * x) * 7;
    IO_printf("Sete vezes a area do quadrado = %f\n", area);
}