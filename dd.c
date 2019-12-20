#include<stdio.h>
main()
{
	int i,j,m,n;
	printf("enter range of columns :");
	printf("enter range of rows :");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the elements :");
			scanf("%d",&a[i][j]);
		}	
	}
	printf("the two dimen array is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf(" \n");	
	}  
}
