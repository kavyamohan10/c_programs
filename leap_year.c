#include<stdio.h>
void main()
{
 int x;
 printf("enter the year:");
 scanf("%d",&x);
 if (x%4==0)
  {
    if (x%100==0)
       {
	 if (x%400==0)
           printf("the year is leap year");
         else 
	   printf("the year is not a leap year");
        }
      else
        printf("the year is leap year");
  }   
 else
   printf("the year is not a leap year");
}
