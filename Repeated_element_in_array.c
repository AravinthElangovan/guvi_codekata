#include <stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%d",&n);
int a[n],i,j;
clrscr();
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
printf("%d",a[i]);
}
}
getch();
}
