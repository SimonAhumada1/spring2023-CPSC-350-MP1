#include "FileProcessor.h"

FileProcessor::FileProcessor()
{
}

FileProcessor::~FileProcessor()
{
    cout << "FileProcessor destructor called" << endl;
}

void FileProcessor::processFile(string strIn)
{
    ifstream inFS;
    ofstream outFS;

    inFS.open(strIn);
    if (!inFS.is_open())
    {
        cout << "File read error" << endl;
        return;
    }

    outFS.open("ProcessedFile.html");
    if (!outFS.is_open())
    {
        cout << "File write error" << endl;
        return;
    }

    string fileIn;
    // write necessary html
    outFS << "<!DOCTYPE html><html><body><p><b>" << endl;
    while (!inFS.eof())
    {
        getline(inFS, fileIn);
        outFS << fileIn << endl;
    }
    // reset position of reader
    inFS.clear();
    inFS.seekg(0);
    outFS << "</b></p><p><i>" << endl;
    while (!inFS.eof())
    {
        getline(inFS, fileIn);
        outFS << translator.translateEnglishSentence(fileIn) << endl;
    }
    outFS << "</i></p></body></html>" << endl;

    inFS.close();
    outFS.close();
}