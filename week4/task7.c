#include<stdio.h>
#include<stdlib.h>

//grasshopper problem

int main(void)
{
    int *start,*jump,x,temp=0,j,i=0;
    printf("enter the number of test cases: ");
    scanf("%d",&x);
    start=(int *)calloc(x,sizeof(int));
    jump=(int *)calloc(x,sizeof(int));
    for(i=0;i<x;i++)
    {
    printf("enter the initial value: ");
    scanf("%d",(start+i));
    printf("enter the number of jumps: ");
    scanf("%d",(jump+i));
    }
    i=0;
  while(i<x)
  {
      temp = *(start+i);
      for(j=0;j< *(jump+i);j++)
      {
        if(temp%2==0)
        {
            temp = (temp - (j+1));

        }
        else
        {
            temp = (temp + (j+1));
        }
      }
      printf("\n %d %d : %d\n", *(start+i), *(jump+i), temp);
      i++;
  }
  return 0;
}