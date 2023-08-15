#include "include/hash.hpp"

// Função para tokenizar a entrada e contar a frequência dos tokens
void countTokenFrequency(istream &inputFile, unordered_map<string, int> &frequencyMap){
    string line;

    while(getline(inputFile, line)){
        istringstream iss(line);
        string token;

        while(iss >> token){
            // Converte o token para letras minúsculas
            transform(token.begin(), token.end(), token.begin(), ::tolower);

            // Remove pontuação do início e do final do token
            while(!token.empty() && ispunct(token.front())){
                token.erase(token.begin());
            }
            while(!token.empty() && ispunct(token.back())){
                token.pop_back();
            }

            // Trata espaços extras entre palavras
            size_t start = 0;
            while(start < token.length()){
                while(start < token.length() && isspace(token[start])){
                    start++;
                }
                size_t end = token.find(' ', start);
                if(end == string::npos){
                    end = token.length();
                }
                string word = token.substr(start, end - start);
                if(!word.empty()){
                    frequencyMap[word]++;
                }
                start = end + 1;
            }

            // Incrementa a contagem do token no frequencyMap
            // frequencyMap[token]++;
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
