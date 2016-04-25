#include <stdio.h>
int main(void){
    int hh,mm,ss,i;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    ss--;
    if (ss<00){
        mm--;
        ss=59;
    }
    if (mm<00){
        hh--;
        mm=59;
    }
    if (hh<00){
        hh=23;
    }
    printf("%.2d:%.2d:%.2d\n",hh,mm,ss);
    for (i = 1; i <=2 ; i++) {
        ss++;
        if (ss==60){
            mm++;
            ss=00;
        }
        if (mm==60){
            hh++;
            mm=00;
        }
        if (hh==24){
            hh=00;
        }
    }
    printf("%.2d:%.2d:%.2d\n",hh,mm,ss);
    return 0;
}
