#include <iostream>
#include <cstring>
#include <iostream>
// ----------------------------------------------- definicoes globais
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
} // end pause ( )

typedef struct {
    int length;
    int* data;
} intArray;

typedef intArray* ref_intArray;

int* intArray_seek(ref_intArray a, int x) {
    for (int i = 0; i < a->length; i++) {
        if (a->data[i] == x) {
            return &(a->data[i]);
        }
    }
    return nullptr;
}

int main() {
    // Exemplo de uso da função intArray_seek

    // Criar um arranjo de inteiros
    int arr[] = {10, 20, 30, 40, 50};
    intArray myArray = {5, arr};

    // Procurar pelo valor 30 no arranjo
    int x = 30;
    int* result = intArray_seek(&myArray, x);

    // Verificar se o valor foi encontrado
    if (result != nullptr) {
        std::cout << "Valor " << x << " encontrado no arranjo!" << std::endl;
    } else {
        std::cout << "Valor " << x << " nao encontrado no arranjo." << std::endl;
    }
    return 0;
}
