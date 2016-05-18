#include <stdio.h>
int main(void){
    int i=1,j;
    char str[80];
    while ((str[i]=getchar())!='\n'){
        i++;
    }
    j=i;
    for (i=j; i>=0 ; i--) {
        putchar(str[i]);
    }
    return 0;
}
