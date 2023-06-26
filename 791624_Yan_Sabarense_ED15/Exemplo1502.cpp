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


char* str_pop_back(char* s) {
    size_t length = strlen(s); // Obter o comprimento atual da cadeia

    if (length == 0) {
        // Se a cadeia estiver vazia, não há nada para remover
        return s;
    }

    s[length - 1] = '\0'; // Remover o último caractere alterando o terminador de string

    return s; // Retornar a cadeia atualizada
}

int main() {
    
    char myString[10] = "Hello"; // Exemplo de uma cadeia de caracteres
    
    char* updatedString = str_pop_back(myString);
    // Chamar a função str_pop_back para remover o último caractere da cadeia
    
    // Imprimir a cadeia atualizada
    std::cout << updatedString << std::endl;
    
    return 0;
}
