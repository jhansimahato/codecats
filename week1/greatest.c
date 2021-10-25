#include<stdio.h>

void main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        ("%d is greatest",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }
}