#include "include/heap.hpp"

void processHash(const unordered_map<string, int> &frequencyMap, int k){
    priority_queue<HeapNode, vector<HeapNode>, MinHeapComparator> minHeap;

    for(const auto &entry : frequencyMap){
        if(minHeap.size() < k){
            minHeap.push(HeapNode(entry.first, entry.second));
        } else if(entry.second > minHeap.top().count){
            minHeap.pop();
            minHeap.push(HeapNode(entry.first, entry.second));
        }
    }

    cout << MAGENTA << "|===== Top-K-Elementos =====|" << RESET << endl;
    cout << MAGENTA << "|== " << VERMELHO << "Palavra" << AMARELO << " vs." << VERDE << "Frequência" << MAGENTA << " ==|" << endl;
    int counter = 1;
    while(!minHeap.empty()){
        const HeapNode &node = minHeap.top();
        cout << MAGENTA << "| " << RESET;
        if(counter < 10 && counter > 0){
            cout << "0";
        }
        cout << counter << ". " << VERMELHO << node.word << AMARELO << " vs. " << VERDE << node.count << RESET << endl;
        minHeap.pop();
        counter++;
    }
    cout << MAGENTA << "|===========================|" << RESET << endl;
}
