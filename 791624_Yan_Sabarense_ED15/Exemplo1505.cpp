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


char* str_chr(char* s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // Retornar o ponteiro para a primeira ocorrência encontrada
        }
        s++; // Avançar para o próximo caractere na cadeia
    }
    return nullptr; // Retornar nullptr caso o caractere não seja encontrado
}

int main() {
    char myString[] = "Hello, world!"; // Exemplo de uma cadeia de caracteres
    
    char* result = str_chr(myString, 'o');
    // Chamar a função str_chr para procurar a primeira ocorrência de 'o' na cadeia
    
    if (result != nullptr) {
        std::cout << "Caractere encontrado: " << *result << std::endl;
    } else {
        std::cout << "Caractere não encontrado." << std::endl;
    }
    
    return 0;
}