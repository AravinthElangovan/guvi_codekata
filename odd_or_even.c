#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the Number");
scanf("%d",&n);
if(n%2==0)
printf("The Entered number %d is Even",n);
else
printf("The Entered number %d is Odd",n);
getch();
}
