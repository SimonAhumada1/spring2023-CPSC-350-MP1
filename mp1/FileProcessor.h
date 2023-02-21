#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include "Translator.h"
#include <fstream>

class FileProcessor
{
public:
    FileProcessor();
    ~FileProcessor();
    void processFile(string strIn);

private:
    Translator translator;
};

#endif