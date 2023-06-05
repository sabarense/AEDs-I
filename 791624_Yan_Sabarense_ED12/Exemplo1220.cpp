#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Matriz {
private:
    vector<vector<int>> matriz;

public:
    Matriz(const vector<vector<int>>& valores) : matriz(valores) {}

    void transpor() {
        if (matriz.empty()) {
            return;
        }

        vector<vector<int>> matrizTransposta(matriz[0].size(), vector<int>(matriz.size()));

        for (size_t i = 0; i < matriz.size(); i++) {
            for (size_t j = 0; j < matriz[i].size(); j++) {
                matrizTransposta[j][i] = matriz[i][j];
            }
        }

        matriz = matrizTransposta;
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
        Matriz matrix(valores);

        cout << "Matriz original:" << endl;
        matrix.imprimir();

        matrix.transpor();

        cout << "Matriz transposta:" << endl;
        matrix.imprimir();
    } else {
        cout << "Erro ao ler o arquivo." << endl;
    }

    return 0;
}
