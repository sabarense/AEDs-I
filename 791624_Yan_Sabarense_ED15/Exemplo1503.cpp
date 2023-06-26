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


char* str_push_front(char* s, char c) {
    size_t length = strlen(s); // Obter o comprimento atual da cadeia

    char* newString = new char[length + 2]; // Alocar memória para a nova cadeia (cadeia atual + 1 caractere + '\0')

    newString[0] = c; // Adicionar o caractere no início da nova cadeia

    strcpy(newString + 1, s); // Copiar a cadeia atual para a nova cadeia, deslocando os caracteres para a direita
    newString[length + 1] = '\0'; // Adicionar o terminador de string '\0' ao final da nova cadeia

    delete[] s; // Liberar a memória alocada para a cadeia antiga

    return newString; // Retornar a nova cadeia atualizada
}

int main() {
    char* myString = new char[10]; // Exemplo de uma cadeia de caracteres
    strcpy(myString, "Hello"); // Inicializar a cadeia com "Hello"
    
    char* updatedString = str_push_front(myString, '!');
    // Chamar a função str_push_front para acrescentar '!' no início da cadeia
    
    // Imprimir a cadeia atualizada
    std::cout << updatedString << std::endl;

    delete[] updatedString; // Liberar a memória alocada para a cadeia atualizada
    
    return 0;
}
