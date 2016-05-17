#include <stdio.h>
int main(void){
    char ch;
    printf("Input characters: ");
    while ((ch=getchar())!='\n'){
        if (ch>='A'&&ch<='Z'){
            ch=ch-'A'+'a';
        }
        else if (ch>='a'||ch<='z'){
            ch=ch-'a'+'A';
        }
        putchar(ch);
    }
    return 0;
}