//biggest number in 3 numbers
#include<stdio.h>
main()
{
  int a,b,c;
  printf("enter the value of a,b,c=");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b)
       {
	 printf("a is big");
       }
  else
      {
	printf("b is big");
      }
      if (a>c)
	{
	 printf("a is big");
	}
     else
	{
	  printf("c is big");
	}
 return 0;
}
