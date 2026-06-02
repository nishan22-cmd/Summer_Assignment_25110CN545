#include <stdio.h>

int main()
{
    int n, rem, dec = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        dec = dec + rem * base;
        base = base * 2;
        n = n / 10;
    }

    printf("Decimal Number = %d", dec);

    return 0;
}