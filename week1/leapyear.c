#include<stdio.h>
void main(void)
{
    int a;
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("%d is leap year",a);
    }
    else if(a%100==0)
    {
        printf("%d is not leap year",a);
    }
    else if(a%4==0)
    {
        printf("%d is a leap year",a);
    }
    else{
        printf("not a leap year");
    }
}