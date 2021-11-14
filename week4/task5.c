#include<stdio.h>
#include<stdlib.h>

int* frequency(int *arr,int n)
{
    int i,temp=0,k=0,count=0,j,*feq;
    feq=calloc(3,sizeof(int));
    while(temp<3)
    {
 for(i=0;i<n;i++)
    {
        //initialise with count=1 for each element
        if(*(arr+i) != -1) //we need to check if element is equal to -1 get to know about this in j loop
        {
        

                if( k == *(arr + i) ) //check if element repeated
                {
                    count++; //increase the count
                    *(arr + i)=-1; /* now we assign -1 to repeated value so that when the loop
                                    runs again we repeat the values again*/
                }
        }
        *(feq+k)=count;//we now assign the final count value of element to feq array
    }
    temp++,k++;
    }

return feq;
}

int* finalarray(int *feq,int n)
{
    int *arr,total,i;
   
    arr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        if(i < *(feq+0))
        {
            *(arr+i)=0;
        }
        else if(i >= *(feq+0) && i < *(feq+1))
        {
            *(arr+i)=1;
        }
        else if( i >=  *(feq+1) && i < *(feq + 2))
        {
            *(arr+i)=2;
        }
        else
        {
            ;
        }
        
    }

    return arr;
}
int main(void)
{
    int n,*arr,*feq,i,*result,total;

    printf("enter the size of array: ");
    scanf("%d",&n);
     
     arr=(int *)calloc(n,sizeof(int));
     feq=(int *)calloc(3,sizeof(int));
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    feq= frequency(arr,n);

    result= finalarray(feq,n);
    
    total= *(feq+0) + *(feq+1) + *(feq+2);
    //printf("\n%d %d %d",*(feq +0), *(feq+1), *(feq+2));
    printf("the final elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(result+i));
    }
}
