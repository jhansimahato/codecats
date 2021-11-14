#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int n, *arr,k,i;
printf("enter the size of array: ");
scanf("%d",&n);
arr=(int *)calloc(n,sizeof(int));
printf("enter the elements array: ");
for(i=0;i<n;i++)
{
    scanf("%d",(arr+i));
}
printf("enter the value: ");
scanf("%d",&k);
for(i=0;i<n;i++)
{
   if( *(arr+i) == k)
   {
       printf("element found at: %d",i);
       break;
   }
    else if( k > *(arr+(n-1)))
   {
       
       printf("element should be at: %d",n);
       break;
   }
   else if(*(arr+i) > k)
   {
       printf("element should be at: %d",i);
       break;
   }
  
}
    return 0;
}