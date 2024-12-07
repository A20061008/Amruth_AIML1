// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int Amount;
    printf("Enter the Amount: ");
    scanf("%d",&Amount);
    //Logic to print number of notes in indian currency dimension
    printf("2000------> %d \n",Amount/2000);
    Amount=Amount%2000;
    printf("500------> %d \n",Amount/500);
    Amount=Amount%500;
    printf("200------> %d \n",Amount/200);
    Amount=Amount%200;
    printf("100------> %d \n",Amount/100);
    Amount=Amount%100;
    printf("50------> %d \n",Amount/50);
    Amount=Amount%50;
    printf("20------> %d \n",Amount/20);
    Amount=Amount%20;
    printf("10------> %d \n",Amount/10);
    Amount=Amount%10;
    printf("5------> %d \n",Amount/5);
    Amount=Amount%5;
    printf("2------> %d \n",Amount/2);
    Amount=Amount%2;
    printf("1------> %d \n",Amount/1);
    Amount=Amount%1;
}
