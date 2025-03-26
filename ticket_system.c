#include <stdio.h>

int main() {
    int a, price = 0;
    char choice;
    
    printf("Welcome to the Ticket Booking System!\n\n");
    
        do {
            printf("Enter your age: ");
            scanf("%d", &a);
        
            if (a <= 0 || a > 120) {
                printf("Invalid age! Please enter a valid positive number.\n");
            }
             else {
                if (a >= 18) {
                    printf("Adult Ticket booked! Price: $20\n");
                    price += 20;
                } else {
                    printf("Child Ticket booked! Price: $10\n");
                    price += 10;
                }

                printf("Do you want to book another ticket? (Y/N): ");
                scanf(" %c", &choice);
             }

        } while (choice == 'Y' || choice == 'y');

        printf("Total amount to be paid: $%d\n", price);
	printf("Thank you for using our system!️\n");

    return 0;
}
