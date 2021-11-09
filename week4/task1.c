#include<stdio.h>
#include<stdlib.h>

//reverse of an array

void main(void)
{
    int *arr,n,i,temp,n1;
    printf("enter size of array: ");
    scanf("%d",&n);
    //take array input
    arr= (int *)calloc(n, sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", (arr+i));
    }
    n1=n;
    for(i=0;i<(n/2);i++)
    {
        temp = *(arr+i);
        *(arr+i) = *(arr+(n1-1));
        *(arr + (n1-1)) = temp;
        --n1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", *(arr+i));
    }
}