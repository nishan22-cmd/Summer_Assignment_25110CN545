#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("Simple Quiz\n\n");

    printf("1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\n2. 5 + 3 = ?\n");
    printf("1. 6\n2. 8\n3. 10\n");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Score = %d/3", score);

    return 0;
}