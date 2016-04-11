#include <stdio.h>
int main(void){
    int b,i=0,s=0;
    char a;
    printf("Input an integer: ");
    while((a=getchar())!='\n'){
        if (a=='-') continue;
        b=a-48;
        i++;
        s=s+b;
    }
    printf("count=%d sum=%d",i,s);
    return 0;
}