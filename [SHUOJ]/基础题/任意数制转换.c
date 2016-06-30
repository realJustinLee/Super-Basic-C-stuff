#include <stdio.h>
void shift(int num,int bin){
    char mem[100]="";
    const char *ele="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,wei,t;
    t=num;
    for (i = 0;num;i++) {
        num=num/bin;
    }
    num=t;
    wei=i;
    for (i = 0;i<wei;i++) {
        mem[wei-i-1]=ele[num%bin];
        num=num/bin;
    }
    puts(mem);
}
int main(void){
    int num,bin,i=0;
    while (scanf("%d%d",&num,&bin)==2){
        printf("Case %d: ",++i);
        shift(num,bin);
    }
    return 0;
}
