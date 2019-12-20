//binary search//
#include<stdio.h>
main()
{
 int f,l,a[10],i,m,n,search;
 printf("enter the size of the array");
 scanf("%d",&n);
 printf("enter the sorted elements");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter the search element");
 scanf("%d",&search);
 f=0;
 l=n-1;
 m=(f+l)/2;
 if(m==search)
 {
 printf("element is found") ;
 }
 else
 {
 if(m<search)
 {
 f=m+1;
 l=n-1;
 m=(f+l)/2;
 printf("element is found");
 }
 if(m>search)
 {
 f=0;
 l=m-1;
 m=(f+l)/2;
 printf("element is found");
 }
 return 0;
 }
}




