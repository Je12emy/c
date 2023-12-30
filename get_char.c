#include <stdio.h>

int main() {
  // We can use a char in getChar, but EOF is larger than char
  // printf("EOF size: %d\n", sizeof(EOF)); // 4
  // printf("Char size: %d\n", sizeof(char)); // 1
  int c = getchar();
  // printf("Is EOF: %b\n",c == EOF);
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
