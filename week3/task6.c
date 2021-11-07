#include<stdio.h>

void main(void)
{
    int n,i,count=0,*arr,num;
    printf("size of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");         
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }           

    printf("enter the element to find: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
         if( *(arr+i) == num)
         {
             count++;
         }
    }

   
    printf("result: %d",count);
}