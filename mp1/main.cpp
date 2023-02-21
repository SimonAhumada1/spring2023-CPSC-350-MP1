#include "FileProcessor.h"

int main(int argc, char **argv)
{
    FileProcessor fileProcessor;
    // see testText.txt file
    fileProcessor.processFile("testText.txt");
    return 0;
}