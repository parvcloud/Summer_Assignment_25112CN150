#include<stdio.h>

int main()
{
    int accNo, choice;
    char name[50];
    float balance = 0, amount;

    printf("===== BANK ACCOUNT SYSTEM =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    while (1)
    {
        printf("\n1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", accNo);
                printf("Account Holder : %s\n", name);
                printf("Balance : %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}