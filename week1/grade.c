#include<stdio.h>
void main()
{
	int phy,chem,maths,bio,comp,total;
	float percentage=0;
	printf("enter five subject marks: ");
	scanf("%d %d %d %d %d",&phy,&chem,&bio,&comp,&maths);
	total=phy+chem+bio+comp+maths;
	percentage=(total)/5;
	if(percentage>=90)
	{
		printf("grade:A");
	}
	else if(percentage>=80&&percentage<90)
	{
		printf("grade:B");
	}
		else if(percentage>=70&&percentage<80)
	{
		printf("grade:c");
	}
		else if(percentage>=60&&percentage<70)
	{
		printf("grade:D");
	}
		else if(percentage>=40&&percentage<60)
	{
		printf("grade:");
	}
	else
	{
		printf("grade:F");
	}
}