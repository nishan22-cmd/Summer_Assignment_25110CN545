#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int choice;
    int sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Array: ");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else if(choice == 2)
    {
        for(i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }

        printf("Sum = %d", sum);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}