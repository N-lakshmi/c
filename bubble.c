//bubble sort//
#include<stdio.h>
main()
{
	int i,j,a[10],n,temp;
	printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the values\n");
     for(i=0;i<n;i++)
      {
		scanf("%d",&a[i]);
      }
	  for(i=n;i>0;i--)
	  {
			for(j=0;j<i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
            }
      }
	  printf("sorted:");
	  for(i=0;i<n;i++)
	  {
			printf("%3d",a[i]);
      }
return 0;
 }
