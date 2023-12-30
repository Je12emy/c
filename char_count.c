#include <stdio.h>

int main() {
  long count = 0;
  while (getchar() != EOF)
    ++count;
  printf("char count is: %ld\n", count - 1);
  return 0;
}
