#include <stdio.h>

int armstrong(int n)
{
    int original, digit, sum = 0;

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}