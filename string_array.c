#include <stdio.h>

int main(int argc, char *args[]) {
  char name[] = "Jeremy";
  printf("This is an array of char, AKA a string: %s\n", name);
  // An array of pointers to strings aka arrays of chars
  char *names[] = {"Jhonathan", "Joseph", "Jotaro"};
  printf("This is an array to pointers of strings\n");
  int len = sizeof(names) / sizeof(names[0]);
  for (int i = 0; i < len; i++) {
    printf("%p - %s\n", names[i], names[i]);
  }
  return 0;
}
