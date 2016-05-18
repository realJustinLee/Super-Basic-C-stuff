#include <stdio.h>
int main(void){
    int i,k;
    char str1[80],str2[80];
    long number;
    printf("Enter a string: ");
    i=0;
    while ((str1[i]=getchar())!='\n'){
        i++;
    }
    str1[i]='\0';
    k=0;
    for (i = 0;str1[i]!='\0'; i++) {
        if (str1[i]>='0'&&str1[i]<='9'||str1[i]>='a'&&str1[i]<='f'||str1[i]>='A'&&str1[i]<='F'){
            str2[k]=str1[i];
            k++;
        }
    }
    str2[k]=0;
    number=0;
    for (i = 0;str2[i]!='\0'; i++) {
        if (str2[i]>='0'&&str2[i]<='9'){
            number=number*16+str2[i]-'0';
        }
        else if (str2[i]>='a'&&str2[i]<='f'){
            number=number*16+str2[i]-'a'+10;
        }
        else if (str2[i]>='A'&&str2[i]<='F'){
            number=number*16+str2[i]-'A'+10;
        }
    }
    printf("New string: ");
    for (i = 0;str2[i]!='\0'; i++) {
        putchar(str2[i]);
    }
    printf("\n");
    printf("number=%d\n",number);
    return 0;
}
