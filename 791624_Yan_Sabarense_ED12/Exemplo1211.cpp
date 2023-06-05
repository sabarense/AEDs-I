#include "myarray.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Matrix {
private:
    int M, N;
    int** matriz;

public:
    Matrix(int m, int n) : M(m), N(n) {
        matriz = new int*[M];
        for (int i = 0; i < M; i++) {
            matriz[i] = new int[N];
        }
    }

    ~Matrix() {
        for (int i = 0; i < M; i++) {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

    void gerarInt(int inferior, int superior) {
        srand(time(nullptr));
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matriz[i][j] = rand() % (superior - inferior + 1) + inferior;
            }
        }
    }

    void gravarEmArquivo() {
        ofstream arquivo("DADOS.TXT");
        if (arquivo.is_open()) {
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    arquivo << matriz[i][j] << '\n'; // Um número por linha
                }
            }
            arquivo.close();
            cout << "Dados gravados em DADOS.TXT\n";
        } else {
            cout << "Erro ao abrir o arquivo\n";
        }
    }
};

int main() {

    int M, N;
    int inferior, superior;

    cout << "Digite a quantidade de linhas (M): ";
    cin >> M;
    cout << "Digite a quantidade de colunas (N): ";
    cin >> N;

    cout << "Digite o valor inferior do intervalo: ";
    cin >> inferior;
    cout << "Digite o valor superior do intervalo: ";
    cin >> superior;

    Matrix matrix(M, N);
    matrix.gerarInt(inferior, superior);
    matrix.gravarEmArquivo();

    return 0;
}
