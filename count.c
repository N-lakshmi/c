//count the digits in the number//
#include<stdio.h>
main()
{
	int n,c=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}
