#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Matriz {
private:
    int** matriz;
    int linhas;
    int colunas;

public:
    Matriz(int m, int n) : linhas(m), colunas(n) {
        matriz = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            matriz[i] = new int[colunas];
        }
    }

    ~Matriz() {
        for (int i = 0; i < linhas; i++) {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

    Matriz(const vector<vector<int>>& valores) : Matriz(valores.size(), valores[0].size()) {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = valores[i][j];
            }
        }
    }

    bool operator==(const Matriz& outra) const {
        if (linhas != outra.linhas || colunas != outra.colunas) {
            return false;
        }

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (matriz[i][j] != outra.matriz[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    void gravarEmArquivo(const string& nomeArquivo) const {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            arquivo << linhas << " " << colunas << endl;

            for (int i = 0; i < linhas; i++) {
                for (int j = 0; j < colunas; j++) {
                    arquivo << matriz[i][j] << " ";
                }
                arquivo << endl;
            }

            arquivo.close();
            cout << "Dados gravados em " << nomeArquivo << endl;
        } else {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    void imprimir() const {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << matriz[i][j] << " ";
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
    vector<vector<int>> valores1 = lerMatrizArquivo("DADOS.TXT");
    vector<vector<int>> valores2 = lerMatrizArquivo("DADOS2.TXT");

    if (!valores1.empty() && !valores2.empty()) {
        Matriz matrix1(valores1);
        Matriz matrix2(valores2);

        cout << "Matriz1:" << endl;
        matrix1.imprimir();

        cout << "Matriz2:" << endl;
        matrix2.imprimir();

        bool teste = (matrix1 == matrix2);
        cout << "As matrizes sao iguais? " << (teste ? "Sim" : "Nao") << endl;
    } else {
        cout << "Erro ao ler o arquivo." << endl;
    }

    return 0;
}
