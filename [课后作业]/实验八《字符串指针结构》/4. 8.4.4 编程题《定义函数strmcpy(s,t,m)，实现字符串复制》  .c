#include <stdio.h>

void strcopy(char s[],char t[],int m);

int main(void){
    int m;
    char s[100],t[100];
    printf("Input a string:");
    gets(t);
    printf("Input an integer:");
    scanf("%d",&m);
    strcopy(s,t,m);
    printf("Output is:");
    puts(s);
    return 0;
}

void strcopy(char s[],char t[],int m){
    int i;
    for (i = 0; t[i]!='\0'; i++) {
        s[i]=t[i+m-1];
    }
    s[i]='\0';
}
