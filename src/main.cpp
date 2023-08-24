#include "include/util.hpp"
#include "include/hash.hpp"
#include "include/heap.hpp"

int main(){
    string fileLocal = "./dataset/input";

    string concatenatedText;

    for(const auto &entry : fs::directory_iterator(fileLocal)){
        if(entry.is_regular_file() && entry.path().extension() == ".txt" &&
            entry.path().stem().string().find("input") == 0){
            ifstream file(entry.path());
            if(file.is_open()){
                string fileContent((istreambuf_iterator<char>(file)),
                    istreambuf_iterator<char>());
                concatenatedText += fileContent;
            }
        }
    }

    istringstream concatenatedStream(concatenatedText);
    unordered_map<string, int> frequencyMap;
    unordered_set<string> stopwords = readStopwords("./dataset/stopwords.txt");

    processText(concatenatedStream, frequencyMap, stopwords);
    int k = 1;
    processHash(frequencyMap, k);

    return 0;
}