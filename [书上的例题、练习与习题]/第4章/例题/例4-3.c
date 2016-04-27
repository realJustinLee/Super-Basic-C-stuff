#include <stdio.h>
int main(void){
    int n=0;
    char ch;
    printf("Enter a number: ");
    while ((ch=getchar())!='\n'){
        if (ch!='-'){
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
