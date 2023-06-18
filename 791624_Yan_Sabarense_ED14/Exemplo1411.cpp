/*
 Exemplo1401 - v0.0. - __ / __ / _____
 Author: _____________________________
*/
// ----------------------------------------------- preparacao
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
// outras dependencias
void pause(std::string text)
{
    std::string dummy;
    std::cin.clear();
    std::cout << std::endl
              << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl
              << std::endl;
} // end pause ( )
// ----------------------------------------------- classes
#include "Erro.hpp" // classe para tratar erros
class MyString : public Erro
{
public:
    /**
     * Funcao para obter mensagem
     * relativa ao código de erro.
     * @return mensagem sobre o erro
     */
    std::string getErroMsg()
    {
        return (NO_ERROR); // COMPLETAR A DEFINICAO
    }                      // end getErroMsg ( )
};                         // fim classe MyString
// ----------------------------------------------- definicoes globais
using namespace std;
// ----------------------------------------------- metodos
/**
 Method00 - nao faz nada.
*/
void method00()
{
    // nao faz nada
} // fim method00 ( )
/**
 Method01 - Testar definicoes da classe.
*/
void method01()
{
    // definir dados
    MyString *s = new MyString();
    // identificar
    cout << "\nEXEMPLO1401 - Method01 - v0.0\n"
         << endl;
    // encerrar
    pause("Apertar ENTER para continuar");
} // fim method01 ( )

int getInt()
{
    std::string input;
    std::getline(std::cin, input); // Lê uma linha de entrada do usuário

    std::cout << "Digite um numero inteiro: ";
    int number = getInt();

    if (number != -1) {
        std::cout << "Numero valido: " << number << std::endl;
    } else {
        std::cout << "Numero invalido!" << std::endl;
    }

    try {
        int value = std::stoi(input); // Converte a string para um inteiro
        return value;
    } catch (std::invalid_argument&) {
        return -1; // Caso ocorra uma exceção de argumento inválido (valor não inteiro)
    } catch (std::out_of_range&) {
        return -1; // Caso ocorra uma exceção de estouro (valor fora do intervalo representável)
    }

}
// ----------------------------------------------- acao principal
/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(int argc, char **argv)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
               // repetir até desejar parar
    do
    {
        // identificar
        cout << "EXEMPLO1401 - Programa - v0.0\n " << endl;
        // mostrar opcoes
        cout << "Opcoes " << endl;
        cout << " 0 - parar " << endl;
        cout << " 1 - testar definicoes " << endl;
        cout << " 2 - converter string para inteiro " << endl;
        // ler do teclado
        cout << endl
             << "Entrar com uma opcao: ";
        cin >> x;
        // escolher acao
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;
        case 2:
            getInt();
            break;
        default:
            cout << endl
                 << "ERRO: Valor invalido." << endl;
        } // fim escolher
    } while (x != 0);
    // encerrar
    pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
