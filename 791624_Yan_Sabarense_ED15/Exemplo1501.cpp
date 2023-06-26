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

char* str_push_back(char* s, char c) {
    
    size_t length = strlen(s);
    char* newString = new char[length + 2]; 

    strcpy(newString, s); 
    newString[length] = c; 
    newString[length + 1] = '\0'; 

    delete[] s; 

    return newString; 
}

int main() {
    
    char* myString = new char[10]; 
    strcpy(myString, "Hello"); 
    
    char* updatedString = str_push_back(myString, '!');
  
    std::cout << updatedString << std::endl;
    
    return 0;
}
