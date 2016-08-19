#include<stdio.h>
#include<conio.h>
struct mark
{
int m1,m2,m3,total;
float avg;
char name[20];
}M[2];
void main()
{
int i;
clrscr();
for(i=0;i<2;i++)
{
scanf("%s %d %d %d",&M[i].name,&M[i].m1,&M[i].m2,&M[i].m3);
M[i].total=M[i].m1+M[i].m2+M[i].m3;
M[i].avg=(float)M[i].total/3;
}
if(M[0].total>M[1].total)
printf("%s",M[0].name);
else
printf("%s",M[1].name);
getch();
}
