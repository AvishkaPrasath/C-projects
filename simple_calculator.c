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
    scanf("%d", &b);

    printf("Enter operation type (add = 1, sub = 2, mul = 3, div = 4): ");
    scanf("%d", &input);

    switch (input) {
        case 1:
            printf("Result: %d\n", add(a,b));
            break;
        case 2:
            printf("Result: %d\n", sub(a,b));
            break;
        case 3:
            printf("Result: %d\n", mul(a,b));
            break;
        case 4:
            if (div(a,b) == 0.0) {
                printf("Can't divide by Zero");
            }
            else {
                printf("Result: %.2f\n", div(a,b));
            }
            break;
        default:
            printf("you entered wrong operation type");
            break;
    }

    return 0;
}
