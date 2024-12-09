#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)//Number of Lines
    {
        for(int j=1;j<=num;j++)
        if(i%2==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}        
    