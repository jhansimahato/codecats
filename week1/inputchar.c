#include<stdio.h>

void main(void)
{
  char c;
  scanf("%c",&c);
  if(c>='0' && c<='9')
  {
      printf("%c is numeric",c);
  }
  else if(c>='A' && c<='Z' || c >= 'a' &&  c <= 'z')
  {
      printf("%c is alphabet",c);
  }
  else
  {
      printf("%c is special character",c);
  }
}