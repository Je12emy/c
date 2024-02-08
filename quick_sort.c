#include "utils.h"

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void after_sort(int input[], int *low, int pivot) {
  *low += 1;
  if (input[*low] > input[pivot]) {
    swap(&input[*low], &input[pivot]);
  }
}

void quick_sort(int input[], int size) {
  if (size == 1) {
    return;
  }
  int pivot = size - 1;
  int low, high;
  high = 0;
  low = -1;

  while (high < pivot) {
    if (input[high] < input[pivot]) {
      low += 1;
      swap(&input[high], &input[low]);
    }
    high += 1;
  }
  after_sort(input, &low, pivot);
  
  // I need this to properly build the partitions
  if (!low) {
    low++;
  }

  int leftSize = low;
  int left[leftSize];
  for (int i = 0; i < leftSize; i++) {
    left[i] = input[i];
  }
  quick_sort(left, leftSize);

  int rightSize = size - low;
  int right[rightSize];
  int j = low;
  for (int i = 0; i < rightSize; i++) {
    right[i] = input[j];
    j++;
  }
  quick_sort(right, rightSize);
}

int main() {
  int data[] = {5, 2, 7, 1, 4};
  int size = sizeof(data) / sizeof(int);
  print_array(data, size);
  quick_sort(data, size);
  print_array(data, size);
}
