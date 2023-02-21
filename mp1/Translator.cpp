#include "Translator.h"

Translator::Translator()
{
}

Translator::~Translator()
{
    cout << "Translator destructor called" << endl;
}

string Translator::translateEnglishWord(string strIn)
{
    string strOut = "";
    for (int i = 0; i < strIn.length(); ++i)
    {
        char check = tolower(strIn[i]);
        // perform appropriate operation for consonant or vowel
        if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u')
        {
            strOut += model.translateSingleVowel(strIn[i]);
        }
        else
        {
            strOut += model.translateSingleConsonant(strIn[i]);
        }
    }
    return strOut;
}

string Translator::translateEnglishSentence(string strIn)
{
    string strOut = "";
    for (int i = 0; i < strIn.length(); ++i)
    {
        // if char is not a letter do not modify it
        if (isalpha(strIn[i]) == 0)
        {
            strOut += strIn[i];
            continue;
        }
        char check = tolower(strIn[i]);
        // same as translateEnglishWord
        if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u')
        {
            strOut += model.translateSingleVowel(strIn[i]);
        }
        else
        {
            strOut += model.translateSingleConsonant(strIn[i]);
        }
    }
    return strOut;
}