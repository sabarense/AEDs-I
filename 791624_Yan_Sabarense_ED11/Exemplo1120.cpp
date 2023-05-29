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

    bool estaOrdenado() {

        for(int i = 0; i < elementos.size() - 1; ++i) {
            if(elementos[i] > elementos[i + 1]) {
                return false;
            }
        }
        return true;
    }

    void ordenarCrescente() {

        for (int i = 0; i < elementos.size(); i++) {
            for (int j = i + 1; j < elementos.size(); j++) {
                if (elementos[i] > elementos[j]) {
                    int tmp = elementos[i];
                    elementos[i] = elementos[j];
                    elementos[j] = tmp;
                }
            }
        }

        for (int i = 0; i < elementos.size(); i++) {
            cout << elementos[i] << endl;
        }
    }
};

int main() {

    Arranjo arranjo;

    arranjo.lerArquivo("DADOS.TXT");

    if(arranjo.estaOrdenado()) {
        cout << "O arquivo ja esta ordenado." << endl;
    }else{
        cout << "Ordenando o arquivo..." << endl;
        arranjo.ordenarCrescente();
    }
    return 0;
}
