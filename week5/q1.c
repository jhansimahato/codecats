#include<stdio.h>
int main(void)
{
    int *pc,c;
    char *pc1;
    c=22;
    printf("address of c: %p\n",&c);
    printf("value of c: %d\n",c);

    pc=&c;
    // %p is format specifier for address/ pointer
    printf("address of pointer:%p\n",pc);
    printf("content of pointer: %d\n",*pc);
    printf("size of pointer:%d\n",sizeof(pc));

   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2

   
    printf("size of pointer pc1:%d\n",sizeof(pc1));
   return 0;
}