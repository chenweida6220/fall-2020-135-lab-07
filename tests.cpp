#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

// Task A. Removing indentation
TEST_CASE("testing removeLeadingSpaces") {
  CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
  CHECK(removeLeadingSpaces("           // Hi, I'm a program!") == "// Hi, I'm a program!");
  CHECK(removeLeadingSpaces("    for(int i = 0; i < 10; i++) {") == "for(int i = 0; i < 10; i++) {");
  CHECK(removeLeadingSpaces("          ") == "");
  CHECK(removeLeadingSpaces("") == "");
}

// Task B. Counting blocks opened and closed by { and }, and adding real indentation
TEST_CASE("testing countChar") {
  CHECK(countChar("int main(){", '{') == 1);
  CHECK(countChar("          ", 'h') == 0);
  CHECK(countChar("          ", ' ') == 10);
  CHECK(countChar("Hello, World!", '!') == 1);
  CHECK(countChar("", 'r') == 0);
}
