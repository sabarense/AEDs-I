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

    int somarValores(int inicio, int fim) {

        int soma = 0;
        for (int i = inicio; i <= fim; ++i) {
            soma += elementos[i];
        }
        return soma;
    }
};

int main() {

    Arranjo arranjo;

    int inicio, fim;

    cout << "Digite a posicao inicial: ";
    cin >> inicio;

    cout << "Digite a posicao final: ";
    cin >> fim;

    arranjo.lerArquivo("DADOS.TXT");

    int soma = arranjo.somarValores(inicio, fim);

    cout << "A soma dos valores entre as posicoes " << inicio << " e " << fim << " e: " << soma << endl;

    return 0;
}
