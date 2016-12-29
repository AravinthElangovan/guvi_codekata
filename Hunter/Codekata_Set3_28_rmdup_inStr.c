#include<stdio.h>
#include<string.h>
void main(){
int i,j,d;
char g[50];
gets(g);
d=strlen(g);
for(i=0;i<d-1;i++){
        for(j=i+1;j<d;j++){
    if(g[i]==g[j])
        g[j]='0';
        }
}
    for(i=0;i<d;i++){
        if(g[i]!='0')
printf("%c",g[i]);
    }
}
