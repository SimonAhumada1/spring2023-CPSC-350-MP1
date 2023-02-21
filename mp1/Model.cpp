#include "Model.h"

Model::Model()
{
}

Model::~Model()
{
    cout << "Model destructor called" << endl;
}

string Model::translateSingleConsonant(char charIn)
{
    // check if char is upper or lower case
    char o;
    if (isupper(charIn))
    {
        o = 'O';
    }
    else
    {
        o = 'o';
    }
    // concat chars onto string
    string strOut = "";
    strOut += charIn;
    strOut += o;
    strOut += charIn;
    return strOut;
}

string Model::translateSingleVowel(char charIn)
{
    string strOut = "";
    strOut += charIn;
    return strOut;
}