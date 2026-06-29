#include <stdio.h>

int main()
{
    int roll[5];
    char name[5][30];
    int marks[5];
    int i;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n------ Student Records ------\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll : %d", roll[i]);
        printf("\nName : %s", name[i]);
        printf("\nMarks: %d\n", marks[i]);
    }

    return 0;
}