#include <stdio.h>
int main(void){
    int i,d;
    int a[3],m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Input year, month, day:");
    for (i = 0; i <3 ; i++) {
        scanf("%d",&a[i]);
    }
    if (((a[0]%4==0)&&(a[0]%100!=0))||(a[0]%400==0)){
        m[1]=29;
    }
    d=a[2];
    for (i = 0; i <a[1]-1 ; i++) {
        d=d+m[i];
    }
    printf("Days of year: %d",d);
    return 0;
}
