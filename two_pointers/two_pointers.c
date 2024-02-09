#include "../utils.h"
#include <stdlib.h>

int *two_sum(int *input, int size, int target) {
  int i, j;
  int *out = (int *)malloc(size * sizeof(size));
  i = 0;
  j = size;

  while (i < j) {
    if (input[i] + input[j] == target) {
      out[0] = i;
      out[1] = j;
      break;
    }
    if (input[i] + input[j] < target) {
      i++;
    } else {
      j--;
    }
  }

  return out;
}

#define MAX_SIZE 3
#define OUT_SIZE 2

int main() {
  int input[MAX_SIZE] = {3, 2, 4};
  merge_sort(input, MAX_SIZE);
  int *out = two_sum(input, OUT_SIZE, 6);
  print_array(out, OUT_SIZE);
  return EXIT_SUCCESS;
}
