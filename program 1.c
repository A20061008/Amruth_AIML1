// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int num;
    int Sum=0;
    printf("Enter the number n:");
    scanf("%d",&num);
    //Logic to print from n to 1
    for(int i=num;i>=1;i--)
    {
        printf("%d \n",i);
    }
}    