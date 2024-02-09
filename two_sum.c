/* Given an array of integers nums and an integer target, return indices of the
two numbers such that they add up to target. You may assume that each input
would have exactly one solution, and you may not use the same element twice. You
can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include "utils.h"
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  int *out = (int *)malloc(*returnSize * sizeof(int));
  for (int i = 0; i < numsSize; i++) {
    for (int j = 0; j < numsSize; j++) {
      if (i == j) {
        continue;
      }
      if (nums[i] + nums[j] == target) {
        out[0] = i;
        out[1] = j;
        break;
      }
    }
  }
  return out;
}

int main() {
  int output[] = {3, 3};
  int size = sizeof(output) / sizeof(int);
  int target = 6;
  int returnSize = 2;

  int *result = twoSum(output, size, target, &returnSize);
  print_array(result, returnSize);

  return EXIT_SUCCESS;
}
