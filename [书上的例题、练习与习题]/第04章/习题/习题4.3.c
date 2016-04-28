#include <stdio.h>
int main(void){
    int sum=0,n=0;
    char c;
    while ((c=getchar())!='\n'){
        n++;
        sum=sum+c-48;
    }
    printf("sum=%d,n=%d",sum,n);
    return 0;
}
