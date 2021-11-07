#include<stdio.h>
//power of number
void main(void)
{
    int num,power,temp,i;
    scanf("%d %d",&num,&power);
    temp=num;
    for(i=2;i<=power;i++)
    {
        num=num*temp;
    }

    printf("%d^%d=%d",temp,power,num);
}
