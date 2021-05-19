#include<stdio.h>
#include<math.h>
void quad(int ,int ,int );
void main()
{
 float a,b,c;
 printf("enter the value for a");
 scanf("%f",&a);
 printf("enter the value for b");
 scanf("%f",&b);
 printf("enter the value for c");
 scanf("%f",&c);
quad(a,b,c);
 
}
  void quad( int a,int b,int c)
{
 float d,r1,r2,m,s;
 d=b*b-4*a*c;
 if(d>0)
 {
  printf("the roots are real and distinct:");
  r1=b+pow(d,0.5)/2*a;
  r2=b-pow(d,0.5)/2*a;
  printf("the first root is:%f",r1);
  printf("the second root is:%f",r2);
 }
 else if(d==0)
 {
  printf("the roots are real and equal");
  r1=-b/(2*a);
  r2=r1;
  printf("the first root is:%f",r1);
  printf("the second root is:%f",r2);
 }
 else
  {
   d=-d;
   printf("the roots are imaginary");
   m=-b/(2*a);
   s=pow(d,0.5)/(2*a);
   printf("the first root is:%f+i%f",m,s);
   printf("the second root is:%f-i%f",m,s);
  }
}
/* roots of the quadratic equations */
