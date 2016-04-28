#include <stdio.h>
int main(void){
    int word=0;
    char c;
    while ((c=getchar())!='\n'){
        if (c=='$'){
            word=0;
        }
        else if (word==0){
            if (c>='a'&&c<='z'){
                c=c-'a'+'A';
                word=1;
            }
            else{
                word=0;
            }
        }
        putchar(c);
    }
    return 0;
}
