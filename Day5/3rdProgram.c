#include <stdio.h>

int main() 
{
    int SubjectOne,SubjectTwo,SubjectThree;
    int Total,Average;
    if(SubjectOne<35|| SubjectTwo<35|| SubjectThree<35)
    {
        printf("Fail");
    }
    else
    {
        Total=SubjectOne+SubjectTwo+SubjectThree;
        Average=Total/3;
        printf("Total:%d\n",Total);
        printf("Average:%d\n",Average);
        if(Average>=85)
        {
            printf("First Class");
        }
        else if(Average>=65)
        {
            printf("Second Class");
        }
        else
        {
            printf("Third Class");
        }
    }
}    