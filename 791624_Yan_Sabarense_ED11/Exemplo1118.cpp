#include <iostream> 
#include <limits>  
#include <string>  
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "myarray.hpp"

using namespace std;

void pause(string text)
{
    string dummy;
    cin.clear();
    cout << endl
              << text;
    cin.ignore();
    getline(cin, dummy);
    cout << endl
              << endl;
} 

class Arranjo {

private:

    vector<int> elementos;

public:

    void lerArquivo(const string& nomeArquivo) {

        ifstream arquivo(nomeArquivo);
        int quantidade;
        arquivo >> quantidade;

        elementos.resize(quantidade);

        for (int i = 0; i < quantidade; ++i) {
            arquivo >> elementos[i];
        }
        arquivo.close();
    }

    bool acharValor(int procurado, int inicio, int fim){

        bool result = false;

        for (int i = inicio; i <= fim; ++i) {
            if (elementos[i] == procurado) {
                return result = true;
            }
        }
    }
};

int main() {

    Arranjo arranjo;

    int inicio, fim, procurado;

    cout << "Digite o valor a ser procurado: ";
    cin >> procurado;

    cout << "Digite a posicao inicial: ";
    cin >> inicio;

    cout << "Digite a posicao final: ";
    cin >> fim;

    arranjo.lerArquivo("DADOS.TXT");

    bool existe = arranjo.acharValor(procurado, inicio, fim);

    if(existe) {
        cout << "O valor " << procurado << " existe no arranjo" << endl;
    }else{
        cout << "O valor " << procurado << " nao esta entre as posicoes dadas" << endl;
    }
    return 0;
}
