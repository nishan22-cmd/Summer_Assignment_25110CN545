#include <stdio.h>

int main()
{
    char name[50];
    int seats;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n------ Ticket ------\n");
    printf("Passenger : %s\n", name);
    printf("Seats     : %d\n", seats);
    printf("Booking Successful\n");

    return 0;
}