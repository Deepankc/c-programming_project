#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00, deposit, withdraw;

    while(1) {
        printf("\nATM Transactions\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Amount\n");
        printf("3. Withdraw Amount\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposited %.2f. New balance: %.2f\n", deposit, balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &withdraw);
                if(withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= withdraw;
                    printf("You have withdrawn %.2f. New balance: %.2f\n", withdraw, balance);
                }
                break;
            case 4:
                printf("Exiting ATM...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

