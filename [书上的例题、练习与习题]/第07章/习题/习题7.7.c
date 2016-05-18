#include <stdio.h>
int main(void){
    int i=0,count=0;
    char str[80];
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';
    for (i = 0;str[i]!='\0'; i++) {
        if (str[i]>='B'&&str[i]<='Z'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
