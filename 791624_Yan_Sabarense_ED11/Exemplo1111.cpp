#include <iostream> 
#include <limits>  
#include <string>  
#include "myarray.hpp"

using namespace std;

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
} 

class Arranjo {
private:
    int* elementos;
    int quantidade;

public:
    Arranjo() : elementos(nullptr), quantidade(0) {}

    ~Arranjo() {
        delete[] elementos;
    }

    void lerQuantidade() {
        cout << "Digite a quantidade de elementos a serem gerados: ";
        cin >> quantidade;
    }

    void gerarValores(int inferior, int superior) {
        elementos = new int[quantidade];
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < quantidade; ++i) {
            elementos[i] = rand() % (superior - inferior + 1) + inferior;
        }
    }

    void gravarArquivo(const string& nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        arquivo << quantidade << endl;

        for (int i = 0; i < quantidade; ++i) {
            arquivo << elementos[i] << endl;
        }

        arquivo.close();
    }
};

int main() {

    Arranjo arranjo;
    
    arranjo.lerQuantidade();

    int inferior, superior;
    do{
        cout << "Digite o valor inferior do intervalo: ";
        cin >> inferior;
        cout << "Digite o valor superior do intervalo: ";
        cin >> superior;
        if(inferior >= superior){
            cout << "ERRO. Tente um valor inferior menor que o valor superior" << endl;
        }
    }while(inferior >= superior);

    arranjo.gerarValores(inferior, superior);
    arranjo.gravarArquivo("DADOS.TXT");

    cout << "Valores gravados no arquivo DADOS.TXT." << endl;

    return 0;
}
