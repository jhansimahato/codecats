#include<stdio.h>

int main()
{
    char *ptr="ravindrababuravulu";
    printf("%c\n",*&*&*ptr);
    // here *(dereferencing operator) and & cancel out the effect of each other
    // the printed value is of *ptr i.e the value in first address of ptr
    return 0;
}