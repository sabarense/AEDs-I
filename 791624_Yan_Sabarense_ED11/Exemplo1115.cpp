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

    float mediaValores(int inicio, int fim) {

        float soma = 0;
        float media = 0;
        int divisor = 0;
        
        for (int i = inicio; i <= fim; ++i) {
            soma += elementos[i];
            divisor++;
        }
        media = soma / divisor;
        return media;
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

    float media = arranjo.mediaValores(inicio, fim);

    cout << "A media dos valores entre as posicoes " << inicio << " e " << fim << " e: " << media << endl;

    return 0;
}
