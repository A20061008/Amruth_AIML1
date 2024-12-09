#include<stdio.h>
int main()
{
    int Rem,num;
    int Sum=0;
    printf("Enter the integer value:");
    scanf("%d",&num);
    //condition to find the summation of digits
    while(num!=0)
    {
        Rem=num%10;
        Sum=Rem+Sum;
        num=num/10;
    }
    printf("%d",Sum);
    return 0;
}