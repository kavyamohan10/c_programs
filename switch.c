#include<stdio.h>
void main()
{
 int ch;
 int
 a,b,res;
 printf("enter two number:");
 scanf("%d%d",&a,&b);
 printf("\n menu 1.addition,2.subtraction,3.multiplication,4.division");
 printf("\n enter your choice");
 scanf("%d",&ch);
 switch (ch)
{
 case 1:
    res=a+b;
    break;
 case 2:
    res=a-b;
    break;
 case 3:
    res=a*b;
    break;
 case 4:
    res=a/b;
    break;
 default:
    printf("wrong choice!");
 }
 printf("result is %d",res);
}
/* basic switch program */
