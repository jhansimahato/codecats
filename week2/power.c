#include<stdio.h>
//power of number
void main(void)
{
    int num,pow,temp,i;
    scanf("%d %d",&num,&pow);
    temp=num;
    for(i=2;i<=pow;i++)
    {
        num=num*temp;
    }

    printf("%d^%d=%d",temp,pow,num);
}