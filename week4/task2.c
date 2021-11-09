//frequency of every element of array
#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    int n,*arr,i,*feq,count,j;
    printf("enter the size of array: ");
    scanf("%d",&n);
    arr= (int *)calloc(n,sizeof(int));
    feq=(int *)calloc(n,sizeof(int));
     printf("enter the elements of array: ");
     for(i=0;i<n;i++)
     {
         scanf("%d", (arr+i));
     }

     for(i=0;i<n;i++)
     {
         count=1;
         if( *(arr+i) != -1)
         {
             
             for(j=i+1;j<n;j++)
             {
                 if( *(arr+i) == *(arr+j))
                 {
                     count++;
                     *(arr+j) = -1;
                 }
             }
         }
         *(feq+i) = count;
     }

/*
     for(i=0;i<n;i++)
     {
         printf("%d ", *(feq+i));
     }*/
    

     for(i=0;i<n;i++)
     {
         if( *(arr+i) != -1)
         {
             printf("%d - %d times\n", *(arr+i), *(feq+i));
         }
         else
         {
             ;
         }
     }
}