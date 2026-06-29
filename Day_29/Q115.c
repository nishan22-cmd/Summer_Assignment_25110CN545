#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length\n");
    printf("2. Convert to Uppercase\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Length = %d", strlen(str));
    }
    else if(choice == 2)
    {
        int i;

        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }

        printf("Uppercase String = %s", str);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}