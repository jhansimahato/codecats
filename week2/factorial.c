#include<stdio.h>
//factorial of a number
int fact(int n)
{
    if(n>=1)
    return n*fact(n-1);
    else
    return 1;
}

void main()
{
    int n,final;
    scanf("%d",&n);
    final=fact(n);
    printf("%d",final);
}