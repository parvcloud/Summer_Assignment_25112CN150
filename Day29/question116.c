#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[10];
    int n, i, choice;

    do
    {
        printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Items\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of items: ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nItem %d\n", i + 1);

                    printf("Enter ID: ");
                    scanf("%d", &item[i].id);

                    printf("Enter Name: ");
                    scanf("%s", item[i].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &item[i].quantity);

                    printf("Enter Price: ");
                    scanf("%f", &item[i].price);
                }
                break;

            case 2:
                printf("\nID\tName\tQuantity\tPrice\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 3:
                printf("Program End.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}