#include "io.h" 

int main(){
    IO_id("Exemplo0411");

    double valorInferior = 0;
    double valorSuperior = 0;
    int x = 0;
    int n = 0;
    int pertenceIntervalo = 0;
    int naoPertenceIntervalo = 0;

    valorInferior = IO_readdouble("Digite o limite inferior do intervalo [a:b]: ");

    do{
        valorSuperior = IO_readdouble("Digite o limite superior do intervalo [a:b]: ");
    }while(valorInferior>valorSuperior);

    n = IO_readint("Digite a quantidade de valores a serem lidos: ");

    for(int i = 0; i < n; i++){
        IO_printf("Digite o %i valor: ", i + 1);
        x = IO_readint("");
        if(x >= valorInferior && x <= valorSuperior){
            pertenceIntervalo = pertenceIntervalo+1;
        }else{
            naoPertenceIntervalo = naoPertenceIntervalo + 1;
        }
    }

    IO_printf("Existem %i valores dentro do intervalo, e %i valores fora do intervalo.", pertenceIntervalo, naoPertenceIntervalo);

    IO_pause("Aperte ENTER para finalizar.");
    
    //resultado está constando 5 valores dentro, e 5 fora, porém, deveria resulta em 6 dentro e 4 fora. nao soube o porquê.

}