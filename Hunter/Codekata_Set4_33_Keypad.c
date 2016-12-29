#include<stdio.h>
void main(){
int ch;
scanf("%d",&ch);
switch(ch){
    case 0:
    printf("0");
    break;
case 1:
    printf("1");
    break;
case 2:
    printf("ABC");
    break;
case 3:
    printf("DEF");
    break;
case 4:
    printf("GHI");
    break;
case 5:
    printf("JKL");
    break;
case 6:
    printf("MNO");
    break;
case 7:
    printf("PQRS");
    break;
case 8:
    printf("TUV");
    break;
case 9:
    printf("WXYZ");
    break;
default:
    printf("You have Pressed * or # Please press only the Number");
}
}
