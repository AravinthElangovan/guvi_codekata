#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("Enter the Character");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
printf("The Entered character %c is Vowel",n);
else
printf("The Entered character %c is Consonant",n);
getch();
}
