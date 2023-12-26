#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pntr = (int *)malloc(sizeof(int));
  *pntr = 5;
  printf("My secret nubmer is: %d", *pntr);
  free(pntr);
  // Here, I'm reading something in this same address
  printf("My secret nubmer is: %d", *pntr);
  return 0;
}
