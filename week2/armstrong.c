#include<stdio.h>
void main()
{
	int n,i,sum=0,r,temp;
	printf("enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum+=(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("the given number is armstrong");
	}
	else
	{
		printf("the given number is not armstrong");
	}
	
}