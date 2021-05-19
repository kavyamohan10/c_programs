#include<stdio.h>
void main()
{
  int num,sum=0,digit;
  printf("enter atleast a two digit number:");
  scanf("%d",&num);
  while(num>0)
  {
     digit=num%10;
     sum=sum+digit;
     num=num/10;
  }
     printf("the sum of the digits is:%d",sum);
} 

/* sum of the digits */
	
	

