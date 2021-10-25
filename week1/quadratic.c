#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,root1=0,root2=0;
	printf("enter 3 values: ");
	scanf("%d %d %d",&a,&b,&c);
	d=((b*b)-(4*a*c));
	if(d>0)
	{
		root1=(-b-(sqrt(d)))/(2*a);
		root2=(-b+(sqrt(d)))/(2*a);
	}
	else if(d==0)
	{
		root1=root2=(-b/(2*a));
	}
	else
	{
		root1=(-b-(sqrt(d)))/2*a;
		root2=(-b+(sqrt(d)))/2*a;
	}
	
	printf("root1: %0.2f \t root2: %0.2f \n ",root1,root2);
	
}