#include<stdio.h>
#include<stdlib.h>

int all(int *arr,int n)
{
    int i=0,final=0;
    for(i=0;i<n;i++)
    {
        final+= *(arr+i);
    }
    return final;
}

int even(int *arr,int n)
{
    int i=0,final=0;
    for(i=0;i<n;i++)
    {
        if( *(arr+i)%2 == 0)
        {
            final += *(arr+i);
        }
    }
    return final;
}

int odd(int *arr,int n)
{
    int i=0,final=0;
    for(i=0;i<n;i++)
    {
        if( *(arr+i)%2 != 0)
        {
            final += *(arr+i);
        }
    }
   
   return final;
}

int evenposition(int *arr, int n)
{
    int i=0,final=0;
    for(i=0;i<n;i++)
    {
    if(i%2==0)
    {
       final += *(arr+i);
    }
    }
    return final;
}
int oddposition(int *arr, int n)
{
    int i=0,final=0;
    for(i=0;i<n;i++)
    {
    if(i%2!=0)
    {
       final += *(arr+i);
    }
    }
    return final;
}




void main(void)
{
  int n, *arr,i;
 printf("enter number of elements: ");
  scanf("%d",&n);
 printf("enter elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d", (arr+i));

  }

  printf("sum of all elements: %d \n",all(arr,n));
  printf("sum of even elements: %d\n",even(arr,n));
  printf("sum of odd elements: %d\n",odd(arr,n));
  printf("sum of even position elements: %d\n",evenposition(arr,n));
  printf("sum of odd position elements: %d ",oddposition(arr,n));
}