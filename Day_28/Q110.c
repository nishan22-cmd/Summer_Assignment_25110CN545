#include <stdio.h>

int main()
{
    int accountNo;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\n------ Bank Account ------\n");
    printf("Account No : %d\n", accountNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}