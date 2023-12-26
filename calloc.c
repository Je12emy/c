#include <stdlib.h>
#include <stdio.h>

int main(){
    // 1 element of 4 bytes
    int* i = calloc(1, 4);
    // It is initialized by calloc
    printf("%i\n", *i);
    *i = 1;
    // We can then assign a new value
    printf("%i\n", *i);
    return 0;
}
