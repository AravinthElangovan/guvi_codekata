#include <stdio.h>
#include <conio.h>
void main()
{
int i, j, a, n,del,count=0,num,ncheck;
int number[30];
clrscr();
printf("\n Enter the number:");
scanf("%d",&num);
printf("\n Enter the digits to be deleted: ");
scanf("%d",&del);
ncheck=num;
while(ncheck!=0)
{
ncheck/=10;
++count;
}
n=count;
if(del<=count)
{
for(i=count-1;i>=0;i--)
{
number[i]=num%10;
num=num/10;
}
for (i = 0; i < n; ++i)
{
for (j = i + 1; j < n; ++j)
{
if (number[i] > number[j])
{
a =  number[i];
number[i] = number[j];
number[j] = a;
}
}
}
printf("\nThe least integer after deleting %d digits is: ",del);
for(i=0;i<count-del;i++)
{
printf("%d",number[i]);
}
}
else
printf("\n Invalid Digits");
getch();
}
