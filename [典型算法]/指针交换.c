#include <stdio.h>
void swap(int *p1,int *p2){
    int *tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}
int main(void){
    void swap(int *p1,int *p2);
    int a=2,b=3;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    swap(p1,p2);
    printf("%d,%d",*p1,*p2);
    return 0;
}
