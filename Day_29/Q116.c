#include <stdio.h>

int main()
{
    int productId, quantity;
    float price;

    printf("Enter Product ID: ");
    scanf("%d", &productId);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\n----- Inventory -----\n");
    printf("Product ID : %d\n", productId);
    printf("Quantity   : %d\n", quantity);
    printf("Price      : %.2f\n", price);

    return 0;
}