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

    Matriz escalar(int constante) const {

        vector<vector<int>> matrizEscalar(matriz.size(), vector<int>(matriz[0].size()));

        for (size_t i = 0; i < matriz.size(); i++) {
            for (size_t j = 0; j < matriz[i].size(); j++) {
                matrizEscalar[i][j] = matriz[i][j] * constante;
            }
        }

        return Matriz(matrizEscalar);
    }

    void imprimir() const {
        for (const auto& linha : matriz) {
            for (const auto& elemento : linha) {
                cout << elemento << " ";
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
    

    vector<vector<int>> valores = lerMatrizArquivo("DADOS1.TXT");

    if (!valores.empty()) {
        Matriz matrix1(valores);

        int constante;
        cout << "Digite a constante para escalar a matriz: ";
        cin >> constante;

        Matriz matrix2 = matrix1.escalar(constante);

        cout << "Matriz original:" << endl;
        matrix1.imprimir();

        cout << "Matriz escalada:" << endl;
        matrix2.imprimir();
    } else {
        cout << "Erro ao ler o arquivo." << endl;
    }

    return 0;
}
