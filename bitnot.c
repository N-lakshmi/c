#include<stdio.h>
main()
{
  int a,c;
  printf("enter the value of a=");
  scanf("%d",&a);
  c=(~a);              //bitwise not(~)//
  printf("%d",c);
}
