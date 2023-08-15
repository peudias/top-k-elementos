#ifndef HASH_HPP
#define HASH_HPP

#include "util.hpp"

void countTokenFrequency(istream &inputFile, unordered_map<string, int> &frequencyMap);

void printTokenFrequency(const unordered_map<string, int> &frequencyMap);

void readFile(const string &fileName);

#endif