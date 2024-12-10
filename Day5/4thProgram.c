#include <stdio.h>

int main() 
{
    int ProductCode;
    char ProductName[15];
    int quantity;
    int Price;
    printf("Enter the Product Code: \n");
    scanf("%d \n",&ProductCode);
    printf("Enter the Product Name: \n");
    scanf("%s \n",ProductName);
    printf("Enter the Quantity: \n");
    scanf("%d",&quantity);
    printf("Enter the Price: \n");
    scanf("%d",&Price);
    printf("Customer Bill: \n");
    printf("---------------\n");
    printf("Product: %s \n",ProductName);
    printf("Quantity: %d \n",quantity);
    printf("Price: %d x Price\n",quantity,Price);
    printf("Net Amount=%d",(quantity*Price));
    return 0;
}    