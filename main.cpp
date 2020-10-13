#include <iostream>
#include "unindent.h"
#include "indent.h"
using namespace std;

int main() {
  // Task A. Removing indentation
  cout << "       int x = 1;   == " << removeLeadingSpaces("       int x = 1;  ") << endl;

  cout << "----------" << endl << endl;

  // Task B. Counting blocks opened and closed by { and }, and adding real indentation
  cout << "I am a bot!!! == " << countChar("I am a bot!!!", '!') << " of !" << endl;

  cout << endl;

  cout << "noFormat.txt == " << endl << printOccurencesWithFile("noFormat.txt") << endl;

  cout << endl;

  cout << "noFormat.txt == " << endl << indentedFile("noFormat.txt") << endl;

  cout << "----------" << endl << endl;
}
