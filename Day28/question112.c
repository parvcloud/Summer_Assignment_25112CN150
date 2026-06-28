#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[10];
    int choice, i, n = 0;

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (n < 10)
                {
                    printf("Enter Name: ");
                    scanf("%s", c[n].name);

                    printf("Enter Phone Number: ");
                    scanf("%s", c[n].phone);

                    n++;
                    printf("Contact Added Successfully!\n");
                }
                else
                {
                    printf("Contact List is Full!\n");
                }
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    printf("\n--- Contact List ---\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n\n", c[i].phone);
                    }
                }
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}