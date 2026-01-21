#include<stdio.h>
int main()
{
 int n;
 printf("Enter the number of rows");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
  for(int j=1;j<=n-i;j++)
  {
   printf(" ");
  }
   for(int k=1;k<=i;k++)
   {
   printf("%d",k);
   }
   for(int m=i-1;m>=1;m--)
   {
    printf("%d",m);
   }
   printf("\n");
  }
 }
