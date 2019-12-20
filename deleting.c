#include<stdio.h>
main()
{
	int i,a[10],n,p,d;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position:");
	scanf("%d",&p);
	for(i=p;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("final array:");
	for(i=0;i<n-1;i++)
	{
		printf("%2d",a[i]);
	}
	return 0;
		
}
