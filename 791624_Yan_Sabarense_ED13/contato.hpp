/*
 Contato.hpp - v0.0. - __ / __ / _____
 Author: ______________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _CONTATO_H_
#define _CONTATO_H_
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
// outras dependencias
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
#include "Erro.hpp"
// ---------------------------------------------- definicao de classe
/**
 * Classe para tratar contatos, derivada da classe Erro.
 */
class Contato : public Erro
{
    /**
     * atributos privados.
     */
private:
    string nome;
    string fone;
    string fone1;
    int quantidadeTelefones;

    bool validarTelefone(const std::string& fone, const std::string& fone1) {
        for (char ch : fone, fone1) {
            if (!isdigit(ch) && ch != '-') {
                return false;
            }
        }
        return true;
    }
    /**
     * definicoes publicas.
     */
public:
    /**
     * Destrutor.
     */
    ~Contato()
    {
    }
    /**
     * Construtor padrao.
     */
    Contato()
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais vazios
        nome = "";
        fone = "";
    } // fim construtor padrao

    /**
     * Construtor alternativo.
     * @param nome_inicial a ser atribuido
     * @param fone_inicial a ser atribuido
     */
    Contato(std::string nome_inicial, std::string fone_inicial)
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais
        setNome(nome_inicial); // nome = nome_inicial;
        setFone(fone_inicial); // fone = fone_inicial;
    }                          // fim construtor alternativo

    Contato(std::string nome_inicial, std::string fone_inicial,std::string fone_inicial1)
    {
        setErro(0); // nenhum erro, ainda
        // atribuir valores iniciais
        setNome(nome_inicial); // nome = nome_inicial;
        setFone(fone_inicial); // fone = fone_inicial;
        setFone(fone_inicial1); // fone = fone_inicial;
    }         

    /**
     * Construtor alternativo baseado em copia.
     */
    Contato(Contato const &another)
    {
        // atribuir valores iniciais por copia
        setErro(0);            // copiar erro
        setNome(another.nome); // copiar nome
        setFone(another.fone); // copiar fone
    }                          // fim construtor alternativo

    /**
     * Metodo para atribuir nome.
     * @param nome a ser atribuido
     */
    void setNome(std::string nome)
    {
        if (nome.empty())
            setErro(1); // nome invalido
        else
            this->nome = nome;
    } // fim setNome ( )
    /**
     * Metodo para atribuir telefone.
     * @param fone a ser atribuido
     */
    void setFone(std::string fone)
    {
        if (fone.empty())
            setErro(2); // fone invalido
        else
            this->fone = fone;
    } // fim setFone ()
    void setFone1(std::string fone1)
    {
        if (fone1.empty())
            setErro(2); // fone invalido
        else
            this->fone1 = fone1;
    } // fim setFone (
    /**
     * Funcao para obter nome.
     * @return nome armazenado
     */
    std::string getNome()
    {
        return (this->nome);
    } // fim getNome ( )
    /**
     * Funcao para obter fone.
     * @return fone armazenado
     */
    std::string getFone()
    {
        return (this->fone);
        quantidadeTelefones++;
    }

    std::string getFone1()
    {
        return (this->fone1);
        quantidadeTelefones++;
    }
    /**
     * Funcao para obter dados de uma pessoa.
     * @return dados de uma pessoa
     */
    std::string toString()
    {
        return ("{ " + getNome() + ", " + getFone() + " }");
    } // fim toString ( )

    void readNome(const std::string& prompt) {
        std::cout << prompt;
        std::getline(std::cin, nome);
    }

    void testarNovaCaracteristicaNome() {
        if (!nome.empty()) {
            std::cout << "Nome: " << nome << std::endl;
        } else {
            std::cout << "O nome está vazio." << std::endl;
        }
    }

    void readFone(const std::string& prompt) {
        std::cout << prompt;
        std::getline(std::cin, fone);
    }

    void testarNovaCaracteristicaFone() {
        if (!fone.empty()) {
            if (validarTelefone(fone,fone1)) {
                std::cout << "Telefone valido: " << fone << std::endl;
            } else {
                std::cout << "Telefone invalido: " << fone << std::endl;
            }
        } else {
            std::cout << "O telefone esta vazio." << std::endl;
        }
    }

    void fromFile(const std::string& nomeArquivo) {
        std::ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            std::getline(arquivo, nome);
            std::getline(arquivo, fone);
            arquivo.close();
            std::cout << "Dados lidos do arquivo: " << nomeArquivo << std::endl;
        } else {
            std::cout << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
        }
    }

    void testarNovaCaracteristicaArquivo() {
        if (!nome.empty() && !fone.empty()) {
            std::cout << "Nome: " << nome << std::endl;
            std::cout << "Telefone: " << fone << std::endl;
        } else {
            std::cout << "Os dados estao vazios." << std::endl;
        }
    }

    void toFile(const std::string& nomeArquivo) {
        std::ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            arquivo << nomeArquivo.size() << std::endl; // Grava o tamanho do nome do arquivo
            arquivo << nome << std::endl;
            arquivo << fone << std::endl;
            arquivo.close();
            std::cout << "Dados gravados no arquivo: " << nomeArquivo << std::endl;
        } else {
            std::cout << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
        }
    }

    int telefones() const {
        return quantidadeTelefones;
    }

    void testarNovaCaracteristicaTelefones() const {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Telefone: " << fone << std::endl;
        std::cout << "Quantidade de Telefones: " << quantidadeTelefones << std::endl;
    }
    void testarNovaCaracteristica() const {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Primeiro Telefone: " << fone << std::endl;
        std::cout << "Segundo Telefone: " << fone1 << std::endl;
        std::cout << "Quantidade de Telefones: " << quantidadeTelefones << std::endl;
    }

    void removerSegundoTelefone() {
        if (quantidadeTelefones == 2) {
            fone1 = "";
            quantidadeTelefones = 1;
        } else {
            std::cout << "Erro: Não há segundo telefone a ser removido." << std::endl;
        }
    }

};                             // fim da classe Contato
using ref_Contato = Contato *; // similar a typedef Contato* ref_Contato;
#endif