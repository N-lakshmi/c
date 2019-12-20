//unconditional controlling statements
#include<stdio.h>
main()
{
	int i;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==5)
		break;
	}
	printf("%d",i)
}
