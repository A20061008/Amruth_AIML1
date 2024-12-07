#include <stdio.h>
int main() 
{
    void Sub(int Num1,int Num2)
    {
        printf("Subtraction of %d & %d is : %d \n",Num1,Num2,(Num1-Num2));
    }
    Sub(12,9);
    Sub(18,100);
    Sub(34,60);
    Sub(45,78);
    Sub(345,768);
}