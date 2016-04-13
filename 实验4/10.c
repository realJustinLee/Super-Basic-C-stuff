#include <stdio.h>
int main(void){
    int i=0;
    char a,b=47;
    while ((a=getchar())!='\n'){
        if (a<b){
            i++;
            printf("no");
            break;
        }
        b=a;
    }
    if (i==0){
        printf("yes");
    }
    return 0;
}
