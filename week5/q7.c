#include<stdio.h>
void main()
{
    float arr[5]={12.5,10.0,3.4,2.3,1.2};
    float *ptr1=&arr[0];
    float *ptr2= ptr1+3;// ptr1 + 3*(size of float)
    printf("%f\n",*ptr1);//value of ptr1
    printf("%f\n",*ptr2);//value of ptr2
    printf("%u\n",ptr1);
    printf("%u\n",ptr2);
    printf("%d\n",ptr2-ptr1);// difference between the address in ptr1 and ptr2
    //(ptr1-ptr2)/(sizeof(float))

}