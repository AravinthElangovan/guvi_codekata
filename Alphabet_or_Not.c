#include<stdio.h>
#include<conio.h>
void main()
{
    char n;
clrscr();
        scanf("%c",&n);
    if( (n>='a'&& n<='z') || (n>='A' && n<='Z'))
       printf("%c is an alphabet",n);
    else
       printf("%c is an Not an alphabet",n);
getch();
}
