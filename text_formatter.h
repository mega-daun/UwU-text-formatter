#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <clocale>
using namespace std;
ifstream fin;
ofstream fout;
string textIn;
string textOut;
string filename = "textToFormat.txt";
vector<vector<char>> symbolsMatrix {{'U', 'w', 'U'}, {'O', 'w', 'O'}, {'>', 'w', '<'},
                                    {'N', 'y', 'a', '~'}, {'M', 'y', 'a', '~'},
                                    {'M', 'r', 'r', '~'}};
int randStart = 0;
int randEnd = 5;
int randNum = rand() % (randEnd - randStart + 1) + randStart;