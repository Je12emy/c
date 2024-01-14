// Write a program to print all input lines that are longer than 80 characters.
#include <stdbool.h>
#include <stdio.h>
#define MIN 5
#define MAX 255

void copy_range(char from[], int start, int end, char to[]);

int main() {
  int c, i, last_string_index;
  char input[MAX], output[MAX];

  c = i = last_string_index = 0;

  printf(
      "Enter words or sentences, then press [CONTROL + D] to finish execution.\n");
  for (i = 0; (c = getchar()) != EOF & i < (MAX - 1); i++) {
    input[i] = c;
    if (c == '\n') {
      int string_end, end;
      string_end = i + 1;
      end = i - 1;
      input[string_end] = '\0';
      if (end - last_string_index > MIN) {
        copy_range(input, last_string_index, string_end, output);
      }
      last_string_index = string_end + 1;
    }
  }
  printf("Sentences or words larger than %d characters:\n", MAX);
  printf("%s\n", output);
}

void copy_range(char from[], int start, int end, char to[]) {
  // Figure out where in "to" should the string be appended to
  // Find where the last \n is at
  int last_word_index = 0;
  for (int i = 0; i < MAX; i++) {
    if (to[i] == '\n') {
      last_word_index = i + 1;
    }
  }
  // Iterate over "from" and copy the passed range into "to"
  for (int i = start; i < end; i++) {
    to[last_word_index] = from[i];
    last_word_index++;
  }
  to[last_word_index] = '\0';
}
