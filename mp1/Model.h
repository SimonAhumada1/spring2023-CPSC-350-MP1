#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <iostream>
using namespace std;

class Model
{
public:
    Model();
    ~Model();
    string translateSingleConsonant(char charIn);
    string translateSingleVowel(char charIn);
};

#endif