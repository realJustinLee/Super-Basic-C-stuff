#include <stdio.h>
int main(void){
    int i,number;
    char str[80];
    printf("Input a string:");
    i=0;
    while ((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';
    number=0;
    for (i = 0;str[i]!=0; i++) {
        if (str[i]>='0'&&str[i]<='9'){
            number=number*16+str[i]-'0';
        }
        else if (str[i]>='a'&&str[i]<='f'){
            number=number*16+str[i]-'a'+10;
        }
        else if (str[i]>='A'&&str[i]<='F'){
            number=number*16+str[i]-'A'+10;
        }
    }
    printf("Hex=%d\n",number);
    return 0;
}
