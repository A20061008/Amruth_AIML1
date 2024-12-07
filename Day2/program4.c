#include<stdio.h>
int main(){
    int num;
    printf("Enetr the number:");
    scanf("%d",&num);
while(num!=0)
{
    num=num/10;
    Count++;
    printf("%d is the count of digitd \n",Count);
    printf("----------------------------------\n"); 
 }
}     