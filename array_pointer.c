#include <stdio.h>

int main(){
    int guesses[4] = {1, 83, 45, 19};

    // int holds atleast 4 bytes
    // 4 bytes per item
    // 4 x 4 = 16 bytes
    // 16 / 4 = 4 items
    int len = sizeof(guesses) / sizeof(guesses[0]);
    // printf("%p\n", &guesses[0]);
    // printf("%p\n", &guesses[1]);
    // printf("%p\n", &guesses[2]);
    // printf("%p\n", &guesses[3]);

    for(int i = 0; i < len; i++) {
        // printf("%i\n", guesses[i]);
        printf("%i\n", *(guesses+i));
    }
}
