#include "include/util.hpp"
#include "include/hash.hpp"
#include "include/heap.hpp"

int main(){
    string fileLocal = "./dataset/input";

    for(const auto &entry : fs::directory_iterator(fileLocal)){
        if(entry.is_regular_file() && entry.path().extension() == ".txt" &&
            entry.path().stem().string().find("input") == 0){
            cout << AZUL << "Arquivo atual: " << entry.path() << RESET << endl;
            readFile(entry.path());
        }
    }

    return 0;
}