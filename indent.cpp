#include <iostream>
#include <fstream>
#include <sstream>
#include "unindent.h"
#include "indent.h"
using namespace std;

// Task B. Counting blocks opened and closed by { and }, and adding real indentation
int countChar(string line, char c) {
  int occurences = 0;
  for (int i = 0; i < line.length(); i++) {
    if (line[i] == c) {
      occurences++;
    }
  }
  return occurences;
}
