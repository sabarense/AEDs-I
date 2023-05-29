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

    bool positivos() {
        
        bool result = true;
        for (int i = 0; i < elementos.size(); ++i) {
            if (elementos[i] <= 0) {
                result = false;;
            }
        }
        return result;
    }
};

int main() {

    Arranjo arranjo;

    arranjo.lerArquivo("DADOS.TXT");

    bool teste = arranjo.positivos();

    if(teste) {
        cout << "Todos os valores no arranjo sao positivos." << endl;
    }else{
        cout << "Existem valores nao positivos no arranjo." << endl;
    }
   
    return 0;
}
