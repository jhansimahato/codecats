#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    int *arr,n,min,max,i;
    
    printf("enter number of elements: ");
    scanf("%d",&n);
    arr= (int *)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }

    max = *(arr + 0);
    min = *(arr + 0);

    for(i=1;i<n;i++)
    {
        if( *(arr + i) > max)
        {
            max = *(arr + i);
        }

        if( *(arr+i) < min)
        {
            min = *(arr + i);
        }
    }

    printf("the largest element is: %d\n",max);
    printf("the smallest element is: %d\n",min);
}