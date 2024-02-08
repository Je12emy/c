#include <stdlib.h>
#include "utils.h"

void partition(int array[5], int size, int startIndex, int endIndex) {
  int outSize = endIndex - startIndex;
  if (outSize == 0) {
    return;
  }
  int out[outSize];
  int j = startIndex;
  for (int i = 0; i < outSize; i++) {
    out[i] = array[j];
    j++;
  }
  print_array(out, outSize);
}

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  partition(array, 5, 0, 3);
  partition(array, 5, 3, 4);
  return EXIT_SUCCESS;
}
