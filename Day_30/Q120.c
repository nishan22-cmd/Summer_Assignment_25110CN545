#include <stdio.h>

void display(char name[], int marks[])
{
    int i;

    printf("\nStudent Details\n");

    for(i = 0; i < 3; i++)
    {
        printf("%s : %d\n", &name[i * 20], marks[i]);
    }
}

int main()
{
    char name[60];
    int marks[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf("%s", &name[i * 20]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    display(name, marks);

    return 0;
}