#include<math.h>
#include<stdio.h>
void main()
{
 int x,n,sum=0,i;
 printf("enter the value of x");
 scanf("%d",&x);
 printf("enter the value of n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
  {
    sum=sum+pow(x,i);
  }
 printf("sum of gp is %d",sum);
}
/* sum of gp */
