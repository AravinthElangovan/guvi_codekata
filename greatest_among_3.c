#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values of a,b and c");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("%d is greatest",a);
else if((b>a)&&(b>c))
{
printf("%d is greatest",b);
}
else
printf("%d is greatest",c);
getch();
}
