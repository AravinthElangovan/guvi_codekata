#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,k=0;
char s[100]; //String may contain less than or equal to 100 words
gets(s);
char a[10][10]; //Only 10 words are allowed
do
{
a[k][j]=s[i];
i++;
j++;
if(s[i]==' ')
{
a[k][j]='\0';
j=0;
k++;
}
}while(s[i]!='\0');
a[k][j]='\0';//For assigning last element as NULL
 for(i=0;i<=k;i++)
 {
 if(i%2!=0)
 printf("%s ",a[i]);
 else
 printf("%s ",strrev(a[i]));
  }
}
