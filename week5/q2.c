#include<stdio.h>

int main(void)
{
    int val[3]={5,10,15};
    int *ptr;
    ptr=val;

    int i=0;

    for(i=0;i<3;i++)
    {
        printf("%d ", *(ptr+i));
    }
}