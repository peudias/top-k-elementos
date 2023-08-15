#include "include/hash.hpp"

// Função para tokenizar a entrada e contar a frequência dos tokens
void countTokenFrequency(istream &inputFile, unordered_map<string, int> &frequencyMap){
    string line;

    while(getline(inputFile, line)){
        istringstream iss(line);
        string token;

        while(iss >> token){
            // Remove pontuação do token
            token.erase(remove_if(token.begin(), token.end(), ::ispunct), token.end());

            // Converte o token para letras minúsculas
            transform(token.begin(), token.end(), token.begin(), ::tolower);

            // Incrementa a contagem do token no frequencyMap
            frequencyMap[token]++;
        }
    }

}

// Função para imprimir a frequência dos tokens
void printTokenFrequency(const unordered_map<string, int> &frequencyMap){
    for(const auto &entry : frequencyMap){
        cout << "Palavra: " << entry.first << " | Frequência: " << entry.second << endl;
    }
}

// Função para ler um arquivo de texto e contar a frequência de tokens
void readFile(const string &fileName){
    ifstream inputFile(fileName);

    if(!inputFile.is_open()){
        cout << "Erro ao abrir o arquivo de texto: " << fileName << endl;
        return;
    }

    unordered_map<string, int> frequencyMap;

    countTokenFrequency(inputFile, frequencyMap);
    printTokenFrequency(frequencyMap);

    inputFile.close();

}
