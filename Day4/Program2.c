#include<stdio.h>
int main()
{
    int num; //1895
    int Rem=0;
    int Rev=0;
    printf("Enter the integer value:");
    scanf("%d",&num);
    //condition to find the reverse of number
    while(num!=0)
    {
        Rem=num%10;
        Rev=Rev*10+Rem;
        num=num/10;
    }
    printf("%d is reversed number",Rev);
    return 0;
}    