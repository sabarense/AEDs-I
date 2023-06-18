// ----------------------------------------------- classes
#include "Contato.hpp" // classe para tratar dados de pessoas
// ----------------------------------------------- definicoes globais
#include "io.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    Contato contato1;
    contato1.readNome("Digite o nome: ");
    contato1.testarNovaCaracteristica();
}