#include <stdio.h>

int main()
{
    int a[100], n, i;
    int choice, sum = 0, max, min, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Insert Element\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum = sum + a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                        max = a[i];
                }
                printf("Maximum = %d\n", max);
                break;

            case 4:
                min = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                        min = a[i];
                }
                printf("Minimum = %d\n", min);
                break;

            case 5:
                printf("Enter element to insert: ");
                scanf("%d", &value);
                a[n] = value;
                n++;
                printf("Element inserted.\n");
                break;

            case 6:
                printf("Program End.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}