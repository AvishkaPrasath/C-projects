#include <stdio.h>

int add(int x, int y) {
    return x+y;
}

int sub(int x, int y) {
    if (x > y) {
        return x-y;
    }
    else if (x == y) {
        return 0;
    }
    else {
        return y-x;
    }
}

int mul(int x, int y) {
    return x*y;
}

float div(int x, int y) {
    if (y == 0) {
        return 0.0;
    }
    else {
        return (float)x/y;
    }
}

int main() {
    
    int a, b, operation;
    int input;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
