#include <stdio.h>
void delchar(char sa[], char c);
int main(void){
    char c,s[80];
    printf("Input a string:");
    gets(s);
    printf("Input a char:");
    scanf("%c",&c);
    delchar(s,c);
    printf("After deleted,the string is:");
    puts(s);
    return 0;
}

void delchar(char s[], char c){
    int i,j;
    for (i = 0;s[i]!=0; i++) {
        if (s[i]==c){
            for (j = i;s[j]!=0; j++) {
                s[j]=s[j+1];
            }
            i--;
        }
    }
}
