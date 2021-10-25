#include<stdio.h>
void main()
{
	int n,i,factor=0;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			factor++;
		}
	}
	if(factor==1)
	{
		printf("the given number is prime");
		
	}
	
	else
	{
		printf("the given number is not prime");
	}
}