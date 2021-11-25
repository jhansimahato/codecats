#include<stdio.h>
//call by reference
void swap(int *a,int *b)
{
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
    
}
int main(void)
{
    int a=3,b=4;
     swap(&a,&b);
     printf("%d %d",a,b);


}