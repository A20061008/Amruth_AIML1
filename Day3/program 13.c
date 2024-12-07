#include <stdio.h>

int main() 
{
    int Num1,Num2;
    printf("Enter the Value for Num1:");
    scanf("%d",&Num1);
    printf("Enter the Value for Num2:");
    scanf("%d",&Num2);
    void Calculate(int x,int y)
    {
        printf("Summation: %d \n",(x+y));
        printf("Difference: %d \n",(x-y));
        printf("product: %d \n",(x*y));
        printf("Quotient: %d \n",(x/y));
        printf("Remainder: %d \n",(x%y));
    }
    Calculate(Num1,Num2);
}    