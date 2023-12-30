#include <stdio.h>

int main() {
  int line_count, c;
  line_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line_count++;
    }
  }
  printf("Line count is: %d\n", line_count);
}
