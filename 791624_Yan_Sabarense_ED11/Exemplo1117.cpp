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

    bool crescente(){

        bool result = true;

        for (int i = 0; i < elementos.size(); ++i) {
            if (elementos[i] > elementos[i + 1]) {
                result = false;
            }
        }
        return result;
    }
};

int main() {

    Arranjo arranjo;

    arranjo.lerArquivo("DADOS.TXT");

    bool teste = arranjo.crescente();

    if(teste) {
        cout << "O arranjo esta ordenado" << endl;
    }else{
        cout << "O arranjo nao esta ordenado" << endl;
    }

    return 0;
}
