#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Matriz {
private:
    vector<vector<int>> matriz;

public:
    Matriz(const vector<vector<int>>& valores) : matriz(valores) {}

    vector<int> procurarColunas(int procurado) const {
        vector<int> colunas;

        for (size_t j = 0; j < matriz[0].size(); j++) {
            for (size_t i = 0; i < matriz.size(); i++) {
                if (matriz[i][j] == procurado) {
                    colunas.push_back(j);
                    break;
                }
            }
        }

        return colunas;
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

        int procurado;
        cout << "Digite o valor a ser procurado: ";
        cin >> procurado;

        vector<int> colunas = matrix.procurarColunas(procurado);

        cout << "Matriz:" << endl;
        matrix.imprimir();

        if (!colunas.empty()) {
            cout << "O valor " << procurado << " foi encontrado na(s) coluna(s): ";
            for (const auto& coluna : colunas) {
                cout << coluna << " ";
            }
            cout << endl;
        } else {
            cout << "O valor " << procurado << " não foi encontrado na matriz." << endl;
        }
    } else {
        cout << "Erro ao ler o arquivo." << endl;
    }

    return 0;
}
