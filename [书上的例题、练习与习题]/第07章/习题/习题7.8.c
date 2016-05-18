#include <stdio.h>
int main(void){
    int i=0;
    char str[80];
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';
    for (i = 0;str[i]!='\0'; i++) {
        if (str[i]>='A'&&str[i]<='Z'){
            str[i]='A'+'Z'-str[i];
        }
    }
    for (i = 0;str[i]!='\0'; i++) {
        putchar(str[i]);
    }
    return 0;
}
