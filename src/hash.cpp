#include "include/hash.hpp"
#include "include/heap.hpp"

unordered_set<string> readStopwords(const string &filename){
    unordered_set<string> stopwords;
    ifstream stopwordFile(filename);

    if(stopwordFile.is_open()){
        string stopword;
        while(getline(stopwordFile, stopword)){
            stopwords.insert(stopword);
        }
        stopwordFile.close();
    } else{
        cerr << VERMELHO << "Erro ao abrir o arquivo de stopwords" << RESET << endl;
    }
    return stopwords;
}

void processText(istream &inputStream, unordered_map<string, int> &frequencyMap, const unordered_set<string> &stopwords){
    string line;

    while(getline(inputStream, line)){
        istringstream iss(line);
        string token;

        while(iss >> token){
            transform(token.begin(), token.end(), token.begin(), ::tolower);
            while(!token.empty() && ispunct(token.front())){
                token.erase(token.begin());
            }
            while(!token.empty() && ispunct(token.back())){
                token.pop_back();
            }

            if(stopwords.find(token) != stopwords.end()){
                continue;
            }

            size_t start = 0;
            while(start < token.length()){
                while(start < token.length() && isspace(token[start])){
                    start++;
                }
                size_t end = token.find_first_of(".,;:'?!()[]{}—", start);
                if(end == string::npos){
                    end = token.length();
                }
                string word = token.substr(start, end - start);
                if(!word.empty() && stopwords.find(word) == stopwords.end()){
                    frequencyMap[word]++;
                }
                start = end + 1;
            }
        }
    }
}
