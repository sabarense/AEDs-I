#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Matriz {
private:
    vector<vector<int>> matriz;

public:
    Matriz(const vector<vector<int>>& valores) : matriz(valores) {}

    Matriz somar(const Matriz& outraMatriz) const {
        if (matriz.size() != outraMatriz.matriz.size() || matriz[0].size() != outraMatriz.matriz[0].size()) {
            throw runtime_error("As matrizes nao tem o mesmo tamanho.");
        }

        vector<vector<int>> matrizSoma(matriz.size(), vector<int>(matriz[0].size()));

        for (size_t i = 0; i < matriz.size(); i++) {
            for (size_t j = 0; j < matriz[i].size(); j++) {
                matrizSoma[i][j] = matriz[i][j] + outraMatriz.matriz[i][j];
            }
        }

        return Matriz(matrizSoma);
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
    vector<vector<int>> valores1 = lerMatrizArquivo("DADOS1.TXT");
    vector<vector<int>> valores2 = lerMatrizArquivo("DADOS2.TXT");

    if (!valores1.empty() && !valores2.empty()) {
        Matriz matrix1(valores1);
        Matriz matrix2(valores2);

        try {
            Matriz soma = matrix1.somar(matrix2);

            cout << "Matriz 1:" << endl;
            matrix1.imprimir();

            cout << "Matriz 2:" << endl;
            matrix2.imprimir();

            cout << "Soma das matrizes:" << endl;
            soma.imprimir();
        } catch (const exception& e) {
            cout << "Erro ao somar as matrizes: " << e.what() << endl;
        }
    } else {
        cout << "Erro ao ler os arquivos." << endl;
    }

    return 0;
}
