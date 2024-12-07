#include <stdio.h>
int main() 
{
    void Div(int Num1,int Num2)
    {
        printf("Quotient and Reminder of %d & %d is : %d \n",Num1,Num2,(Num1%Num2));
    }
    Div(12,9);
    Div(18,100);
    Div(34,60);
    Div(45,78);
    Div(345,768);
}