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


char* str_pop_front(char* s) {
    size_t length = strlen(s); // Obter o comprimento atual da cadeia

    if (length == 0) {
        // Se a cadeia estiver vazia, não há nada para remover
        return s;
    }

    for (size_t i = 0; i < length; i++) {
        s[i] = s[i + 1]; // Deslocar todos os caracteres para a esquerda
    }

    return s; // Retornar a cadeia atualizada
}

int main() {
    char myString[10] = "Hello"; // Exemplo de uma cadeia de caracteres
    
    char* updatedString = str_pop_front(myString);
    // Chamar a função str_pop_front para remover o primeiro caractere da cadeia
    
    // Imprimir a cadeia atualizada
    std::cout << updatedString << std::endl;
    
    return 0;
}