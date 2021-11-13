#include<stdio.h>
#include<stdlib.h>

int*  rotation(int *arr,int k,int size)
{
    int j,i,temp;
    j=0;
    while(j<k)
    {
        temp=0;
        temp= *(arr + (size-1));

        for(i=(size-1);i>0;i--)
        {
              *(arr + i) = *(arr + (i-1));
        }
        *(arr+0)=temp;
        j++;
    }
    return arr;
}
int main(void)
{
    int size,*arr,i,k;

    printf("enter the size of array: ");
    scanf("%d",&size);

    arr=(int *)calloc(size,sizeof(int));

    for(i=0;i<size;i++)
    {
        scanf("%d",(arr+i));
    }
     
    printf("enter the rotation size: ");
    scanf("%d",&k);
    arr=rotation(arr,k,size);

    printf("\n The array after rotation is: ");

    for(i=0;i<size;i++)
    {
        printf("%d ", *(arr+i));
    }
    return 0;
}