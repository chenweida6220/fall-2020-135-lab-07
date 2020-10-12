#include <iostream>
#include "unindent.h"
using namespace std;

int main() {
  // Task A. Removing indentation
  cout << "       int x = 1;   == " << removeLeadingSpaces("       int x = 1;  ") << endl;
}
