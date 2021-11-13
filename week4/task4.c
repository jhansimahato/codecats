#include<stdio.h>
#include<stdlib.h>

int* twosum(int n,int *arr,int sum)
{
  int *result,i,j,res,flag=0;
  result= (int *)calloc(2,sizeof(int));

  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
         res = *(arr+i) + *(arr+j);
         if(res==sum) 
         {
            flag =1;
            *(result+0)=i;
            *(result+1)=j;
         }
      }
  }
  if(flag==0)
  {
      *result = -1;
  }
 
 return result;
}

int main(void)
{
    int n,*arr,*result,i,k;
    printf("enter the size of array: ");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("enter the sum: ");
    scanf("%d",&k);
    result=(int *)calloc(2,sizeof(int));

    result = twosum(n,arr,k);

    if( *result == -1)
    {
       printf("\n no valid elements found");
    }
    else{
        printf("the elements are: %d %d",*(result+0),*(result+1));
    }
    return 0;
}