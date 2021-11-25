#include<stdio.h>

int main(void)
{
    int x=5;
    int *y=&x;
    printf("%d\n",x); //value of x
    printf("%p\n",&x); // adress of x
    printf("%p\n",y); //address of x stored in y
   printf("%d\n",*y); //value in address pointed by y
   printf("%p\n",&y); //adress of y
}