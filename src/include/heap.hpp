#ifndef HEAP_HPP
#define HEAP_HPP
#include "util.hpp"

struct HeapNode{
    string word;
    int count;

    HeapNode(const string &w, int c) : word(w), count(c){}
};

class MinHeapComparator{
public:
    bool operator()(const HeapNode &a, const HeapNode &b) const{
        return a.count > b.count;
    }
};

void processHash(const unordered_map<string, int> &frequencyMap, int k);

#endif