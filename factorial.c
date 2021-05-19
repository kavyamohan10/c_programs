#include<stdio.h>
int main()
{
 int c,n,fact=1;
 printf("enter the number:");
 scanf("%d",&n);
 for(c=1;c<=n;c++)
   fact=fact*c;
 printf("result:%d",fact);
return 0;
}
/* factorial of a number */
