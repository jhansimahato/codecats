#include<stdio.h>
void main(void)
{
	int a500=0,a100=0,a50=0,a20=0,a10=0,a5=0,a2=0,a1=0,amount;
	 printf("enter amount: ");
	 scanf("%d",&amount);
	 if(amount >= 500 )
	 {
	 	a500 =amount/500 ;
	 	amount-=(a500 * 500);
	 }
	  if(amount >= 100 )
	 {
	 	a100 =amount/100 ;
	 	amount-=(a100 * 100 );
	 }
	  if(amount >= 50 )
	 {
	 	a50 =amount/50 ;
	 	amount-=(a50 * 50 );
	 }
	  if(amount >= 20 )
	 {
	 	a20 =amount/20 ;
	 	amount-=(a20 * 20 );
	 }
	  if(amount >=10 )
	 {
	 	a10 =amount/10 ;
	 	amount-=(a10 *10 );
	 }
	  if(amount >=5 )
	 {
	 	a5 =amount/5 ;
	 	amount-=(a5 * 5 );
	 }
	  if(amount >=2 )
	 {
	 	a2 =amount/2 ;
	 	amount-=(a2 * 2);
	 }
	  if(amount>=1 )
	 {
	 	a1 =amount/1 ;
	 	amount-=(a1 *1 );
	 }
	 
	 printf("the minimum notes required: \n");
	 printf("500 :%d \n",a500);
	 printf("100 :%d\n",a100);
	 printf("50 :%d\n",a50);
	 printf("20 :%d\n",a20);
	 printf("10 :%d\n",a10);
	 printf("5 :%d\n",a5);
	 printf("2 :%d\n",a2);
	 printf("1 :%d\n",a1);
}