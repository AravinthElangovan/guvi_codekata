#include <stdio.h>
#include<conio.h>
#include<string.h>
void main() {
char str[100];
clrscr();
printf("Enter the string to be Reversed\n");
scanf("%s",str);
strrev(str);
printf("%s",str);
getch();
}
