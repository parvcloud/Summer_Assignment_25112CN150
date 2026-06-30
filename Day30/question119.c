#include <stdio.h>

int main()
{
    int i, n;
    int empId[50];
    char name[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", empId[i], name[i], salary[i]);
    }

    return 0;
}