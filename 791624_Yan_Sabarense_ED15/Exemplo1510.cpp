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

ref_intArray intArray_sub(ref_intArray a, int start, int size) {
    if (start < 0 || start >= a->length || size <= 0 || start + size > a->length) {
        return nullptr; // Verificar se os parâmetros são válidos
    }

    intArray* subArray = new intArray; // Criar uma nova estrutura intArray
    subArray->length = size; // Definir o tamanho do subarranjo

    // Alocar memória para o subarranjo
    subArray->data = new int[size];

    // Copiar os valores do arranjo original para o subarranjo
    for (int i = 0; i < size; i++) {
        subArray->data[i] = a->data[start + i];
    }

    return subArray; // Retornar o ponteiro para o subarranjo
}

int main() {
    // Criar um arranjo de inteiros
    intArray arr;
    arr.length = 6;
    arr.data = new int[arr.length] {1, 2, 3, 4, 5, 6};

    // Chamar a função intArray_sub para obter um subarranjo
    ref_intArray subArr = intArray_sub(&arr, 2, 3);

    if (subArr != nullptr) {
        // Imprimir os valores do subarranjo
        for (int i = 0; i < subArr->length; i++) {
            cout << subArr->data[i] << " ";
        }
        cout << endl;

        // Liberar a memória alocada para o subarranjo
        delete[] subArr->data;
        delete subArr;
    } else {
        cout << "Subarranjo inválido." << endl;
    }

    // Liberar a memória alocada para o arranjo original
    delete[] arr.data;

    return 0;
}
