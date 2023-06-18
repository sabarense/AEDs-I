/**
 * Exemplo1401 - v0.0. - __ / __ / _____
 * Author: _____________________________
 */
#include <iostream>
#include <string>
#include <algorithm> // Para utilizar a função transform()

void pause(const std::string& text)
{
    std::string dummy;
    std::cout << std::endl << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;
}

class Erro
{
public:
    static const std::string NO_ERROR;
};

const std::string Erro::NO_ERROR = "No error";

class MyString : public Erro
{
public:
    std::string getErroMsg() override
    {
        return NO_ERROR;
    }
};

void method00()
{
    // Não faz nada
}

void method01()
{
    // Definir dados
    MyString* s = new MyString();

    // Identificar
    std::cout << "\nEXEMPLO1401 - Method01 - v0.0\n" << std::endl;

    // Encerrar
    pause("Apertar ENTER para continuar");
}

int getInt()
{
    std::string input;
    std::cout << "Digite um número inteiro: ";
    std::getline(std::cin, input);

    try {
        int value = std::stoi(input); // Converte conteúdo para um inteiro
        std::cout << "Número válido: " << value << std::endl;
        return value;
    } catch (std::invalid_argument&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de argumento inválido (valor não inteiro)
    } catch (std::out_of_range&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de estouro (valor fora do intervalo representável)
    }
}

double getDouble()
{
    std::string input;
    std::cout << "Digite um número real: ";
    std::getline(std::cin, input);

    try {
        double value = std::stod(input); // Converte conteúdo para um real
        std::cout << "Número válido: " << value << std::endl;
        return value;
    } catch (std::invalid_argument&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de argumento inválido (valor não real)
    } catch (std::out_of_range&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de estouro (valor fora do intervalo representável)
    }
}

bool getBoolean()
{
    std::string input;
    std::cout << "Digite um valor lógico (true, false, T, F, 0, 1): ";
    std::getline(std::cin, input);

    // Converter a entrada para letras maiúsculas para comparar de forma case-insensitive
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return std::toupper(c); });

    if (input == "TRUE" || input == "T" || input == "1") {
        std::cout << "Valor lógico válido: true" << std::endl;
        return true;
    } else if (input == "FALSE" || input == "F" || input == "0") {
        std::cout << "Valor lógico válido: false" << std::endl;
        return false;
    } else {
        std::cout << "Valor lógico inválido!" << std::endl;
        return false; // Valor inválido
    }
}

bool contains(const std::string& texto, const std::string& conteudo)
{
    size_t found = conteudo.find(texto); // Verifica se o parâmetro está contido no conteúdo

    if (found != std::string::npos) {
        std::cout << "O parâmetro está contido no conteúdo." << std::endl;
        return true; // O parâmetro está contido no conteúdo
    } else {
        std::cout << "O parâmetro não está contido no conteúdo." << std::endl;
        return false; // O parâmetro não está contido no conteúdo
    }
}

std::string toUpperCase(const std::string& texto)
{
    std::string resultado;
    for (char c : texto) {
        resultado += std::toupper(c); // Converte cada caractere para maiúscula e adiciona ao resultado
    }
    std::cout << "Texto em maiúsculas: " << resultado << std::endl;
    return resultado;
}

std::string toLowerCase(const std::string& texto)
{
    std::string resultado;
    for (char c : texto) {
        resultado += std::tolower(c); // Converte cada caractere para minúscula e adiciona ao resultado
    }
    std::cout << "Texto em minúsculas: " << resultado << std::endl;
    return resultado;
}

std::string replace(char original, char novo, const std::string& texto)
{
    std::string resultado = texto;
    std::replace(resultado.begin(), resultado.end(), original, novo); // Substitui o caractere original pelo novo
    std::cout << "Texto com substituições: " << resultado << std::endl;
    return resultado;
}

int main()
{
    int opcao;

    do {
        std::cout << "EXEMPLO1401 - Programa - v0.0\n" << std::endl;
        std::cout << "Opções:" << std::endl;
        std::cout << "0 - Parar" << std::endl;
        std::cout << "1 - Testar definições" << std::endl;
        std::cout << "2 - Converter conteúdo para inteiro" << std::endl;
        std::cout << "3 - Converter conteúdo para real" << std::endl;
        std::cout << "4 - Converter conteúdo para boolean" << std::endl;
        std::cout << "5 - Verificar se o parâmetro está contido no conteúdo" << std::endl;
        std::cout << "6 - Converter texto para maiúsculas" << std::endl;
        std::cout << "7 - Converter texto para minúsculas" << std::endl;
        std::cout << "8 - Substituir caracteres em um texto" << std::endl;

        std::cout << "\nDigite uma opção: ";
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao) {
            case 0:
                method00();
                break;
            case 1:
                method01();
                break;
            case 2:
                getInt();
                break;
            case 3:
                getDouble();
                break;
            case 4:
                getBoolean();
                break;
            case 5:
                {
                    std::string conteudo, parametro;
                    std::cout << "Digite um conteúdo: ";
                    std::getline(std::cin, conteudo);
                    std::cout << "Digite um parâmetro: ";
                    std::getline(std::cin, parametro);
                    contains(parametro, conteudo);
                }
                break;
            case 6:
                {
                    std::string texto;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    toUpperCase(texto);
                }
                break;
            case 7:
                {
                    std::string texto;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    toLowerCase(texto);
                }
                break;
            case 8:
                {
                    std::string texto;
                    char original, novo;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    std::cout << "Digite o caractere original: ";
                    std::cin >> original;
                    std::cout << "Digite o caractere novo: ";
                    std::cin >> novo;
                    replace(original, novo, texto);
                }
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
        }

        std::cout << std::endl;
    } while (opcao != 0);

    pause("Pressione ENTER para encerrar o programa");

    return 0;
}
/**
 * Exemplo1401 - v0.0. - __ / __ / _____
 * Author: _____________________________
 */
#include <iostream>
#include <string>
#include <algorithm> // Para utilizar a função transform()

void pause(const std::string& text)
{
    std::string dummy;
    std::cout << std::endl << text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
    std::cout << std::endl << std::endl;
}

class Erro
{
public:
    static const std::string NO_ERROR;
};

const std::string Erro::NO_ERROR = "No error";

class MyString : public Erro
{
public:
    std::string getErroMsg() override
    {
        return NO_ERROR;
    }
};

void method00()
{
    // Não faz nada
}

void method01()
{
    // Definir dados
    MyString* s = new MyString();

    // Identificar
    std::cout << "\nEXEMPLO1401 - Method01 - v0.0\n" << std::endl;

    // Encerrar
    pause("Apertar ENTER para continuar");
}

int getInt()
{
    std::string input;
    std::cout << "Digite um número inteiro: ";
    std::getline(std::cin, input);

    try {
        int value = std::stoi(input); // Converte conteúdo para um inteiro
        std::cout << "Número válido: " << value << std::endl;
        return value;
    } catch (std::invalid_argument&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de argumento inválido (valor não inteiro)
    } catch (std::out_of_range&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de estouro (valor fora do intervalo representável)
    }
}

double getDouble()
{
    std::string input;
    std::cout << "Digite um número real: ";
    std::getline(std::cin, input);

    try {
        double value = std::stod(input); // Converte conteúdo para um real
        std::cout << "Número válido: " << value << std::endl;
        return value;
    } catch (std::invalid_argument&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de argumento inválido (valor não real)
    } catch (std::out_of_range&) {
        std::cout << "Número inválido!" << std::endl;
        return -1; // Caso ocorra uma exceção de estouro (valor fora do intervalo representável)
    }
}

bool getBoolean()
{
    std::string input;
    std::cout << "Digite um valor lógico (true, false, T, F, 0, 1): ";
    std::getline(std::cin, input);

    // Converter a entrada para letras maiúsculas para comparar de forma case-insensitive
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return std::toupper(c); });

    if (input == "TRUE" || input == "T" || input == "1") {
        std::cout << "Valor lógico válido: true" << std::endl;
        return true;
    } else if (input == "FALSE" || input == "F" || input == "0") {
        std::cout << "Valor lógico válido: false" << std::endl;
        return false;
    } else {
        std::cout << "Valor lógico inválido!" << std::endl;
        return false; // Valor inválido
    }
}

bool contains(const std::string& texto, const std::string& conteudo)
{
    size_t found = conteudo.find(texto); // Verifica se o parâmetro está contido no conteúdo

    if (found != std::string::npos) {
        std::cout << "O parâmetro está contido no conteúdo." << std::endl;
        return true; // O parâmetro está contido no conteúdo
    } else {
        std::cout << "O parâmetro não está contido no conteúdo." << std::endl;
        return false; // O parâmetro não está contido no conteúdo
    }
}

std::string toUpperCase(const std::string& texto)
{
    std::string resultado;
    for (char c : texto) {
        resultado += std::toupper(c); // Converte cada caractere para maiúscula e adiciona ao resultado
    }
    std::cout << "Texto em maiúsculas: " << resultado << std::endl;
    return resultado;
}

std::string toLowerCase(const std::string& texto)
{
    std::string resultado;
    for (char c : texto) {
        resultado += std::tolower(c); // Converte cada caractere para minúscula e adiciona ao resultado
    }
    std::cout << "Texto em minúsculas: " << resultado << std::endl;
    return resultado;
}

std::string replace(char original, char novo, const std::string& texto)
{
    std::string resultado = texto;
    std::replace(resultado.begin(), resultado.end(), original, novo); // Substitui o caractere original pelo novo
    std::cout << "Texto com substituições: " << resultado << std::endl;
    return resultado;
}

int main()
{
    int opcao;

    do {
        std::cout << "EXEMPLO1401 - Programa - v0.0\n" << std::endl;
        std::cout << "Opções:" << std::endl;
        std::cout << "0 - Parar" << std::endl;
        std::cout << "1 - Testar definições" << std::endl;
        std::cout << "2 - Converter conteúdo para inteiro" << std::endl;
        std::cout << "3 - Converter conteúdo para real" << std::endl;
        std::cout << "4 - Converter conteúdo para boolean" << std::endl;
        std::cout << "5 - Verificar se o parâmetro está contido no conteúdo" << std::endl;
        std::cout << "6 - Converter texto para maiúsculas" << std::endl;
        std::cout << "7 - Converter texto para minúsculas" << std::endl;
        std::cout << "8 - Substituir caracteres em um texto" << std::endl;

        std::cout << "\nDigite uma opção: ";
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao) {
            case 0:
                method00();
                break;
            case 1:
                method01();
                break;
            case 2:
                getInt();
                break;
            case 3:
                getDouble();
                break;
            case 4:
                getBoolean();
                break;
            case 5:
                {
                    std::string conteudo, parametro;
                    std::cout << "Digite um conteúdo: ";
                    std::getline(std::cin, conteudo);
                    std::cout << "Digite um parâmetro: ";
                    std::getline(std::cin, parametro);
                    contains(parametro, conteudo);
                }
                break;
            case 6:
                {
                    std::string texto;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    toUpperCase(texto);
                }
                break;
            case 7:
                {
                    std::string texto;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    toLowerCase(texto);
                }
                break;
            case 8:
                {
                    std::string texto;
                    char original, novo;
                    std::cout << "Digite um texto: ";
                    std::getline(std::cin, texto);
                    std::cout << "Digite o caractere original: ";
                    std::cin >> original;
                    std::cout << "Digite o caractere novo: ";
                    std::cin >> novo;
                    replace(original, novo, texto);
                }
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
        }

        std::cout << std::endl;
    } while (opcao != 0);

    pause("Pressione ENTER para encerrar o programa");

    return 0;
}
