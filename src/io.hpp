// my 1st program in C++

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int readFile(string inFile);
int copyFile(string inFile, string outFile);
int writeFile(string outFile, string line);
int editFile(string inFile, string outFile, string find, string replace, bool IsReplacing);
