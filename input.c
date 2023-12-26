#include <stdio.h>

int main(){
    int age;
    char name[30];

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Please enter your age: ");
    scanf("%i",&age);

    printf("Your name is %s and your age is %i.\n", name, age);
}
