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

    int counter = 1;
    while(!minHeap.empty()){
        const HeapNode &node = minHeap.top();
        cout << counter << ". " << "Palavra: " << VERMELHO << node.word << RESET << " | Frequência: " << VERDE << node.count << RESET << endl;
        minHeap.pop();
        counter++;
    }
}
