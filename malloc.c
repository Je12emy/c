#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char* s = malloc(8);
    printf("%p\n", s);
    strcpy(s, "Systems");
    printf("%s\n", s);
    return 0;
}
