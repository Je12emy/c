#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pntr = malloc(sizeof(int));
  *pntr = 5;
  printf("My secret number is %d.", *pntr);
  pntr = realloc(pntr, sizeof(int) * 2);
  printf("\nMy secret number is %d.", *pntr);
  return 0;
}
