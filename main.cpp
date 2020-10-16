#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"
using namespace std;

int main() {
  // Original bad-code file
  // Printed using ifstream
  cout << "Bad-Code File" << endl;
  string line;
  ifstream readFile;
  readFile.open("bad-code.cpp");
  // reading from file
  while (getline(readFile, line)) {
    cout << line << endl;
  }
  readFile.close();

  cout << "----------" << endl << endl;

  // Task A. Removing indentation
  // Run ./main < bad-code.cpp
  // Printed using input redirection
  cout << "Task A. Removing indentation" << endl << "Please run ./main < bad-code.cpp" << endl;
  while (getline(cin, line)) {
    line = removeLeadingSpaces(line);
    cout << line << endl;
  }

  cout << "----------" << endl << endl;

  // Task B. Counting blocks opened and closed by { and }, and adding real indentation
  // Printed using ifstream
  cout << "Task B. Counting blocks opened and closed by { and }, and adding real indentation" << endl;
  readFile.open("bad-code.cpp");
  int occurences = 0;
  while (getline(readFile, line)) {
    line = removeLeadingSpaces(line);
    occurences -= countChar(line, '}');

    // print out
    for (int i = 1; i <= occurences; i++) {
      cout << "\t";
    }
    cout << line << endl;

    occurences += countChar(line, '{');
  }
  readFile.close();

  cout << "----------" << endl << endl;
}
