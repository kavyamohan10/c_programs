#include<stdio.h>
int main()
{
 int row,coeff,space,i,j;
 printf("enter number of rows;");
 scanf("%d",&row);
 for (i=0;i<row;i++)
  {
    for (space=1;space<=row-i;space++)
       printf("  ");
    for (j=0;j<=i;j++)
       {
         if (j==0||i==0)
            coeff=1;
         else
            coeff=coeff*(i-j+1)/j;
         printf("%4d",coeff);
       }
     printf("\n");
  }
 return 0;
}
/* pascals triangle */
