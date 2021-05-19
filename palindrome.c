#include<stdio.h>
void main()
{
   int num,rev=0,rem,p;
   printf("enter a number ");
   scanf("%d",&num);
   p=num;
   while(num>0 )
   {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
      
    } 
 if (p==rev)
         { 
           printf("the number is palindrome");
         }
        else
     {
       printf("the number is not palindrome");
     }
}
/*palindrome of a number */
