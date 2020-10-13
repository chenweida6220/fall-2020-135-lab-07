#include <iostream>
#include <cctype>
#include "unindent.h"
using namespace std;

// Task A. Removing indentation
string removeLeadingSpaces(string line) {
  string str;
  bool checker = false;
  for (int i = 0; i < line.length(); i++) {
    // once it encounters a non-space, checker will flip to false
    if (!isspace(line[i])) {
      checker = true;
    }
    // once false, the rest of the string will be added to the str
    if (checker == true) {
      str += line[i];
    }
  }
  return str;
}
