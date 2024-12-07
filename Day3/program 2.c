#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    //Logic to Print Even numbers from n to 1
    for(int i=num;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
}