//number of zeros in n!
#include<stdio.h>
#include<math.h>

int rec(int num, int n){
    if((int)(num/ pow(5,n))  == 0 )
    {
        return 0;
    }
    else
    {
        return (int)(num / pow(5,n)) + rec(num, n+1);
    }
}

void main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n ;i++)
    {
        printf("%d\n",rec(arr[i],1));
    }
}