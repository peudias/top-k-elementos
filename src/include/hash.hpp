#ifndef HASH_HPP
#define HASH_HPP
#include "util.hpp"

unordered_set<string> readStopwords(const string &filename);
void processText(istream &inputStream, unordered_map<string, int> &frequencyMap, const unordered_set<string> &stopwords);

#endif