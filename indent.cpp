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

string printOccurencesWithFile(string file) {
  stringstream ss;
  int occurences = 0;

  // stream class to read from files
  ifstream readFile;
  string line;
  readFile.open(file);
  while (getline(readFile, line)) {

    // print out
    ss << occurences << " " << line << endl;

    // find occurence of char in line
    occurences += countChar(line, '{');
    occurences -= countChar(line, '}');
  }
  readFile.close();
  return ss.str();
}

string indentedFile(string file) {
  stringstream ss;
  int occurences = 0;

  // stream class to read from files
  ifstream readFile;
  string line;
  readFile.open(file);
  while (getline(readFile, line)) {
    line = removeLeadingSpaces(line);

    occurences -= countChar(line, '}');
    // print out
    for (int i = 1; i <= occurences; i++) {
      ss << "\t";
    }
    ss << line << endl;

    // find occurence of char in line
    occurences += countChar(line, '{');
  }
  readFile.close();
  return ss.str();
}
