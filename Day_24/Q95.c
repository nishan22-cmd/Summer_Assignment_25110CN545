#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int len = 0, max = 0;
    int start = 0, pos = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
                pos = start;
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest Word: ");

    for(i = pos; i < pos + max; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}