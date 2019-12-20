//charcters of acsii values
#include<stdio.h>
main()
{
  int n,l,k;
  for (n=65;n<=128;n++)
   {
     for(k=65;k<=n;k++)
     {
      printf("%c",n);
     }
      printf("\n");
   }
  return 0;
}
