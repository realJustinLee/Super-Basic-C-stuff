#include <stdio.h>
int main(void){
    int i=1;
    char ch;
    printf("Input words: ");
    while ((ch=getchar())!='\n'){
        if (ch==' '){
            i++;
        }
    }
    printf("count=%d",i);
    return 0;
}