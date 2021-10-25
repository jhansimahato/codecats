#include<stdio.h>
main()
{
	int n,r,temp,rev=0;
	printf("enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse of %d is %d",temp,rev);
}