#include <stdio.h>
int main(void) {
    char ch;
    int word=1;
    printf("Input words: ");
    while((ch=getchar())!='\n') {
        if(ch==' ')
            word++;
    }
    printf("word=%d",word);
    return 0;
}