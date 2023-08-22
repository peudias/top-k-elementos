#include "include/heap.hpp"

void processHash(const unordered_map<  string, int> &frequencyMap, int k){
    priority_queue<HeapNode, vector<HeapNode>, MinHeapComparator> minHeap;

    for(const auto &entry : frequencyMap){
        if(minHeap.size() < k){
            minHeap.push(HeapNode(entry.first, entry.second));
        } else{
            break;
        }
    }

    for(const auto &entry : frequencyMap){
        if(minHeap.size() < k || entry.second > minHeap.top().count){
            if(minHeap.size() >= k){
                minHeap.pop();
            }
            minHeap.push(HeapNode(entry.first, entry.second));
        }
    }

    vector<HeapNode> tempVector;
    while(!minHeap.empty()){
        tempVector.push_back(minHeap.top());
        minHeap.pop();
    }

    int counter = 1;
    for(int i = tempVector.size() - 1; i >= 0; --i){
        cout << counter << ". " << "Palavra: " << VERMELHO << tempVector[i].word << RESET << " | Frequência: " << VERDE << tempVector[i].count << RESET << endl;
        counter++;
    }
}
