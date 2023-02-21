#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"

class Translator
{
public:
    Translator();
    ~Translator();
    string translateEnglishWord(string strIn);
    string translateEnglishSentence(string strIn);

private:
    Model model;
};

#endif