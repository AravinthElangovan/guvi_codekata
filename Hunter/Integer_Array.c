#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
int a[5],k=0,i,f[5];
clrscr();
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5-1;i++)
{
f[i]=abs(a[i]-a[i+1]);
if(f[i]>k)
k=f[i];
}
printf("%d",k);
getch();
}
