#include <stdio.h>
int main() 
{
    void Add(int Num1,int Num2)
    {
        printf("Addition of %d & %d is : %d \n",Num1,Num2,(Num1+Num2));
    }
    Add(12,9);
    Add(18,100);
    Add(34,60);
    Add(45,78);
    Add(345,768);
}