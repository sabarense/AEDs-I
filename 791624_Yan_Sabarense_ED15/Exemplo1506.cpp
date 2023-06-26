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

char* str_tok(char* s, char delimiter) {
    static char* lastToken = nullptr; // Mantém o estado da última chamada da função
    if (s != nullptr) {
        lastToken = s; // Atualiza o estado para a nova cadeia
    }
    if (lastToken == nullptr) {
        return nullptr; // Caso não haja mais cadeias para processar, retorna nullptr
    }
    char* token = lastToken;
    while (*lastToken != '\0' && *lastToken != delimiter) {
        lastToken++; // Avança o ponteiro até encontrar o delimitador ou o final da cadeia
    }
    if (*lastToken == '\0') {
        lastToken = nullptr; // Caso seja o final da cadeia, atualiza o estado para a próxima chamada
    } else {
        *lastToken = '\0'; // Substitui o delimitador por '\0' para terminar a cadeia atual
        lastToken++; // Avança o ponteiro para o próximo caractere após o delimitador
    }
    return token; // Retorna o ponteiro para a cadeia separada
}

int main() {
    char myString[] = "Hello,world!OpenAI";
    // Exemplo de uma cadeia de caracteres com delimitador ','

    char* token = str_tok(myString, ',');
    // Chamar a função str_tok para separar a cadeia até encontrar ','

    while (token != nullptr) {
        std::cout << token << std::endl; // Imprime cada cadeia separada
        token = str_tok(nullptr, ','); // Continua separando a partir do estado anterior
    }

    return 0;
}