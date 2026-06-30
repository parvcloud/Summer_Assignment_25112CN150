#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[10];
    int n, i, choice;

    do
    {
        printf("\n----- STUDENT RECORD MANAGEMENT SYSTEM -----\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of students: ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll No: ");
                    scanf("%d", &s[i].roll);

                    printf("Enter Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[i].marks);
                }
                break;

            case 2:
                printf("\nRoll\tName\tMarks\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].marks);
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