#include <stdio.h>
#include <utils.h>

void merge(int left[], int right[], int array[], int left_size, int right_size,
           int size) {
  int leftIndex, rightIndex, originalIndex;
  leftIndex = rightIndex = originalIndex = 0;

  // Check that either <left> and <right> partitions still have elements,
  // if either of them has no more elements, it means that the other part has
  // the remainder of the array (the bigger part)
  for (; originalIndex < size &&
         (leftIndex < left_size) & (rightIndex < right_size);
       originalIndex++) {
    if (left[leftIndex] < right[rightIndex]) {
      array[originalIndex] = left[leftIndex];
      leftIndex++;
    } else if (left[leftIndex] > right[rightIndex]) {
      array[originalIndex] = right[rightIndex];
      rightIndex++;
    }
  }
  // Append the partition contents (already sorted) to the remaining of the
  // original array
  while (leftIndex < left_size) {
    array[originalIndex] = left[leftIndex];
    originalIndex++;
    leftIndex++;
  }
  while (rightIndex < right_size) {
    array[originalIndex] = right[rightIndex];
    originalIndex++;
    rightIndex++;
  }
}

void merge_sort(int array[], int size) {
  if (size == 1) {
    return;
  }
  int left_size = size / 2;
  int right_size = size - left_size;
  // left
  int left[left_size];
  for (int i = 0; i < left_size; i++) {
    left[i] = array[i];
  }
  merge_sort(left, left_size);
  // right
  int right[right_size];
  for (int i = 0, j = left_size; j < size; i++, j++) {
    right[i] = array[j];
  }
  merge_sort(right, right_size);
  // merge-sort
  merge(left, right, array, left_size, right_size, size);
}

void print_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
