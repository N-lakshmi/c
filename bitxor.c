#include<stdio.h>
main()
{
 int a,b,c;
 printf("enter the valule of a,b=");
 scanf("%d%d",&a,&b);
 c=(a^b);            //bitwise x-or(^)//
 printf("%d",c);     //1-1=0,0-0=0//
}
