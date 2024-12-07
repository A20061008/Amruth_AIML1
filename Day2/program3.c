// Online C compiler to run C program online
#include<stdio.h>
int main(){
    int num;
    int Sum=0;
    int Even_count=0;
    int Odd_count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            Even_count++;
        }
        else
        {
            Odd_count++;
        }
    }
    printf("Even count= %d \n",Even_count);
    printf("Odd count= %d \n",Odd_count);
    }
}    