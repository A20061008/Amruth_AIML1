// Online C compiler to run C program online
#include <stdio.h>

int main() {
int Num;
printf("Enter the integer:");
scanf("%d",&Num);
if(Num%3==0&&Num%5==0)
{
printf("%d is the multiple of 3 and 5",Num);
}
else
{
printf("%d is not the multiple of 3 and 5",Num);
}
return 0;
}