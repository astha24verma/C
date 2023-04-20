#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\nEnter two numbers\n");
scanf("%d%d",&a,&b);
printf("\nEnter 1 for addition\n Enter 2 for subtraction\n Enter 3 for multiplication\n Enter 4 for division\n");
printf("\nEnter choice\n");
scanf("%d",&c);
switch(c)
{

case 1 :  printf("\nADDITION\n");
              printf("\n SUM=%d",a+b);
              break;
case 2 :  printf("\nSUBTRACTION\n");
              printf("\n DIFFERENCE=%d",a-b);
              break;
case 3 :  printf("\nMULTIPLICATION\n");
              printf("\n PRODUCT=%d",a*b);
              break;
case 4 :  printf("\nDIVISION\n");
              printf("\n QUOTIENT=%d",a/b);
              break;
default : printf("\nINVALID\n");
}
}