#include<stdio.h>

void main(void)
{
    int i,j,n;

    printf("enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
             printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }

        printf("\n");
    }
}