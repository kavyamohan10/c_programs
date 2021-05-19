#include<stdio.h>
void main()
{
 int n;
 void fibo(int n);
 printf("enter a number");
 scanf("%d",&n);
 printf("fibonacci series\n0\n1\n");
 fibo(n);
}
void fibo(int n)
{
 int a=0,b=1,c,i;
 for(i=1;i<=n-2;i++)
 {
  c=a+b;
  printf("%d\n",c);
  a=b;
  b=c;
 }
}
/* fibonacci series */
