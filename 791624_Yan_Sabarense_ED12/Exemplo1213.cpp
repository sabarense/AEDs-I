#include "myarray.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Matriz {
private:
    vector<vector<int>> matriz;

public:
    Matriz(const vector<vector<int>>& valores) : matriz(valores) {}

    bool identidade() const {
    if (matriz.size() != matriz[0].size()) {
        return false; // A matriz não é quadrada
    }

    for (size_t i = 0; i < matriz.size(); i++) {
        for (size_t j = 0; j < matriz[i].size(); j++) {
            if (i == j && matriz[i][j] != 1) {
                return false; // Diagonal principal diferente de 1
            } else if (i != j && matriz[i][j] != 0) {
                return false; // Elemento fora da diagonal diferente de 0
            }
        }
    }

    return true;
}

    void imprimir() const {
        for (const auto& linha : matriz) {
            for (const auto& elemento : linha) {
                cout << elemento << ", ";
            }
            cout << endl;
        }
    }
};


vector<vector<int>> lerMatrizArquivo(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    vector<vector<int>> matriz;

    if (arquivo.is_open()) {
        int linhas, colunas;
        arquivo >> linhas >> colunas;

        matriz.resize(linhas, vector<int>(colunas));

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                arquivo >> matriz[i][j];
            }
        }

        arquivo.close();
    }

    return matriz;
}

int main() {

    vector<vector<int>> valores = lerMatrizArquivo("DADOS.TXT");

    if (!valores.empty()) {
        Matriz matrix1(valores);

        cout << "Matriz:" << endl;
        matrix1.imprimir();

        bool teste = matrix1.identidade();

        cout << "A matriz e uma matriz identidade? " << (teste ? "Sim" : "Nao") << endl;
    } else {
        cout << "Erro ao ler o arquivo." << endl;
    }

    return 0;
}
