#include<stdio.h>
int fact(int n)
{
 if((n==0)||(n==1))
   return 1;
 else
   return n*fact(n-1);
}
int nCr(int n,int r)
{
 return fact(n)/(fact(r)*fact(n-r));
}
void main()
{
 int n,r,C;
 printf("enter the values of n and r:");
 scanf("%d %d",&n,&r);
 C=nCr(n,r);
 printf("the result is%d",C);
}
/* ncr */
