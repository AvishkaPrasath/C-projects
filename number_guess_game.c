#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber() {
    int rad = rand() % (100 - 0 + 1) + 0;
    return rad;
}

int main() {
    int input, a;
    
    srand(time(0));

    a = randomNumber();

    while (a != input) {
        printf("please enter 0 - 100 integer : ");
        scanf("%d", &input);
        if (a > input) {
            printf("Too low\n");
        }
        else if (a < input) {
            printf("too high\n");
        }
    }
    printf("You are won!");

    return 0;
}
