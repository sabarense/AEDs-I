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

    int acharMaiorImpar() {
        
        int maior = 2; // Valor inicial de referência
        for (int i = 0; i < elementos.size(); ++i) {
            if (elementos[i] % 2 == 1 && elementos[i] > maior) {
                maior = elementos[i];
            }
        }
        return maior;
    }
};

int main() {

    Arranjo arranjo;

    arranjo.lerArquivo("DADOS.TXT");

    int maiorImpar = arranjo.acharMaiorImpar();

    cout << "O maior valor impar no arranjo e: " << maiorImpar << endl;

    return 0;
}
