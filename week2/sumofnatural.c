#include<stdio.h>

void main(void)
{
    int n,i,sum=0;
    scanf("%d",&n);
    if(n>0)
    {
      for(i=1;i<=n;i++)
      {
          sum+=i;
      }
    }
    else
    {
        printf("not a natural number");
    }
    printf("%d",sum);
    
}