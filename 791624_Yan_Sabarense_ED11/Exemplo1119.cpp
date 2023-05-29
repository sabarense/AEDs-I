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

    int escalar(int constante, int inicio, int fim){
        
        int result = 0;
        for (int i = inicio; i <= fim; ++i) {
            result = elementos[i] *= constante;
        }
        return result;
    }
};

int main() {

    Arranjo arranjo;

    int inicio, fim, constante;

    cout << "Digite a posicao inicial: ";
    cin >> inicio;

    cout << "Digite a posicao final: ";
    cin >> fim;

    cout << "Digite o valor constante: ";
    cin >> constante;

    arranjo.lerArquivo("DADOS.TXT");

    int novo = arranjo.escalar(constante, inicio, fim);

    cout << "O resultado e " << novo << endl;
    return 0;
}
