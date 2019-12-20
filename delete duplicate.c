//delete duplicate elements
#include<stdio.h>
main()
{
	int n,i,j,del,m,c=0,a[100],b[100];
	printf("enter the size of the arrar");
	scanf("%d",&n);
	m=n;
	for(i=0;i<n;i++)
	{
		printf("enter the %d element:",i);
		scanf("%d",&i);
		b[i]=a[i];
	}
	printf("enter the element that have to be deleted");
	scanf("%d",&del);
	for(i=0;i<n;i++)
	{
		if(b[i]==del)
		{
			for(i=i-c;j<m-1;j++)
			{
				a[j]=a[j+1];
				}
				m=m-1;
				c+=1;
				}
				}
				for(i=0;i<n;i++)
				{
					printf("%2d",a[i]);
				}
}
