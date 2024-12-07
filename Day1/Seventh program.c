// Online C compiler to run C program online
#include <stdio.h>

int main() {
int Age;
printf("Enter the age:");
scanf("%d",&Age);
if(Age>=18&&Age<=100)
{
printf("Eligible to vote");
}
else
{
printf("Not Eligible to vote");    
}
return 0;
}