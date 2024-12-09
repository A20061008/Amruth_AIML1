#include<stdio.h>
int main()
{
    int num=144;
    //Declaring Pointer
    int *Pointer=&num;
    printf("num=%d \n",num);
    //Accessing the pointer address
    printf("num=%d \n",num);
    printf("Pointer=%p",Pointer);
    return 0;
}    