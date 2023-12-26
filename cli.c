#include <stdio.h>

int main(int argc, char *args[]) {
    printf("Arguments: %i\n", argc);
    printf("Program name: %s\n", args[0]);

    printf("Argument list:\n");
    for (int i = 1; i < argc; i++) {
        printf("%i. %s\n", i, args[i]);
    }
}
