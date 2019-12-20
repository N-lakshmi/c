#include<stdio.h>
void main()
 {
	int i=1,n;
	printf("enter the range=");
	scanf("%d",&n);
	do 
	{
		if(i%2==0)
		  printf("\neven=%d",i);
		else
		  printf("\nodd=%d",i);
	i++;
     }
       while(i<=n);
}
