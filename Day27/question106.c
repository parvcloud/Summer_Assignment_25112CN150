#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int n, i, choice;

    do
    {
        printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of employees: ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter ID: ");
                    scanf("%d", &emp[i].id);

                    printf("Enter Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }
                break;

            case 2:
                printf("\nID\tName\tSalary\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
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