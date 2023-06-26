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

int intArray_cmp(ref_intArray p, ref_intArray q) {
    int minLength = std::min(p->length, q->length);

    for (int i = 0; i < minLength; i++) {
        if (p->data[i] != q->data[i]) {
            return p->data[i] - q->data[i];
        }
    }

    return p->length - q->length;
}

int main() {
    intArray arr1 = { 5, new int[5]{ 1, 2, 3, 4, 5 } };
    intArray arr2 = { 5, new int[5]{ 1, 2, 3, 4, 6 } };

    ref_intArray p = &arr1;
    ref_intArray q = &arr2;

    int result = intArray_cmp(p, q);

    if (result == 0) {
        std::cout << "Os arranjos são iguais." << std::endl;
    } else if (result < 0) {
        std::cout << "O primeiro arranjo é menor." << std::endl;
    } else {
        std::cout << "O primeiro arranjo é maior." << std::endl;
    }

    delete[] arr1.data;
    delete[] arr2.data;

    return 0;
}