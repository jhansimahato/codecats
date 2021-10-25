#include<stdio.h>

void main()
{
	int salary;
	float hra,da,grosssalary;
	printf("enter your basic salary: ");
	scanf("%d",&salary);
	if(salary<=10000)
	{
		hra= (salary)*(20/100);
		da= (salary)*(80/100);
		grosssalary= salary+hra+da;
	}
	else if(salary<=20000 && salary>10000)
	{
		hra= (salary)*0.25;
		da= (salary)*0.9;
		grosssalary= salary+hra+da;
	}
	else 
	{
		hra= (salary*30)/100;
		da= (salary*95)/100;
		grosssalary= salary+hra+da;
	}
	printf("gross salary: %0.2f",grosssalary);
}