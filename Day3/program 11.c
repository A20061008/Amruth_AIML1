#include <stdio.h>
int main() 
{
    void mul(int Num1,int Num2)
    {
        printf("Multiplication of %d & %d is : %d \n",Num1,Num2,(Num1*Num2));
    }
    mul(12,9);
    mul(18,100);
    mul(34,60);
    mul(45,78);
    mul(345,768);
}