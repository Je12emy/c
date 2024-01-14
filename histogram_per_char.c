#include <stdio.h>

int main() {
  int chars[10], c, count;
  c = count = 0;
  for (int i = 0; i < (sizeof(chars) / sizeof(int)); i++) {
    chars[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (c >= '0' & c <= '9') {
      ++chars[c - '0'];
      count++;
    }
  }
  printf("Generating histogram:\n");
  for (int i = 0; i < (sizeof(chars) / sizeof(int)); i++) {
    if (chars[i] == 0) {
      continue;
    }
    printf("%d - %d/%d: ", i, chars[i], count);
    for (int j = 0; j < chars[i]; j++) {
      printf("█");
    }
    printf("\n");
  }
}
