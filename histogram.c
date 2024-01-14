/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

int main(){
    int c, count;
    c = count = 0;
    while((c = getchar()) != EOF){
        printf("█");
        count++;
    }
    printf("\n%d characters where typed.\n", count);
}
