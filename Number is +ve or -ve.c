#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter the Number\n");
 scanf("%d",&n);
 if(n>0)
 printf("\nThe entered Number %d is Positive\n",n);
 else if(n<0)
 printf("\nThe entered Number %d is Negative",n);
 else
 printf("\nThe entered Number is Zero\n");
 getch();
 }
