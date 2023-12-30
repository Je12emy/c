/*

Write a program to copy its input to its output, replacing each string of one
or more blanks by a single blank.

"   " -> " ": 4 spaces into a single space

*/
#include <stdbool.h>
#include <stdio.h>

int main() {
  int c = 0;
  bool skip_next = false;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      skip_next = false;
      putchar(c);
      continue;
    }
    if (skip_next) {
      continue;
    } else {
      skip_next = true;
      putchar(' ');
    }
  }
}
