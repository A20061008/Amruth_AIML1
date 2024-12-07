// Online C compiler to run C program online
#include<stdio.h>
int main(){
    int num;
    int Sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
    Sum=Sum+i; //LHS(Variable)=RHS(Value)
    }
        printf("%d is Summation of 1 to %d \n",Sum,num);
}
