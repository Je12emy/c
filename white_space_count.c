// Write a program to count blanks, tabs, and newlines.
#include <stdio.h>

int main() {
  int count, c;
  count = 0;
  printf("Plase type something: ");
  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\n':
    case '\t':
    case ' ':
      count++;
      break;
    default:
      break;
    }
  }
  printf("White space count it: %d", count);
  return 0;
}
