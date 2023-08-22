#ifndef HASH_HPP
#define HASH_HPP
#include "util.hpp"

unordered_set<string> readStopwords(const string &filename);
void readFile(const string &filePath);
void processText(istream &inputFile, unordered_map<string, int> &frequencyMap, const unordered_set<string> &stopwords);

#endif