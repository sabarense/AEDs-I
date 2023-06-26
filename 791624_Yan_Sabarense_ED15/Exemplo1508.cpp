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

ref_intArray intArray_cat(ref_intArray p, ref_intArray q) {
    int totalLength = p->length + q->length;
    int* newData = new int[totalLength];

    // Copiar os elementos do primeiro arranjo para newData
    for (int i = 0; i < p->length; i++) {
        newData[i] = p->data[i];
    }

    // Copiar os elementos do segundo arranjo para newData
    for (int i = 0; i < q->length; i++) {
        newData[p->length + i] = q->data[i];
    }

    ref_intArray result = new intArray;
    result->length = totalLength;
    result->data = newData;

    return result;
}

int main() {
    intArray arr1 = { 3, new int[3]{ 1, 2, 3 } };
    intArray arr2 = { 2, new int[2]{ 4, 5 } };

    ref_intArray p = &arr1;
    ref_intArray q = &arr2;

    ref_intArray result = intArray_cat(p, q);

    std::cout << "Arranjo resultante: ";
    for (int i = 0; i < result->length; i++) {
        std::cout << result->data[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr1.data;
    delete[] arr2.data;
    delete[] result->data;
    delete result;

    return 0;
}
