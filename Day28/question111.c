#include <stdio.h>

struct Ticket
{
    char name[50];
    int age;
    int seats;
};

int main()
{
    struct Ticket t;
    int choice;
    int totalSeats = 20;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", t.name);

                printf("Enter Age: ");
                scanf("%d", &t.age);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                if (t.seats <= totalSeats)
                {
                    totalSeats = totalSeats - t.seats;

                    printf("\nTicket Booked Successfully!\n");
                    printf("Name: %s\n", t.name);
                    printf("Age: %d\n", t.age);
                    printf("Seats Booked: %d\n", t.seats);
                    printf("Remaining Seats: %d\n", totalSeats);
                }
                else
                {
                    printf("Sorry! Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats);
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